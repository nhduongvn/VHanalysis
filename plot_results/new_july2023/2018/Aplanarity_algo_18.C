void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Fri Jul 14 13:38:27 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(0,0,1,1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-684.7131,1.052419,684038.3);
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
   st->SetMaximum(586253.3);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0.01);
   st_stack_159->SetMaximum(615566);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetLabelSize(0.035);
   st_stack_159->GetXaxis()->SetTitleSize(0.035);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetLabelSize(0.05);
   st_stack_159->GetYaxis()->SetTitleSize(0.057);
   st_stack_159->GetYaxis()->SetTitleOffset(1.2);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetLabelSize(0.035);
   st_stack_159->GetZaxis()->SetTitleSize(0.035);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,180202.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,19598.34);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,2966.178);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,821.9423);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,99.43523);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,6406.904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,3032.283);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,781.8206);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,459.2048);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,55.037);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(13324);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,1501.486);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,187.5416);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,39.05475);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,11.44425);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,2.260157);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.9266306);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.3068813);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.06660616);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,17.99983);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,5.959549);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,2.688957);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,1.479255);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.6304584);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.5108313);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.3242915);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.06660616);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(21685);

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
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,17425.87);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,2322.288);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,506.3724);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,138.5649);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,44.92286);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,17.01557);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,8.495291);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,3.76743);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,1.990664);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,1.186361);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,0.50377);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,0.5044169);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,0.1779699);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.1731381);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.03985955);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.03959583);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,37.56123);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,13.28914);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,6.322415);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,3.503468);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,1.739838);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,1.081109);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,0.7826336);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,0.4921529);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.3716661);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.282902);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.1640395);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.1828114);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.09839187);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.1131012);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.03985955);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.03959583);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(319331);

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
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,1558.247);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,153.5387);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,23.40347);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,4.078304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,0.89072);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,0.2405863);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(17,0.01344924);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,33.47067);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,9.400648);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,3.033367);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,1.166371);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,0.5091304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.171479);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(17,0.01344924);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(8300);

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
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,805.004);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,58.27105);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,11.27212);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,6.584453);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,0.1097513);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,37.95252);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,8.20195);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,3.454653);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,3.567748);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.1097513);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(3417);

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
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,2.094367);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.179752);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,0.8322435);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.179752);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(8);

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
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,19.08272);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,0.9640555);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.3026994);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,2.124927);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.4393212);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.3026994);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(92);

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
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,21.02543);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,1.464681);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,0.298964);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,2.227309);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,0.6018165);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.298964);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(99);

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
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,12.14245);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,0.8536306);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.1081984);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.02134711);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.006201433);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.1958402);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.04882918);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.01671806);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.007629926);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.004399004);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(5213);

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
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,8.99306);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,0.9163254);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.1556293);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.03338109);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.007788902);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.003364546);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.001733115);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.0005368742);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.0006246596);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.07570688);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.02419233);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.009931113);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.004634464);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.002254362);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.001402642);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001007685);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0005368742);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0006246596);
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
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.5446122);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.03560173);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.002532203);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.03909493);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.009747226);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.002532203);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(246);

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
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2017041);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.01651716);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.001466277);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001053454);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008800788);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.002390908);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.0007383043);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0006113462);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(653);

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
   
   TH1D *VbbHcc_algo_Aplanarity__317 = new TH1D("VbbHcc_algo_Aplanarity__317","",50,0,1);
   VbbHcc_algo_Aplanarity__317->SetBinContent(1,263814);
   VbbHcc_algo_Aplanarity__317->SetBinContent(2,31164);
   VbbHcc_algo_Aplanarity__317->SetBinContent(3,6146);
   VbbHcc_algo_Aplanarity__317->SetBinContent(4,1415);
   VbbHcc_algo_Aplanarity__317->SetBinContent(5,357);
   VbbHcc_algo_Aplanarity__317->SetBinContent(6,95);
   VbbHcc_algo_Aplanarity__317->SetBinContent(7,40);
   VbbHcc_algo_Aplanarity__317->SetBinContent(8,15);
   VbbHcc_algo_Aplanarity__317->SetBinContent(9,8);
   VbbHcc_algo_Aplanarity__317->SetBinContent(10,9);
   VbbHcc_algo_Aplanarity__317->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__317->SetBinContent(12,2);
   VbbHcc_algo_Aplanarity__317->SetBinContent(13,1);
   VbbHcc_algo_Aplanarity__317->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__317->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__317->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__317->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__317->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__317->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__317->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__317->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__317->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__317->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__317->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__317->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__317->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__317->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__317->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1317[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1317[50] = {
   201557.4,
   22324.23,
   3547.027,
   982.9727,
   147.6265,
   18.19235,
   8.803905,
   3.767967,
   1.991288,
   1.186361,
   0.5703762,
   0.5044169,
   0.1779699,
   0.1731381,
   0.03985955,
   0,
   0.01344924,
   0.03959583,
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1317[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1317[50] = {
   6407.24,
   3032.344,
   781.8644,
   459.236,
   55.07057,
   1.207961,
   0.8471607,
   0.4921532,
   0.3716666,
   0.282902,
   0.1770462,
   0.1828114,
   0.09839187,
   0.1131012,
   0.03985955,
   0,
   0.01344924,
   0.03959583,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1317,Graph_from_VbbHcc_algo_Aplanarity_fy1317,Graph_from_VbbHcc_algo_Aplanarity_fex1317,Graph_from_VbbHcc_algo_Aplanarity_fey1317);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1317 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1317","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMaximum(228761.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1317);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__318 = new TH1D("data_mc_ratio__318","",50,0,1);
   data_mc_ratio__318->SetBinContent(1,1.308878);
   data_mc_ratio__318->SetBinContent(2,1.395972);
   data_mc_ratio__318->SetBinContent(3,1.732719);
   data_mc_ratio__318->SetBinContent(4,1.439511);
   data_mc_ratio__318->SetBinContent(5,2.418265);
   data_mc_ratio__318->SetBinContent(6,5.221974);
   data_mc_ratio__318->SetBinContent(7,4.543438);
   data_mc_ratio__318->SetBinContent(8,3.980927);
   data_mc_ratio__318->SetBinContent(9,4.0175);
   data_mc_ratio__318->SetBinContent(10,7.586221);
   data_mc_ratio__318->SetBinContent(11,8.766145);
   data_mc_ratio__318->SetBinContent(12,3.964974);
   data_mc_ratio__318->SetBinContent(13,5.618928);
   data_mc_ratio__318->SetBinError(1,0.002548297);
   data_mc_ratio__318->SetBinError(2,0.007907697);
   data_mc_ratio__318->SetBinError(3,0.02210201);
   data_mc_ratio__318->SetBinError(4,0.03826809);
   data_mc_ratio__318->SetBinError(5,0.1279882);
   data_mc_ratio__318->SetBinError(6,0.5357632);
   data_mc_ratio__318->SetBinError(7,0.7183807);
   data_mc_ratio__318->SetBinError(8,1.027871);
   data_mc_ratio__318->SetBinError(9,1.420401);
   data_mc_ratio__318->SetBinError(10,2.52874);
   data_mc_ratio__318->SetBinError(11,3.920339);
   data_mc_ratio__318->SetBinError(12,2.80366);
   data_mc_ratio__318->SetBinError(13,5.618928);
   data_mc_ratio__318->SetMinimum(0.4);
   data_mc_ratio__318->SetMaximum(1.6);
   data_mc_ratio__318->SetEntries(30.0134);
   data_mc_ratio__318->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__318->SetLineColor(ci);
   data_mc_ratio__318->SetLineWidth(2);
   data_mc_ratio__318->SetMarkerStyle(20);
   data_mc_ratio__318->SetMarkerSize(1.2);
   data_mc_ratio__318->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__318->GetXaxis()->SetRange(1,50);
   data_mc_ratio__318->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__318->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__318->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__318->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__318->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__318->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__318->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__318->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__318->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__318->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__318->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__318->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__318->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__318->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1318[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1318[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1318[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1318[50] = {
   0.03178866,
   0.1358319,
   0.2204281,
   0.467191,
   0.3730399,
   0.0663994,
   0.09622556,
   0.130615,
   0.1866463,
   0.2384619,
   0.3104025,
   0.3624214,
   0.5528568,
   0.653243,
   1,
   0,
   1,
   1,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1318,Graph_from_mc_statistical_error_fy1318,Graph_from_mc_statistical_error_fex1318,Graph_from_mc_statistical_error_fey1318);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1318 = new TH1F("Graph_Graph_from_mc_statistical_error1318","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1318->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1318->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1318->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1318->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1318);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
