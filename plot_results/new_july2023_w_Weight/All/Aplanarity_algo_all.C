void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Aug 10 12:24:20 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(0,0,1,1);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-17928.57,1.052419,1.791094e+07);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.535052e+07);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",50,0,1);
   st_stack_160->SetMinimum(0.3);
   st_stack_160->SetMaximum(1.611805e+07);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetRange(1,50);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetLabelSize(0.035);
   st_stack_160->GetXaxis()->SetTitleSize(0.035);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/0.02");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetLabelSize(0.05);
   st_stack_160->GetYaxis()->SetTitleSize(0.057);
   st_stack_160->GetYaxis()->SetTitleOffset(1.2);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetLabelSize(0.035);
   st_stack_160->GetZaxis()->SetTitleSize(0.035);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,6068239);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,874395.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,191019.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,45708.66);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,12867.54);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,3011.885);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,788.5191);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,242.4683);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,75.27676);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,16.40358);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,31.0468);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,18.18674);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,315.3991);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,7.711778);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,68453.17);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,28128.18);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,8294.473);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,4123.509);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,2537.002);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,794.4534);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,355.7471);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,72.59924);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,30.75107);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,16.40358);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,22.20363);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,10.75712);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,295.4478);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,4.561373);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,39708.33);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,5544.465);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,1250.465);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,337.2882);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,120.2021);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,41.3315);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,17.90254);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,8.13265);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,5.565711);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,2.518296);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,2.103138);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.9928483);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.08422737);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.4417945);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.0876804);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.027729);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.02438775);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,87.13552);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,32.07035);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,15.67947);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,7.934089);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,5.746955);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,2.739417);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,1.693291);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,1.227713);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,1.136714);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.610143);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.6659568);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.3722537);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.0917668);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.3192891);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.1199607);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.027729);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.02438775);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(0,0.1479447);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(1,752434);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(2,98798.68);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(3,20321.65);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(4,5589.845);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(5,1846.24);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(6,731.6931);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(7,315.7079);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(8,149.1316);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(9,78.49326);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(10,40.20726);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(11,24.20302);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(12,13.18562);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(13,8.99516);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(14,4.508193);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(15,2.588447);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(16,1.326056);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(17,0.8698038);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(18,0.7369079);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(19,0.5227295);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(20,0.08933013);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(21,0.1143592);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(22,0.1017339);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(0,0.1066523);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(1,244.5263);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(2,87.64837);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(3,39.63476);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(4,20.59484);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(5,11.49048);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(6,7.301633);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(7,4.718504);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(8,3.286031);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(9,2.330718);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(10,1.627733);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(11,1.268529);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(12,0.9300271);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(13,0.7740271);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(14,0.565469);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(15,0.3985584);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(16,0.3003556);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(17,0.2382955);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(18,0.2117165);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(19,0.1978834);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(20,0.08933013);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(21,0.08599939);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(22,0.07242232);
   VbbHcc_algo_Aplanarity_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(1,33002.7);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(2,4101.308);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(3,907.2511);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(4,201.0816);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(5,58.33494);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(6,14.30725);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(7,8.380918);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(8,4.292615);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(9,0.6988892);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(10,0.5495428);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(11,0.799269);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(12,0.4505096);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(13,0.3265971);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(18,0.03119144);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(1,154.0539);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(2,62.09149);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(3,30.05648);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(4,14.06456);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(5,9.544316);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(6,3.451503);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(7,3.736918);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(8,2.894769);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(9,0.3520023);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(10,0.3094562);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(11,0.3328348);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(12,0.3777513);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(13,0.2711062);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(18,0.03119144);
   VbbHcc_algo_Aplanarity_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(1,13199.37);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(2,1563.485);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(3,311.8053);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(4,76.44687);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(5,9.750545);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(6,13.19097);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(7,8.569563);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(8,0.6694966);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(9,0.7140507);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(10,0.3795994);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(11,0.1160687);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(13,0.08628121);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(1,156.3968);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(2,60.64946);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(3,26.56204);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(4,11.60284);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(5,2.38939);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(6,7.153044);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(7,6.621669);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(8,0.4153451);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(9,0.5033544);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(10,0.3391159);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(11,0.09321382);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(13,0.08628121);
   VbbHcc_algo_Aplanarity_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(1,133.3693);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(2,13.71631);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(3,3.241022);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(4,1.199528);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(5,0.1380529);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(7,0.09641758);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(1,6.607837);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(2,2.090315);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(3,0.9661691);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(4,0.6170888);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(5,0.1380529);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(7,0.09641758);
   VbbHcc_algo_Aplanarity_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(1,178.3971);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(2,20.74627);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(3,4.424484);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(4,1.165653);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(5,0.4672681);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(6,0.2184507);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(7,0.1228988);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(1,6.859655);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(2,2.240629);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(3,1.015128);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(4,0.6012313);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(5,0.2342996);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(6,0.1548394);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(7,0.1228988);
   VbbHcc_algo_Aplanarity_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(1,411.4206);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(2,43.60979);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(3,8.071084);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(4,1.62335);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(5,0.6117357);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(6,0.2396603);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(1,10.99537);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(2,3.547672);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(3,1.554945);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(4,0.6786057);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(5,0.4325688);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(6,0.2396603);
   VbbHcc_algo_Aplanarity_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(1,283.2622);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(2,23.20398);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(3,3.66712);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(4,0.8125897);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(5,0.2379231);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(6,0.06504275);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(7,0.01914281);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(8,0.01126132);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(9,0.004165884);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(10,0.003318761);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(12,0.002971343);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(13,0.002431021);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(1,0.8091852);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(2,0.2236254);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(3,0.08811629);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(4,0.04209938);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(5,0.02191132);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(6,0.01092851);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(7,0.006105154);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(8,0.004284967);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(9,0.002440922);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(10,0.002347525);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(12,0.002971343);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(13,0.002431021);
   VbbHcc_algo_Aplanarity_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(1,142.6728);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(2,16.23498);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(3,3.116119);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(4,0.6738162);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(5,0.2286877);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(6,0.06712876);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(7,0.02286062);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(8,0.01181779);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(9,0.006476751);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(10,0.002828848);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(11,0.001033366);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(12,0.0005045173);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(1,0.2715986);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(2,0.09160572);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(3,0.04006979);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(4,0.01853533);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(5,0.01073136);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(6,0.005767695);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(7,0.003346446);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(8,0.002356491);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(9,0.001732362);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(10,0.001077852);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(11,0.0006112165);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(12,0.0002984126);
   VbbHcc_algo_Aplanarity_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(1,2.378996);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(2,0.1927226);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(3,0.03610461);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(4,0.009974568);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(6,0.002761603);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(1,0.08070953);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(2,0.02300642);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(3,0.01002333);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(4,0.005230405);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(6,0.002761603);
   VbbHcc_algo_Aplanarity_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(1,1.04818);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(2,0.1151056);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(3,0.02219888);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(4,0.006443591);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(5,0.002222289);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(1,0.01932838);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(2,0.006189587);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(3,0.002686654);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(4,0.001495731);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(5,0.0008825052);
   VbbHcc_algo_Aplanarity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity_all__439 = new TH1D("VbbHcc_algo_Aplanarity_all__439","",50,0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(1,2753392);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(2,368591);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(3,80566);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(4,20297);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(5,5576);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(6,1812);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(7,689);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(8,319);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(9,159);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(10,95);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(11,53);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(12,30);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(13,25);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(14,15);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(15,11);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(16,5);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(17,2);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(18,4);
   VbbHcc_algo_Aplanarity_all__439->SetEntries(3231691);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all__439->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all__439->SetLineWidth(2);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fx1319[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fy1319[50] = {
   6907736,
   984521.5,
   213833.5,
   51918.81,
   14903.75,
   3813.001,
   1139.341,
   404.7177,
   160.7593,
   60.06442,
   58.26933,
   32.8192,
   324.8938,
   4.949988,
   10.38791,
   1.353785,
   0.8698038,
   0.7924871,
   0.5227295,
   0.08933013,
   0.1143592,
   0.1017339,
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fex1319[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fey1319[50] = {
   68454.02,
   28128.47,
   8294.68,
   4123.609,
   2537.054,
   794.5314,
   355.8637,
   72.74275,
   30.86632,
   16.50182,
   22.25249,
   10.81026,
   295.449,
   0.6493849,
   4.580324,
   0.3016328,
   0.2382955,
   0.215387,
   0.1978834,
   0.08933013,
   0.08599939,
   0.07242232,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_all_fx1319,Graph_from_VbbHcc_algo_Aplanarity_all_fy1319,Graph_from_VbbHcc_algo_Aplanarity_all_fex1319,Graph_from_VbbHcc_algo_Aplanarity_all_fey1319);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMaximum(7673809);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__440 = new TH1D("data_mc_ratio__440","",50,0,1);
   data_mc_ratio__440->SetBinContent(0,6.759283);
   data_mc_ratio__440->SetBinContent(1,0.3985954);
   data_mc_ratio__440->SetBinContent(2,0.374386);
   data_mc_ratio__440->SetBinContent(3,0.3767698);
   data_mc_ratio__440->SetBinContent(4,0.3909373);
   data_mc_ratio__440->SetBinContent(5,0.374134);
   data_mc_ratio__440->SetBinContent(6,0.4752162);
   data_mc_ratio__440->SetBinContent(7,0.6047354);
   data_mc_ratio__440->SetBinContent(8,0.7882037);
   data_mc_ratio__440->SetBinContent(9,0.9890562);
   data_mc_ratio__440->SetBinContent(10,1.581635);
   data_mc_ratio__440->SetBinContent(11,0.9095695);
   data_mc_ratio__440->SetBinContent(12,0.9140991);
   data_mc_ratio__440->SetBinContent(13,0.07694822);
   data_mc_ratio__440->SetBinContent(14,3.030311);
   data_mc_ratio__440->SetBinContent(15,1.058924);
   data_mc_ratio__440->SetBinContent(16,3.693348);
   data_mc_ratio__440->SetBinContent(17,2.299369);
   data_mc_ratio__440->SetBinContent(18,5.047401);
   data_mc_ratio__440->SetBinError(0,8.332547);
   data_mc_ratio__440->SetBinError(1,0.000240214);
   data_mc_ratio__440->SetBinError(2,0.000616662);
   data_mc_ratio__440->SetBinError(3,0.001327395);
   data_mc_ratio__440->SetBinError(4,0.002744045);
   data_mc_ratio__440->SetBinError(5,0.005010324);
   data_mc_ratio__440->SetBinError(6,0.0111638);
   data_mc_ratio__440->SetBinError(7,0.02303858);
   data_mc_ratio__440->SetBinError(8,0.04413093);
   data_mc_ratio__440->SetBinError(9,0.07843726);
   data_mc_ratio__440->SetBinError(10,0.1622723);
   data_mc_ratio__440->SetBinError(11,0.124939);
   data_mc_ratio__440->SetBinError(12,0.1668909);
   data_mc_ratio__440->SetBinError(13,0.01538964);
   data_mc_ratio__440->SetBinError(14,0.7824228);
   data_mc_ratio__440->SetBinError(15,0.3192775);
   data_mc_ratio__440->SetBinError(16,1.651715);
   data_mc_ratio__440->SetBinError(17,1.625899);
   data_mc_ratio__440->SetBinError(18,2.5237);
   data_mc_ratio__440->SetMinimum(0.4);
   data_mc_ratio__440->SetMaximum(1.6);
   data_mc_ratio__440->SetEntries(33.38663);
   data_mc_ratio__440->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__440->SetLineColor(ci);
   data_mc_ratio__440->SetLineWidth(2);
   data_mc_ratio__440->SetMarkerStyle(20);
   data_mc_ratio__440->SetMarkerSize(1.2);
   data_mc_ratio__440->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__440->GetXaxis()->SetRange(1,50);
   data_mc_ratio__440->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__440->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__440->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__440->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__440->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__440->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1320[50] = {
   0.009909761,
   0.02857071,
   0.03879037,
   0.07942417,
   0.1702292,
   0.2083743,
   0.3123416,
   0.179737,
   0.1920033,
   0.2747353,
   0.3818903,
   0.3293884,
   0.9093709,
   0.1311892,
   0.4409285,
   0.222807,
   0.2739647,
   0.2717861,
   0.378558,
   1,
   0.7520108,
   0.7118797,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1320->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1320->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1320->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1320);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
