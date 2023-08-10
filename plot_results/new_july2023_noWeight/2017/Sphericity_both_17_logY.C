void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(0,0,1,1);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.865834,1.052419,12.22863);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1.524233e+10);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0.001410134);
   st_stack_250->SetMaximum(5.238196e+10);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetLabelSize(0.035);
   st_stack_250->GetXaxis()->SetTitleSize(0.035);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Events/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetLabelSize(0.05);
   st_stack_250->GetYaxis()->SetTitleSize(0.057);
   st_stack_250->GetYaxis()->SetTitleOffset(1.2);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetLabelSize(0.035);
   st_stack_250->GetZaxis()->SetTitleSize(0.035);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,27058.97);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,33866.79);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,27631.25);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,18235.96);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,15460.54);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,11772.63);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,9542.716);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5459.351);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,37053.46);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,5428.269);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4337.515);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3422.592);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2565.901);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2167.724);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1469.966);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1789.967);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1947.47);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,548.8867);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,470.4633);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,316.4889);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,51.42589);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,35.68988);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,290.3847);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1954.616);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2372.273);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2583.18);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1693.385);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1555.137);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1371.639);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1253.114);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,750.6905);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,20976.39);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,911.2744);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,783.4216);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,679.5712);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,558.6992);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,487.4654);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,398.1794);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,547.0581);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,607.8823);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,98.58976);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,275.0565);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,269.4841);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,25.69162);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,24.08128);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,269.2187);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,180.3562);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,186.4365);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,138.781);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,100.9312);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,77.86911);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,62.44404);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,54.00314);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,45.75777);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,37.92906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,30.6852);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,26.30209);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,23.20906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,19.02189);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,18.07229);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,13.19022);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,10.81906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.358544);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.657374);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.543622);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.28294);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.09900528);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2624063);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04712387);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.196991);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.2623);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.653115);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.918258);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.468396);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.067536);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.952984);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.744411);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.418189);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.207591);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.052409);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.972917);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.783237);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.722805);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.490795);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.370866);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.258051);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9166664);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6368623);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.6272925);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.07008809);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2624063);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04712387);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3288.785);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3675.946);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2714.043);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2068.966);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1596.587);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1279.875);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1067.575);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,874.7823);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,742.4025);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,636.8691);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,541.4746);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,459.5015);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,399.88);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,325.8199);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,280.1187);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,228.8511);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,170.0469);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,118.8529);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,73.68254);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,34.45165);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,13.77354);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.061884);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.8841656);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1336991);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,14.32954);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,15.1595);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,13.03529);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,11.37834);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,9.988958);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,8.95167);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,8.175498);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,7.405239);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.815158);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,6.32418);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.828713);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,5.366172);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.005413);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.524323);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.19991);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.791019);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.269566);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.726393);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.149373);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.470321);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.9304327);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.4961574);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2275395);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07719119);
   VbbHcc_both_Sphericity_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,411.8512);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,439.6566);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,295.4967);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,258.6363);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,176.607);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,154.2149);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,136.1186);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,105.0951);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,95.9924);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,78.1326);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,55.74964);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,52.54628);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,48.49744);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,46.66972);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,33.33953);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,22.22722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,22.67415);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,10.09437);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,7.322828);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.108533);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,0.9477646);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.1083014);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.06630981);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.08496);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,14.87485);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,10.22581);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,10.78692);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,7.558925);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.165773);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,7.970128);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,7.433751);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,6.420834);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,6.522131);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.214147);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.213732);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.164877);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,6.068929);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.605661);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.108448);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.397045);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.33571);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.23169);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,0.9102743);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5199395);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.1083014);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.06630981);
   VbbHcc_both_Sphericity_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,57.32592);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,37.46922);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,32.58962);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,24.95829);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,23.30186);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,14.93034);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,11.04419);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,11.85392);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,15.78983);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,5.983063);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,7.807803);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.399483);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.925788);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.377572);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.666258);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,3.017795);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.107902);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.5101218);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.855593);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.09281656);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,8.004226);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.683662);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.877483);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.309558);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,3.415491);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.642914);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.951142);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,1.779469);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,7.059606);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.023281);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,1.887582);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6677919);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.7071464);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5546914);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.5418446);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,1.257362);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3490318);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.2031018);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.4269629);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.08202873);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,1.487653);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.7438266);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,0.9917687);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7438266);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.6073318);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.4294485);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.4958844);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.3506432);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.3506432);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.3506432);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4294485);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.2479422);
   VbbHcc_both_Sphericity_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,5.317738);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,8.609671);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,4.304835);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.304835);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,4.304835);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.785482);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,3.545159);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.291933);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.532256);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.025805);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.266128);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.772579);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,1.012902);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.012902);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.160426);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.476546);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.044076);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.044076);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.044076);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.8398543);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.9474835);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.9130179);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8007697);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.7162302);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.5662297);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.669972);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.5064512);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.5064512);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_Sphericity_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,7.104899);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,7.843008);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,5.702978);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.530403);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.86982);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,3.270612);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.679479);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.28216);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.970443);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.629653);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.405152);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.219413);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.9561492);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.8673178);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.6573526);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4732292);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4199304);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2341919);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1598966);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06945003);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.0193814);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004845351);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1071226);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1125494);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.09597383);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.08554023);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.07905828);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.07268026);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06578504);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.06071207);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05641361);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0513038);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.0476391);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04437899);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03929749);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03742752);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03258376);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02764635);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02604298);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01944858);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01607021);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01059103);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.005594929);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002797464);
   VbbHcc_both_Sphericity_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.108033);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.408637);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.504753);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.936716);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.703696);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.361216);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.133172);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.9980037);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.8412752);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.7380335);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6335478);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5373547);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.454015);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4050891);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3180178);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2674335);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1845084);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1409727);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.08748599);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03938943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008707136);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002902379);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001243877);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03589805);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03759399);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.0322263);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02833746);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02657811);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02375699);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02167584);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02034202);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01867657);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01749307);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01620756);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01492652);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01372028);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01295995);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01148296);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01053018);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.008746535);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.007645317);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.006022784);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.00404127);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001900053);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001096996);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0007181525);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02212352);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02528402);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.009481507);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.007901256);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.005912758);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.0052411);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.003870809);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.003533549);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.002737075);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.009757466);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01017268);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.007266198);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.00477493);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.004567324);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.003529296);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.002906479);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002076057);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001868451);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.001660845);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001423273);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.00145324);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001228212);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.0009956417);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001078751);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0009737568);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0009284407);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.00085598);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.0007767892);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.000622817);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0006565067);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.000622817);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0005871975);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_both_Sphericity_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__686 = new TH1D("VbbHcc_both_Sphericity__686","",25,0,1);
   VbbHcc_both_Sphericity__686->SetBinContent(1,12784);
   VbbHcc_both_Sphericity__686->SetBinContent(2,12339);
   VbbHcc_both_Sphericity__686->SetBinContent(3,9350);
   VbbHcc_both_Sphericity__686->SetBinContent(4,6994);
   VbbHcc_both_Sphericity__686->SetBinContent(5,5633);
   VbbHcc_both_Sphericity__686->SetBinContent(6,4542);
   VbbHcc_both_Sphericity__686->SetBinContent(7,3805);
   VbbHcc_both_Sphericity__686->SetBinContent(8,3211);
   VbbHcc_both_Sphericity__686->SetBinContent(9,2702);
   VbbHcc_both_Sphericity__686->SetBinContent(10,2140);
   VbbHcc_both_Sphericity__686->SetBinContent(11,1969);
   VbbHcc_both_Sphericity__686->SetBinContent(12,1671);
   VbbHcc_both_Sphericity__686->SetBinContent(13,1427);
   VbbHcc_both_Sphericity__686->SetBinContent(14,1134);
   VbbHcc_both_Sphericity__686->SetBinContent(15,960);
   VbbHcc_both_Sphericity__686->SetBinContent(16,753);
   VbbHcc_both_Sphericity__686->SetBinContent(17,546);
   VbbHcc_both_Sphericity__686->SetBinContent(18,417);
   VbbHcc_both_Sphericity__686->SetBinContent(19,261);
   VbbHcc_both_Sphericity__686->SetBinContent(20,88);
   VbbHcc_both_Sphericity__686->SetBinContent(21,33);
   VbbHcc_both_Sphericity__686->SetBinContent(22,14);
   VbbHcc_both_Sphericity__686->SetBinContent(23,5);
   VbbHcc_both_Sphericity__686->SetBinContent(24,1);
   VbbHcc_both_Sphericity__686->SetEntries(72803);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__686->SetLineColor(ci);
   VbbHcc_both_Sphericity__686->SetLineWidth(2);
   VbbHcc_both_Sphericity__686->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__686->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1499[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1499[25] = {
   31014.34,
   38227.26,
   30824.7,
   20701.55,
   17345.61,
   13292.03,
   10819.64,
   6504.166,
   37951.17,
   6184.342,
   4972.161,
   3965.348,
   3039.902,
   2563.2,
   1800.511,
   2055.624,
   2151.515,
   684.3767,
   555.1168,
   356.5337,
   66.27429,
   40.13022,
   291.3836,
   0.1336991,
   0};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1499[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1499[25] = {
   1954.736,
   2372.377,
   2583.24,
   1693.466,
   1555.195,
   1371.698,
   1253.172,
   750.7716,
   20976.39,
   911.3233,
   783.4598,
   679.609,
   558.7342,
   487.5279,
   398.2133,
   547.0785,
   607.902,
   98.64097,
   275.0687,
   269.4904,
   25.71382,
   24.08807,
   269.2188,
   0.07719119,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1499,Graph_from_VbbHcc_both_Sphericity_fy1499,Graph_from_VbbHcc_both_Sphericity_fex1499,Graph_from_VbbHcc_both_Sphericity_fey1499);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1499 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1499","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMinimum(64.82032);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMaximum(64820.32);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1499);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__687 = new TH1D("data_mc_ratio__687","",25,0,1);
   data_mc_ratio__687->SetBinContent(1,0.4121964);
   data_mc_ratio__687->SetBinContent(2,0.3227801);
   data_mc_ratio__687->SetBinContent(3,0.3033282);
   data_mc_ratio__687->SetBinContent(4,0.3378491);
   data_mc_ratio__687->SetBinContent(5,0.3247507);
   data_mc_ratio__687->SetBinContent(6,0.3417086);
   data_mc_ratio__687->SetBinContent(7,0.3516753);
   data_mc_ratio__687->SetBinContent(8,0.4936836);
   data_mc_ratio__687->SetBinContent(9,0.07119675);
   data_mc_ratio__687->SetBinContent(10,0.3460352);
   data_mc_ratio__687->SetBinContent(11,0.3960049);
   data_mc_ratio__687->SetBinContent(12,0.4214006);
   data_mc_ratio__687->SetBinContent(13,0.4694231);
   data_mc_ratio__687->SetBinContent(14,0.4424157);
   data_mc_ratio__687->SetBinContent(15,0.5331819);
   data_mc_ratio__687->SetBinContent(16,0.3663122);
   data_mc_ratio__687->SetBinContent(17,0.2537747);
   data_mc_ratio__687->SetBinContent(18,0.6093136);
   data_mc_ratio__687->SetBinContent(19,0.4701713);
   data_mc_ratio__687->SetBinContent(20,0.246821);
   data_mc_ratio__687->SetBinContent(21,0.4979307);
   data_mc_ratio__687->SetBinContent(22,0.3488643);
   data_mc_ratio__687->SetBinContent(23,0.01715951);
   data_mc_ratio__687->SetBinContent(24,7.479484);
   data_mc_ratio__687->SetBinError(1,0.003645615);
   data_mc_ratio__687->SetBinError(2,0.002905807);
   data_mc_ratio__687->SetBinError(3,0.003136946);
   data_mc_ratio__687->SetBinError(4,0.004039801);
   data_mc_ratio__687->SetBinError(5,0.004326934);
   data_mc_ratio__687->SetBinError(6,0.005070285);
   data_mc_ratio__687->SetBinError(7,0.005701177);
   data_mc_ratio__687->SetBinError(8,0.008712214);
   data_mc_ratio__687->SetBinError(9,0.001369675);
   data_mc_ratio__687->SetBinError(10,0.007480204);
   data_mc_ratio__687->SetBinError(11,0.008924373);
   data_mc_ratio__687->SetBinError(12,0.01030877);
   data_mc_ratio__687->SetBinError(13,0.0124266);
   data_mc_ratio__687->SetBinError(14,0.01313784);
   data_mc_ratio__687->SetBinError(15,0.01720837);
   data_mc_ratio__687->SetBinError(16,0.01334916);
   data_mc_ratio__687->SetBinError(17,0.01086055);
   data_mc_ratio__687->SetBinError(18,0.02983821);
   data_mc_ratio__687->SetBinError(19,0.02910287);
   data_mc_ratio__687->SetBinError(20,0.02631121);
   data_mc_ratio__687->SetBinError(21,0.0866786);
   data_mc_ratio__687->SetBinError(22,0.0932379);
   data_mc_ratio__687->SetBinError(23,0.007673967);
   data_mc_ratio__687->SetBinError(24,7.479484);
   data_mc_ratio__687->SetMinimum(0.4);
   data_mc_ratio__687->SetMaximum(1.6);
   data_mc_ratio__687->SetEntries(3.359312);
   data_mc_ratio__687->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__687->SetLineColor(ci);
   data_mc_ratio__687->SetLineWidth(2);
   data_mc_ratio__687->SetMarkerStyle(20);
   data_mc_ratio__687->SetMarkerSize(1.2);
   data_mc_ratio__687->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__687->GetXaxis()->SetRange(1,25);
   data_mc_ratio__687->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__687->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__687->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__687->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__687->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__687->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1500[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1500[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1500[25] = {
   0.06302685,
   0.06205983,
   0.08380424,
   0.08180381,
   0.08965929,
   0.1031971,
   0.1158238,
   0.1154293,
   0.5527205,
   0.1473598,
   0.1575693,
   0.171387,
   0.1838001,
   0.1902028,
   0.2211668,
   0.2661375,
   0.282546,
   0.1441326,
   0.4955151,
   0.7558622,
   0.3879908,
   0.6002476,
   0.9239327,
   0.5773503,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1500,Graph_from_mc_statistical_error_fy1500,Graph_from_mc_statistical_error_fex1500,Graph_from_mc_statistical_error_fey1500);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1500 = new TH1F("Graph_Graph_from_mc_statistical_error1500","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1500->SetMinimum(0.0684606);
   Graph_Graph_from_mc_statistical_error1500->SetMaximum(2.108719);
   Graph_Graph_from_mc_statistical_error1500->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1500->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1500);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
