void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Mon Jul 24 10:11:52 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
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
   topPad->Range(-0.1532254,-1951.324,1.052419,1949673);
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
   st->SetMaximum(1670962);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",50,0,1);
   st_stack_160->SetMinimum(0.3);
   st_stack_160->SetMaximum(1754511);
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
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,685029.5);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,99617);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,16419.82);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,3351.516);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,1621.038);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,304.3103);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,6.414697);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,20.42213);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,14155.78);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,23104);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,2837.422);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,850.9126);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,1425.45);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,304.3103);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,6.414697);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,20.42213);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(42544);

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
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,4745.068);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,635.919);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,139.3483);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,33.5577);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,9.680146);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,3.037272);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,1.322902);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.4701351);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.2921397);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,-0.025386);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.1719374);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.07185998);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,29.38881);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,10.31581);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,4.90168);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,2.377296);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,1.338153);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.7526856);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.5518824);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.2552509);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.1219108);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.06144899);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.1006636);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.05179453);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(80803);

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
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(1,54169.49);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(2,7648.335);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(3,1712.878);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(4,485.9945);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(5,163.6602);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(6,64.56273);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(7,29.17145);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(8,12.34002);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(9,7.092193);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(10,3.938667);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(11,2.212981);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(12,1.364184);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(13,0.6733799);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(14,0.430589);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(15,0.3168441);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(17,0.07731977);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(18,0.03959583);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(1,62.55726);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(2,23.18644);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(3,10.97493);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(4,5.922485);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(5,3.280025);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(6,2.034022);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(7,1.368002);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(8,0.8700178);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(9,0.6543827);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(10,0.4781031);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(11,0.3588257);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(12,0.2881264);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(13,0.19824);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(14,0.1656754);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(15,0.1308986);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(17,0.0579425);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(18,0.03959583);
   VbbHcc_algo_Aplanarity_all_stack_3->SetEntries(1023998);

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
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(1,5130.143);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(2,486.2254);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(3,96.43383);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(4,21.35881);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(5,3.885145);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(6,0.4890388);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(7,0.1586417);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(11,0.07066921);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(17,0.01344924);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(1,61.56771);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(2,19.63087);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(3,9.895816);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(4,5.797416);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(5,0.8871984);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(6,0.2242384);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(7,0.1006515);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(11,0.07066921);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(17,0.01344924);
   VbbHcc_algo_Aplanarity_all_stack_4->SetEntries(32611);

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
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(1,2691.515);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(2,242.9134);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(3,57.66275);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(4,15.57246);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(5,4.045298);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(6,0.2149029);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(7,0.1074258);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(1,68.00455);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(2,20.87919);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(3,12.76008);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(4,6.686133);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(5,2.146375);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(6,0.2148344);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(7,0.1074258);
   VbbHcc_algo_Aplanarity_all_stack_5->SetEntries(16359);

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
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(1,11.35696);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(2,0.6883091);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(3,0.179752);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(1,1.476457);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(2,0.3094644);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(3,0.179752);
   VbbHcc_algo_Aplanarity_all_stack_6->SetEntries(87);

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
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(1,35.21483);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(2,2.278352);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(3,0.3197554);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(4,0.1433755);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(6,0.06245006);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(1,1.925686);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(2,0.4456);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(3,0.2053304);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(4,0.1016015);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(6,0.06245006);
   VbbHcc_algo_Aplanarity_all_stack_7->SetEntries(488);

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
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(1,63.3939);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(2,5.612587);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(3,1.088642);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(4,0.2110638);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(6,0.2026665);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(1,3.684031);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(2,1.090684);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(3,0.497546);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(4,0.2110638);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(6,0.2026665);
   VbbHcc_algo_Aplanarity_all_stack_8->SetEntries(341);

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
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(1,34.62903);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(2,2.67726);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(3,0.4088288);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(4,0.08069833);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(5,0.01919324);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(6,0.009883066);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(8,0.003672469);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(1,0.2764132);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(2,0.07373525);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(3,0.02787513);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(4,0.01273916);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(5,0.005587018);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(6,0.005119722);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(8,0.002193935);
   VbbHcc_algo_Aplanarity_all_stack_9->SetEntries(21433);

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
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(1,20.6491);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(2,2.103988);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(3,0.3573428);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(4,0.0766468);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(5,0.01788421);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(6,0.007725383);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(7,0.00397943);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(8,0.001232725);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(9,0.00143429);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(1,0.1028182);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(2,0.03285583);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(3,0.01348754);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(4,0.006294108);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(5,0.003061669);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(6,0.00190494);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(7,0.001368547);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(8,0.0007291337);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(9,0.0008483559);
   VbbHcc_algo_Aplanarity_all_stack_10->SetEntries(48501);

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
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(1,1.585442);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(2,0.08321505);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(3,0.01033438);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(5,0.002129593);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(1,0.06452687);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(2,0.01463914);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(3,0.004844352);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(5,0.002129593);
   VbbHcc_algo_Aplanarity_all_stack_11->SetEntries(747);

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
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(1,0.5777882);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(2,0.0564192);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(3,0.006352865);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(4,0.001961871);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(7,0.0002137836);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(1,0.01406078);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(2,0.004315781);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(3,0.001436273);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(4,0.0008260558);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(7,0.0002137836);
   VbbHcc_algo_Aplanarity_all_stack_12->SetEntries(2089);

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
   
   TH1D *VbbHcc_algo_Aplanarity_all__319 = new TH1D("VbbHcc_algo_Aplanarity_all__319","",50,0,1);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(1,384051);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(2,44003);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(3,8840);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(4,2116);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(5,530);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(6,166);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(7,65);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(8,30);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(9,20);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(10,12);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(11,8);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(12,4);
   VbbHcc_algo_Aplanarity_all__319->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity_all__319->SetEntries(439896);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all__319->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all__319->SetLineWidth(2);
   VbbHcc_algo_Aplanarity_all__319->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity_all__319->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity_all__319->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all__319->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__319->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__319->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__319->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all__319->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__319->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__319->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__319->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__319->Draw("same E");
   
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
   751933.1,
   108643.9,
   18428.51,
   3908.513,
   1802.348,
   372.897,
   37.17931,
   33.2372,
   7.385767,
   3.913281,
   2.455588,
   1.436043,
   0.6733799,
   0.430589,
   0.3168441,
   0,
   0.09076901,
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
   14156.25,
   23104.03,
   2837.493,
   850.9826,
   1425.456,
   304.3183,
   6.583769,
   20.44225,
   0.6656423,
   0.4820358,
   0.3793194,
   0.2927448,
   0.19824,
   0.1656754,
   0.1308986,
   0,
   0.0594829,
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
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMaximum(842698.3);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
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
   
   TH1D *data_mc_ratio__320 = new TH1D("data_mc_ratio__320","",50,0,1);
   data_mc_ratio__320->SetBinContent(1,0.5107515);
   data_mc_ratio__320->SetBinContent(2,0.4050205);
   data_mc_ratio__320->SetBinContent(3,0.4796915);
   data_mc_ratio__320->SetBinContent(4,0.5413824);
   data_mc_ratio__320->SetBinContent(5,0.2940609);
   data_mc_ratio__320->SetBinContent(6,0.4451631);
   data_mc_ratio__320->SetBinContent(7,1.748284);
   data_mc_ratio__320->SetBinContent(8,0.9026032);
   data_mc_ratio__320->SetBinContent(9,2.707911);
   data_mc_ratio__320->SetBinContent(10,3.06648);
   data_mc_ratio__320->SetBinContent(11,3.257875);
   data_mc_ratio__320->SetBinContent(12,2.785431);
   data_mc_ratio__320->SetBinContent(13,2.970092);
   data_mc_ratio__320->SetBinError(1,0.000824167);
   data_mc_ratio__320->SetBinError(2,0.001930793);
   data_mc_ratio__320->SetBinError(3,0.005101946);
   data_mc_ratio__320->SetBinError(4,0.01176918);
   data_mc_ratio__320->SetBinError(5,0.01277319);
   data_mc_ratio__320->SetBinError(6,0.03455136);
   data_mc_ratio__320->SetBinError(7,0.216848);
   data_mc_ratio__320->SetBinError(8,0.1647921);
   data_mc_ratio__320->SetBinError(9,0.6055073);
   data_mc_ratio__320->SetBinError(10,0.8852166);
   data_mc_ratio__320->SetBinError(11,1.151833);
   data_mc_ratio__320->SetBinError(12,1.392715);
   data_mc_ratio__320->SetBinError(13,2.100172);
   data_mc_ratio__320->SetMinimum(0.4);
   data_mc_ratio__320->SetMaximum(1.6);
   data_mc_ratio__320->SetEntries(36.57438);
   data_mc_ratio__320->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__320->SetLineColor(ci);
   data_mc_ratio__320->SetLineWidth(2);
   data_mc_ratio__320->SetMarkerStyle(20);
   data_mc_ratio__320->SetMarkerSize(1.2);
   data_mc_ratio__320->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__320->GetXaxis()->SetRange(1,50);
   data_mc_ratio__320->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__320->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__320->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__320->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__320->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__320->Draw("E1");
   
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
   0.01882647,
   0.2126584,
   0.153973,
   0.2177254,
   0.7908884,
   0.8160921,
   0.1770816,
   0.6150414,
   0.09012501,
   0.1231795,
   0.1544719,
   0.2038551,
   0.2943955,
   0.3847645,
   0.4131327,
   0,
   0.6553216,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(0);
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
