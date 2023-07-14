void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Fri Jul 14 13:38:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(0,0,1,1);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-308.0843,6.314516,307786.2);
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
   st->SetMaximum(263787.4);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0.01);
   st_stack_145->SetMaximum(276976.7);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetLabelSize(0.035);
   st_stack_145->GetXaxis()->SetTitleSize(0.035);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetLabelSize(0.05);
   st_stack_145->GetYaxis()->SetTitleSize(0.057);
   st_stack_145->GetYaxis()->SetTitleOffset(1.2);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetLabelSize(0.035);
   st_stack_145->GetZaxis()->SetTitleSize(0.035);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,27745.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,112995.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,95267.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,41312.22);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,34214.49);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,19311.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,14390.65);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,11551.51);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,3917.41);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,4624.169);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,4966.602);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,5675.691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,5016.398);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,1428.284);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,4965.317);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,1176.219);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,3445.046);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,4345.078);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,1297.109);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,802.0481);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,494.0832);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,1484.321);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,32.15084);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1425.585);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,66.2429);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,29.41871);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,0.4593199);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,7.490849);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,21.92786);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,1843.54);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,5645.136);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,21211.77);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,3814.233);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,3726.07);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,2686.174);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,2513.848);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,2394.155);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,735.6025);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,907.0666);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,1637.862);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,1702.403);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1049.561);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,400.4954);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1080.918);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,394.1441);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1566.254);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,2078.796);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,475.6854);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,386.3329);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,277.0293);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,1418.934);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,23.22372);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,1418.571);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,37.98295);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,23.03225);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,0.4593199);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,7.046516);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,21.92786);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,79.08099);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,443.1574);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,556.8771);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,421.0508);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,278.022);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,190.3114);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,126.2381);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,94.27792);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,75.1593);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,64.10849);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,49.52356);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,39.98214);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,33.46344);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,32.18799);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,26.903);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,26.29957);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,23.40903);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,17.52067);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,13.71634);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,9.891582);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,7.261545);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,3.777096);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,3.161475);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,2.057414);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,1.03225);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,0.7130372);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,0.3133806);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,0.1383211);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.2258508);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.3156697);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.7993724);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,3.614599);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,7.898811);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,8.525301);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,7.213383);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,5.858827);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,4.820844);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,3.868301);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,3.323497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,3.048741);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,2.934939);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,2.459123);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,2.109554);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,1.928487);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,1.990684);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,1.785907);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,1.811043);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,1.651956);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.429321);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.297974);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.078996);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.020567);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.8058746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.70722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.5737186);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4042069);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.3030449);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.1186252);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.08006552);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.1011989);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2697041);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3904839);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,540.7736);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,4030.438);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,5622.821);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,4421.693);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,2863.8);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,1891.617);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,1343.699);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,982.273);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,770.9111);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,612.1285);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,503.0548);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,444.5117);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,392.0042);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,344.3827);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,306.6849);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,275.4422);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,246.7339);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,208.7829);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,155.4085);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,108.3692);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,62.46702);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,36.32068);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,17.82725);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,8.220194);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,6.018686);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,4.581814);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,2.57399);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,1.932932);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,1.098598);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,0.8644149);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,1.830346);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,5.758293);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,15.64843);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,18.44128);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,16.33784);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,13.13958);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,10.6746);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,8.993041);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,7.674718);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,6.797854);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,6.05372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,5.478263);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,5.152396);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,4.84977);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,4.543621);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,4.284075);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,4.070999);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,3.861035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,3.548474);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,3.066418);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,2.567763);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,1.946152);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,1.482197);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,1.037357);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,0.6979883);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,0.5970016);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,0.5144427);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.3894566);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.3320277);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.2499381);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.2333589);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.3241179);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,252.2591);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,808.9594);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,513.4041);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,293.1821);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,151.1007);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,126.1808);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,74.4153);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,46.70564);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,33.25775);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,33.65976);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,27.33745);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,21.95122);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,15.07018);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,14.94042);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,15.33261);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,10.03405);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,13.01524);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,9.398283);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,11.59396);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,4.92474);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,6.087294);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,2.916053);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,1.417571);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,0.5140567);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,0.6372139);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,0.3576969);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,0.279517);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,0.066575);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,6.979168);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,19.82633);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,22.22032);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,19.42996);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,12.46858);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,12.58335);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,8.64195);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,5.981781);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,5.122955);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,5.72792);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,5.661649);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,4.203555);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,3.079269);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,3.114847);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,4.054074);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,2.92102);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,3.092592);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,2.883906);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,3.96261);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,0.9985545);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,2.810976);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,2.684931);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,0.525896);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,0.3105898);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.4029536);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.2902445);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.279517);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.066575);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,179.5224);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,392.9087);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,271.9543);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,156.5359);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,97.56809);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,61.77342);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,36.60615);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,33.07654);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,19.76072);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,11.58228);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,19.23855);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,8.243071);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,21.02187);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,13.16558);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,3.530582);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,11.52921);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,4.908593);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,4.980145);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,3.354272);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,4.488086);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,2.628583);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,0.2868137);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,0.07097071);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.1179133);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,0.2195286);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,0.148621);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.007921866);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.1382558);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,13.317);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,23.74954);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,25.34078);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,19.20557);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,15.24705);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,10.29328);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,7.514168);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,7.618889);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,6.583756);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,2.662821);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,8.943691);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,2.169514);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,9.067636);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,6.576047);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,1.182875);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,6.423894);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,1.371416);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,1.625173);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,1.508072);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,1.878405);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,1.509054);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.1778583);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,0.07097071);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.08505606);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.1646399);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,0.1485579);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.007921866);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.09779632);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,0.687355);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,1.546549);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,0.6014356);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,0.6014356);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,0.4295969);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.1718388);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,0.1718388);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.2577581);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,0.2577581);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.2430167);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,0.364525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,0.2273213);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,0.2273213);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.1921216);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.1215083);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.1215083);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.1488167);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.1488167);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,3.88656);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,12.80653);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,5.60684);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,2.229993);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,1.019426);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,0.8919973);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,0.637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,0.5734269);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,0.1911423);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,0.3822846);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,0.1911423);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.1274282);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.1911423);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,0.1274282);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,0.497623);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,0.9033032);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,0.5976912);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,0.3769377);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.2548564);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.2383963);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.2014817);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.1911423);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.1103561);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.156067);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.1103561);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.09010534);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.1103561);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.09010534);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,2.511372);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,11.48056);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,4.84336);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,2.331988);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,1.614453);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,0.5381511);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,0.7175348);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,0.7175348);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,0.5381511);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,0.6711923);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,1.43507);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,0.932105);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,0.6467771);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,0.5381511);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.3107017);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.3107017);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,1.03592);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,4.949242);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,3.60296);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,1.749063);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,0.9021194);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,0.5572725);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,0.3282942);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,0.2703599);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,0.2013906);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,0.1379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,0.1420769);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.1117304);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.1144892);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.08000447);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.08276324);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.1062128);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.09241896);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.07448692);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.0441404);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.0441404);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.02620836);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.0110351);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.002758775);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.03780126);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.08262519);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.07049736);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.04911859);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.03527566);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.02772534);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.02128015);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.01931142);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.0166672);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.01379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.01399925);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.01241449);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.01256682);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.0105051);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.01068469);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.01210408);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.01129077);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.01013639);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.007802993);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.007802993);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.00601261);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.003901497);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.001950748);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,0.341218);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,1.82711);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,1.463335);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,0.7683672);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,0.3734422);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,0.2223467);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,0.147515);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,0.1102782);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,0.08557304);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.07232533);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.05263279);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.04045922);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.04224945);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.04368164);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.03902704);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.03473048);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.03365634);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.02900174);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.02721151);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.01503794);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.01074139);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.003580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.002148277);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.001074139);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.001432185);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.0003580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.01105314);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.02557713);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.02288977);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.01658647);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.01156329);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.008922466);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.007267544);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.006283685);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.00553526);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.005088793);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.00434108);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.003806083);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.003889377);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.00395475);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.003738112);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.003526346);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.003471387);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.003222416);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.003121374);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.002320405);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.0019611);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.001132242);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.0008770305);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.0006201542);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.0007160924);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.0003580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06017016);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2762358);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1695705);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.03282009);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.02461507);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01282832);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02748648);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.02153547);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.009474344);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01286157);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.08717287);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.06252152);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.02286501);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.00857438);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.007859849);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.002500861);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.003215393);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.001429063);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005580671);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.004726183);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.002858127);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.001750238);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.001675725);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.0009452366);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__289 = new TH1D("VbbHcc_algo_Z_dR_Bj0__289","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(1,11302);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(2,29777);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(3,19762);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(4,13058);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(5,8310);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(6,5341);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(7,3837);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(8,2897);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(9,2182);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(10,1711);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(11,1427);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(12,1274);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(13,1109);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(14,966);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(15,832);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(16,797);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(17,639);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(18,538);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(19,433);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(20,308);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(21,229);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(22,90);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(23,56);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(24,49);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(25,38);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(26,14);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(27,17);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(28,10);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(29,9);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(30,7);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(31,14);
   VbbHcc_algo_Z_dR_Bj0__289->SetEntries(107033);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__289->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__289->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__289->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__289->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289[30] = {
   28806.15,
   118704.3,
   102248.5,
   46612.42,
   37609.35,
   21583.7,
   15973.27,
   12709.79,
   4817.416,
   5346.96,
   5566.593,
   6191.022,
   5478.575,
   1833.331,
   5318.557,
   1499.729,
   3733.598,
   4586.29,
   1481.318,
   930.0274,
   572.745,
   1527.636,
   54.63164,
   1436.495,
   74.15442,
   34.86361,
   3.712309,
   2.352149,
   8.815298,
   1.180085};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289[30] = {
   1843.614,
   5645.248,
   21211.81,
   3814.372,
   3726.15,
   2686.249,
   2513.894,
   2394.189,
   735.6875,
   907.1136,
   1637.908,
   1702.419,
   1049.618,
   400.5923,
   1080.936,
   394.2325,
   1566.263,
   2078.802,
   475.716,
   386.3489,
   277.0565,
   1418.938,
   23.26369,
   1418.572,
   37.99228,
   23.04047,
   0.6789902,
   0.441344,
   7.051673,
   0.3566464};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMinimum(0.7410944);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMaximum(136784.4);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__290 = new TH1D("data_mc_ratio__290","",30,0,6);
   data_mc_ratio__290->SetBinContent(1,0.3923467);
   data_mc_ratio__290->SetBinContent(2,0.2508502);
   data_mc_ratio__290->SetBinContent(3,0.1932742);
   data_mc_ratio__290->SetBinContent(4,0.28014);
   data_mc_ratio__290->SetBinContent(5,0.2209557);
   data_mc_ratio__290->SetBinContent(6,0.2474553);
   data_mc_ratio__290->SetBinContent(7,0.2402139);
   data_mc_ratio__290->SetBinContent(8,0.2279346);
   data_mc_ratio__290->SetBinContent(9,0.45294);
   data_mc_ratio__290->SetBinContent(10,0.3199949);
   data_mc_ratio__290->SetBinContent(11,0.2563507);
   data_mc_ratio__290->SetBinContent(12,0.2057819);
   data_mc_ratio__290->SetBinContent(13,0.2024249);
   data_mc_ratio__290->SetBinContent(14,0.5269099);
   data_mc_ratio__290->SetBinContent(15,0.1564334);
   data_mc_ratio__290->SetBinContent(16,0.5314292);
   data_mc_ratio__290->SetBinContent(17,0.1711486);
   data_mc_ratio__290->SetBinContent(18,0.1173062);
   data_mc_ratio__290->SetBinContent(19,0.2923072);
   data_mc_ratio__290->SetBinContent(20,0.3311731);
   data_mc_ratio__290->SetBinContent(21,0.3998289);
   data_mc_ratio__290->SetBinContent(22,0.05891455);
   data_mc_ratio__290->SetBinContent(23,1.025047);
   data_mc_ratio__290->SetBinContent(24,0.03411081);
   data_mc_ratio__290->SetBinContent(25,0.5124442);
   data_mc_ratio__290->SetBinContent(26,0.4015648);
   data_mc_ratio__290->SetBinContent(27,4.57936);
   data_mc_ratio__290->SetBinContent(28,4.251431);
   data_mc_ratio__290->SetBinContent(29,1.020952);
   data_mc_ratio__290->SetBinContent(30,5.931778);
   data_mc_ratio__290->SetBinContent(31,0.5653649);
   data_mc_ratio__290->SetBinError(1,0.003690561);
   data_mc_ratio__290->SetBinError(2,0.001453697);
   data_mc_ratio__290->SetBinError(3,0.00137486);
   data_mc_ratio__290->SetBinError(4,0.002451527);
   data_mc_ratio__290->SetBinError(5,0.002423844);
   data_mc_ratio__290->SetBinError(6,0.003385988);
   data_mc_ratio__290->SetBinError(7,0.003877949);
   data_mc_ratio__290->SetBinError(8,0.00423483);
   data_mc_ratio__290->SetBinError(9,0.009696461);
   data_mc_ratio__290->SetBinError(10,0.007736028);
   data_mc_ratio__290->SetBinError(11,0.006786135);
   data_mc_ratio__290->SetBinError(12,0.005765306);
   data_mc_ratio__290->SetBinError(13,0.006078525);
   data_mc_ratio__290->SetBinError(14,0.01695305);
   data_mc_ratio__290->SetBinError(15,0.005423352);
   data_mc_ratio__290->SetBinError(16,0.01882419);
   data_mc_ratio__290->SetBinError(17,0.006770534);
   data_mc_ratio__290->SetBinError(18,0.005057427);
   data_mc_ratio__290->SetBinError(19,0.01404739);
   data_mc_ratio__290->SetBinError(20,0.01887034);
   data_mc_ratio__290->SetBinError(21,0.02642144);
   data_mc_ratio__290->SetBinError(22,0.006210139);
   data_mc_ratio__290->SetBinError(23,0.1369777);
   data_mc_ratio__290->SetBinError(24,0.004872972);
   data_mc_ratio__290->SetBinError(25,0.08312943);
   data_mc_ratio__290->SetBinError(26,0.1073227);
   data_mc_ratio__290->SetBinError(27,1.110658);
   data_mc_ratio__290->SetBinError(28,1.34442);
   data_mc_ratio__290->SetBinError(29,0.3403175);
   data_mc_ratio__290->SetBinError(30,2.242001);
   data_mc_ratio__290->SetBinError(31,0.5230809);
   data_mc_ratio__290->SetMinimum(0.4);
   data_mc_ratio__290->SetMaximum(1.6);
   data_mc_ratio__290->SetEntries(40.83898);
   data_mc_ratio__290->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__290->SetLineColor(ci);
   data_mc_ratio__290->SetLineWidth(2);
   data_mc_ratio__290->SetMarkerStyle(20);
   data_mc_ratio__290->SetMarkerSize(1.2);
   data_mc_ratio__290->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__290->GetXaxis()->SetRange(1,30);
   data_mc_ratio__290->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__290->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__290->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__290->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__290->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__290->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__290->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__290->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__290->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__290->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__290->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__290->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__290->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__290->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1290[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1290[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1290[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1290[30] = {
   0.06400069,
   0.04755723,
   0.2074534,
   0.08183168,
   0.0990751,
   0.1244573,
   0.1573813,
   0.1883737,
   0.1527142,
   0.1696503,
   0.2942388,
   0.2749819,
   0.191586,
   0.2185052,
   0.2032385,
   0.2628691,
   0.4195051,
   0.4532645,
   0.3211437,
   0.4154167,
   0.4837344,
   0.9288454,
   0.425828,
   0.9875229,
   0.5123401,
   0.6608743,
   0.1829024,
   0.1876343,
   0.7999358,
   0.302221};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1290,Graph_from_mc_statistical_error_fy1290,Graph_from_mc_statistical_error_fex1290,Graph_from_mc_statistical_error_fey1290);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1290 = new TH1F("Graph_Graph_from_mc_statistical_error1290","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1290->SetMinimum(0.01122943);
   Graph_Graph_from_mc_statistical_error1290->SetMaximum(2.185027);
   Graph_Graph_from_mc_statistical_error1290->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1290->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1290->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1290);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
