void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Mon Jul 24 10:11:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(0,0,1,1);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-969.2879,1.052419,968328.6);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(829903.6);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",50,0,1);
   st_stack_157->SetMinimum(0.01);
   st_stack_157->SetMaximum(871398.8);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,50);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/0.02");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,345183);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,62468.63);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,9867.388);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,2062.614);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,60.17342);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,304.3103);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,20.42213);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,11419.15);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,22791.51);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,2593.646);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,658.9614);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,32.77865);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,304.3103);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,20.42213);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,2028.064);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,288.6287);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,63.77687);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,15.5853);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,4.288875);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,1.630028);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.564122);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.4307971);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.2262431);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.0288627);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.08009947);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.04302736);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,17.87675);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,6.516644);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,3.140974);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,1.578648);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.8198286);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.5223592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.3004263);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.2522014);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.1025664);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.0288627);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.05676467);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.04302736);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,22607.12);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,3385.909);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,783.7316);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,229.8132);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,81.37028);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,32.46885);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,14.24765);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,5.610407);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,3.235866);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,1.791916);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,1.023329);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,0.5716538);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,0.3518403);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.1365931);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.2186762);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,38.28595);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,14.8094);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,7.082004);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,3.822561);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,2.262875);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,1.401958);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,0.9237223);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,0.5653749);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.4259171);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.3177862);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.2378838);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.1767657);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.1507413);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.07940084);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.110208);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,2314.694);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,220.8604);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,48.45066);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,7.757051);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,2.38424);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,0.1519038);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.1088072);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.07066921);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,43.13197);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,15.31463);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,7.706701);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,2.992243);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,0.6867642);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.1074997);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.08744853);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.07066921);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,1244.689);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,126.8664);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,36.9107);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,2.385776);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,2.575244);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,0.2149029);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,49.27098);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,16.1352);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,11.96317);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,1.169471);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.666113);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.2148344);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,4.631644);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,0.4553172);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,0.6454552);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.2036736);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,28.48952);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,2.04536);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,0.1400034);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.1433755);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.06245006);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,1.394616);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.3798343);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.09924601);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.1016015);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.06245006);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,26.06099);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,2.546234);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,0.5521322);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.2110638);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(6,0.2026665);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,2.240251);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,0.7077161);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.3189743);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.2110638);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(6,0.2026665);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,13.63456);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,1.154694);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.1803647);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.03603688);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.01169147);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.001636969);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.003672469);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.1443202);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.0417757);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.01649322);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.007548383);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.004137267);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.001636969);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.002193935);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,5.401258);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,0.5503477);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.09347144);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.02004878);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.004678037);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.002020756);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.001040914);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.0003224482);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.0003751724);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.04546977);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.01452999);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.005964656);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.002783473);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.001353976);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.0008424306);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.0006052188);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0003224482);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0003751724);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.6021513);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.02881301);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.004305993);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.0423574);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.00917362);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.003289315);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2072432);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.02360802);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.002285266);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0007551395);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008934189);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.002990496);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.0009336004);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0005339756);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__313 = new TH1D("VbbHcc_algo_Aplanarity__313","",50,0,1);
   VbbHcc_algo_Aplanarity__313->SetBinContent(1,94163);
   VbbHcc_algo_Aplanarity__313->SetBinContent(2,10016);
   VbbHcc_algo_Aplanarity__313->SetBinContent(3,2100);
   VbbHcc_algo_Aplanarity__313->SetBinContent(4,516);
   VbbHcc_algo_Aplanarity__313->SetBinContent(5,133);
   VbbHcc_algo_Aplanarity__313->SetBinContent(6,57);
   VbbHcc_algo_Aplanarity__313->SetBinContent(7,23);
   VbbHcc_algo_Aplanarity__313->SetBinContent(8,9);
   VbbHcc_algo_Aplanarity__313->SetBinContent(9,9);
   VbbHcc_algo_Aplanarity__313->SetBinContent(10,2);
   VbbHcc_algo_Aplanarity__313->SetBinContent(11,2);
   VbbHcc_algo_Aplanarity__313->SetBinContent(12,2);
   VbbHcc_algo_Aplanarity__313->SetBinContent(13,1);
   VbbHcc_algo_Aplanarity__313->SetEntries(107082);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__313->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__313->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__313->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__313->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__313->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__313->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__313->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__313->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__313->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__313->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__313->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__313->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__313->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__313->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1313[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1313[50] = {
   373456.6,
   66497.7,
   10801.23,
   2318.566,
   150.8084,
   339.0448,
   14.92162,
   26.46733,
   3.462484,
   1.820779,
   1.174097,
   0.6146811,
   0.3518403,
   0.1365931,
   0.2186762,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1313[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1313[50] = {
   11419.42,
   22791.53,
   2593.697,
   658.9823,
   32.91626,
   304.3142,
   0.9752777,
   20.43151,
   0.4380929,
   0.3190942,
   0.2545684,
   0.1819271,
   0.1507413,
   0.07940084,
   0.110208,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1313,Graph_from_VbbHcc_algo_Aplanarity_fy1313,Graph_from_VbbHcc_algo_Aplanarity_fex1313,Graph_from_VbbHcc_algo_Aplanarity_fey1313);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1313 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1313","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMaximum(423363.6);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1313);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__314 = new TH1D("data_mc_ratio__314","",50,0,1);
   data_mc_ratio__314->SetBinContent(1,0.2521391);
   data_mc_ratio__314->SetBinContent(2,0.1506217);
   data_mc_ratio__314->SetBinContent(3,0.1944223);
   data_mc_ratio__314->SetBinContent(4,0.2225513);
   data_mc_ratio__314->SetBinContent(5,0.8819136);
   data_mc_ratio__314->SetBinContent(6,0.1681194);
   data_mc_ratio__314->SetBinContent(7,1.541387);
   data_mc_ratio__314->SetBinContent(8,0.3400418);
   data_mc_ratio__314->SetBinContent(9,2.59929);
   data_mc_ratio__314->SetBinContent(10,1.098431);
   data_mc_ratio__314->SetBinContent(11,1.703436);
   data_mc_ratio__314->SetBinContent(12,3.25372);
   data_mc_ratio__314->SetBinContent(13,2.842198);
   data_mc_ratio__314->SetBinError(1,0.0008216748);
   data_mc_ratio__314->SetBinError(2,0.001505014);
   data_mc_ratio__314->SetBinError(3,0.004242642);
   data_mc_ratio__314->SetBinError(4,0.009797275);
   data_mc_ratio__314->SetBinError(5,0.0764716);
   data_mc_ratio__314->SetBinError(6,0.02226796);
   data_mc_ratio__314->SetBinError(7,0.3214015);
   data_mc_ratio__314->SetBinError(8,0.1133473);
   data_mc_ratio__314->SetBinError(9,0.8664299);
   data_mc_ratio__314->SetBinError(10,0.776708);
   data_mc_ratio__314->SetBinError(11,1.204511);
   data_mc_ratio__314->SetBinError(12,2.300727);
   data_mc_ratio__314->SetBinError(13,2.842198);
   data_mc_ratio__314->SetMinimum(0.4);
   data_mc_ratio__314->SetMaximum(1.6);
   data_mc_ratio__314->SetEntries(12.14883);
   data_mc_ratio__314->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__314->SetLineColor(ci);
   data_mc_ratio__314->SetLineWidth(2);
   data_mc_ratio__314->SetMarkerStyle(20);
   data_mc_ratio__314->SetMarkerSize(1.2);
   data_mc_ratio__314->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__314->GetXaxis()->SetRange(1,50);
   data_mc_ratio__314->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__314->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__314->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__314->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__314->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__314->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1314[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1314[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1314[50] = {
   0.03057763,
   0.3427416,
   0.2401298,
   0.2842197,
   0.2182654,
   0.8975634,
   0.06536003,
   0.7719522,
   0.1265256,
   0.1752515,
   0.2168205,
   0.2959699,
   0.4284367,
   0.5812945,
   0.5039782,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0.09219298);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.077076);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
