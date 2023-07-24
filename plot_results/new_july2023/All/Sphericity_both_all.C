void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Mon Jul 24 10:12:22 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(0,0,1,1);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-4331.833,1.052419,4327800);
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
   st->SetMaximum(3709131);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0.3);
   st_stack_252->SetMaximum(3894587);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetLabelSize(0.035);
   st_stack_252->GetXaxis()->SetTitleSize(0.035);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Events/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetLabelSize(0.05);
   st_stack_252->GetYaxis()->SetTitleSize(0.057);
   st_stack_252->GetYaxis()->SetTitleOffset(1.2);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetLabelSize(0.035);
   st_stack_252->GetZaxis()->SetTitleSize(0.035);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,1322226);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,1388405);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,873253.2);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,636131.1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,459537.2);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,345190.7);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,264784.1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,211652.5);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,166896.8);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,134618.4);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,113265.1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,92686.15);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,71563.45);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,61737.33);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,50351.88);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,35057.3);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,36836.15);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,19852.92);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,13585.09);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,5671.025);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,2636.432);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,1066.358);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(23,54.88184);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,32084.26);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,37804.63);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,25651.38);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,12948.01);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,10742.27);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,8837.766);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,7496.958);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,6802.631);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,6016.947);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,5886.593);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,4215.341);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,4514.963);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,3473.431);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,3509.554);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,2661.145);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,2190.315);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,3241.879);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,1633.164);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,1574.68);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,1655.301);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,725.6317);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,456.6362);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(23,30.09587);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,13918.78);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,13785.18);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,9654.598);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,6902.877);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,5134.846);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,3887.395);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,3067.807);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,2462.472);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,1980.439);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,1591.445);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,1323.667);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,1107.966);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,924.8201);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,755.7464);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,624.4528);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,493.0862);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,377.7399);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,276.1572);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,157.8292);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,72.78596);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,26.36298);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,8.157378);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,3.069189);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(24,0.3061057);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,52.22021);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,51.08768);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,43.12073);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,36.71886);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,34.80704);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,28.50252);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,25.42832);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,23.33367);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,20.77542);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,18.77219);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,20.96558);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,16.58961);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,14.36221);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,13.23711);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,11.82224);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,10.56533);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,9.425084);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,8.019174);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,5.976263);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,4.079696);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,2.634182);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,1.245452);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.8026781);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(24,0.263201);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_3 = new TH1D("VbbHcc_both_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(1,231211.1);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(2,251615.3);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(3,179639.6);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(4,130420.6);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(5,97363.53);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(6,74216.17);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(7,57650.16);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(8,45649.01);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(9,36711.77);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(10,29694.23);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(11,24358.33);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(12,20041.41);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(13,16503.71);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(14,13539.72);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(15,10974);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(16,8701.887);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(17,6671.928);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(18,4709.962);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(19,2832.117);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(20,1324.379);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(21,524.648);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(22,179.4622);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(23,43.19677);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(24,6.287472);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(25,0.09841009);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(1,131.611);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(2,137.1879);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(3,116.5257);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(4,99.24393);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(5,86.2624);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(6,74.81855);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(7,66.28725);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(8,58.84817);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(9,52.55338);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(10,47.38175);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(11,43.11111);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(12,39.248);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(13,35.60364);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(14,31.97702);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(15,28.98878);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(16,25.91496);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(17,22.35181);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(18,18.70013);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(19,14.87072);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(20,10.02353);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(21,6.283016);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(22,3.842862);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(23,1.772406);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(24,0.6661235);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(25,0.07014583);
   VbbHcc_both_Sphericity_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_4 = new TH1D("VbbHcc_both_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(1,9567.91);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(2,9570.917);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(3,6955.004);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(4,5197.371);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(5,4036.938);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(6,3066.239);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(7,2527.231);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(8,2022.085);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(9,1701.316);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(10,1388.68);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(11,1133.065);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(12,948.7563);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(13,838.1457);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(14,672.872);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(15,607.3255);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(16,423.3602);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(17,338.0115);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(18,241.1942);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(19,122.3823);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(20,54.27446);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(21,17.8976);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(22,4.635228);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(23,1.393544);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(24,0.1723334);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(25,0.08144662);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(1,67.50102);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(2,74.92333);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(3,62.58537);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(4,52.42115);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(5,47.99836);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(6,40.15733);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(7,37.93808);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(8,32.00912);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(9,30.60367);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(10,28.47606);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(11,23.00888);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(12,21.01685);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(13,21.91194);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(14,19.25219);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(15,20.91035);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(16,15.2566);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(17,14.06988);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(18,13.5569);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(19,7.930638);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(20,5.295209);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(21,2.211056);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(22,1.138229);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(23,0.6573414);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(24,0.1218611);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(25,0.08144662);
   VbbHcc_both_Sphericity_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_5 = new TH1D("VbbHcc_both_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(1,5907.895);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(2,5498.128);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(3,3761.932);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(4,2753.123);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(5,2069.825);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(6,1674.771);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(7,1289.038);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(8,1082.734);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(9,834.7048);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(10,654.0733);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(11,585.378);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(12,455.9223);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(13,381.7893);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(14,321.3286);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(15,238.1259);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(16,224.317);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(17,150.0613);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(18,97.13842);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(19,58.58668);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(20,35.80251);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(21,4.62767);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(22,0.5120698);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(23,0.5119538);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(1,95.8468);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(2,90.73066);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(3,69.35921);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(4,62.77643);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(5,52.26612);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(6,50.71773);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(7,40.64925);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(8,45.21649);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(9,31.5093);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(10,25.69848);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(11,30.51963);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(12,22.92808);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(13,20.26216);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(14,21.60691);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(15,13.96808);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(16,17.13527);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(17,15.1699);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(18,9.819787);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(19,9.25781);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(20,13.4761);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(21,1.251785);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(22,0.210794);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(23,0.2670941);
   VbbHcc_both_Sphericity_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_6 = new TH1D("VbbHcc_both_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(1,33.26496);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(2,29.5123);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(3,19.5376);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(4,13.05083);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(5,14.94914);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(6,9.272742);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(7,8.054424);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(8,7.04757);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(9,3.665151);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(10,4.655964);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(11,2.791549);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(12,2.688203);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(13,2.952972);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(14,3.035264);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(15,1.329584);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(16,1.127251);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(17,1.481184);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(18,0.5444818);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(19,1.018873);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(1,2.582408);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(2,2.42102);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(3,1.976052);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(4,1.498408);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(5,1.761271);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(6,1.27106);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(7,1.268071);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(8,1.212121);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(9,0.7872675);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(10,0.9690539);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(11,0.678535);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(12,0.6956741);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(13,0.8234502);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(14,0.697222);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(15,0.5412938);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(16,0.4771642);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(17,0.5611474);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(18,0.305747);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(19,0.4974004);
   VbbHcc_both_Sphericity_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_7 = new TH1D("VbbHcc_both_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(1,51.04604);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(2,46.57802);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(3,36.30894);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(4,22.05815);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(5,23.89625);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(6,15.43621);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(7,11.37625);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(8,9.777739);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(9,8.086618);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(10,7.9362);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(11,6.000359);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(12,4.699412);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(13,4.526422);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(14,3.321905);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(15,2.910227);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(16,2.202878);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(17,2.120468);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(18,1.521047);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(19,1.381807);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(20,0.2189257);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(1,2.748873);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(2,2.594114);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(3,2.199543);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(4,1.64595);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(5,1.891031);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(6,1.388943);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(7,1.327788);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(8,1.264282);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(9,0.944919);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(10,1.062218);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(11,0.8061519);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(12,0.7654962);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(13,0.8701127);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(14,0.6898284);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(15,0.6249277);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(16,0.5372716);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(17,0.5866409);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(18,0.3888311);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(19,0.5170562);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(20,0.1158346);
   VbbHcc_both_Sphericity_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_8 = new TH1D("VbbHcc_both_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(1,64.72728);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(2,71.852);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(3,54.35923);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(4,38.12635);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(5,30.86834);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(6,25.68988);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(7,20.92949);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(8,16.15513);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(9,12.23994);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(10,9.514679);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(11,10.2742);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(12,7.136443);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(13,8.182148);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(14,3.833656);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(15,5.240459);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(16,4.750986);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(17,1.686707);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(18,2.522714);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(19,1.36757);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(20,0.4941348);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(1,3.721604);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(2,3.899094);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(3,3.51452);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(4,2.863715);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(5,2.561002);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(6,2.327917);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(7,2.133814);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(8,1.868894);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(9,1.629069);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(10,1.435018);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(11,1.504495);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(12,1.222658);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(13,1.344553);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(14,0.8854407);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(15,1.08602);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(16,1.025016);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(17,0.5679252);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(18,0.7818674);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(19,0.5190132);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(20,0.3472597);
   VbbHcc_both_Sphericity_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_9 = new TH1D("VbbHcc_both_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(1,44.10597);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(2,48.31727);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(3,34.91465);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(4,26.9343);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(5,21.37152);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(6,17.20112);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(7,13.98783);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(8,11.35347);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(9,9.727269);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(10,7.995675);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(11,6.834987);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(12,5.73229);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(13,4.626075);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(14,4.101953);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(15,3.178596);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(16,2.590053);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(17,1.780685);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(18,1.323303);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(19,0.7724807);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(20,0.3158876);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(21,0.1148128);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(22,0.04604345);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(23,0.01194699);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(1,0.3061565);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(2,0.3395736);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(3,0.2903786);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(4,0.2386608);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(5,0.2164465);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(6,0.20273);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(7,0.1711734);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(8,0.153059);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(9,0.1455009);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(10,0.1314425);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(11,0.1223004);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(12,0.1082047);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(13,0.09630695);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(14,0.09554581);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(15,0.0893432);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(16,0.07302407);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(17,0.06032832);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(18,0.06530951);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(19,0.0397122);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(20,0.02468424);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(21,0.01503073);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(22,0.01026018);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(23,0.00496803);
   VbbHcc_both_Sphericity_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_10 = new TH1D("VbbHcc_both_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(1,35.27372);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(2,35.83653);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(3,25.41598);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(4,19.02563);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(5,14.84607);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(6,12.1473);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(7,9.980031);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(8,8.164345);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(9,6.790777);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(10,5.910277);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(11,4.900156);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(12,4.162816);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(13,3.564405);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(14,2.985655);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(15,2.523709);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(16,1.83266);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(17,1.455664);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(18,1.084123);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(19,0.596392);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(20,0.2335072);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(21,0.07361898);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(22,0.01802925);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(23,0.002903996);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(1,0.1339327);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(2,0.1351398);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(3,0.1139061);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(4,0.0986586);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(5,0.08718981);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(6,0.07897844);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(7,0.07159214);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(8,0.06476172);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(9,0.05909272);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(10,0.05512875);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(11,0.05018863);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(12,0.04624397);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(13,0.04279446);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(14,0.03913433);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(15,0.03605366);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(16,0.03067718);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(17,0.02736311);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(18,0.02358736);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(19,0.01750888);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(20,0.010949);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(21,0.006189589);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(22,0.003088367);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(23,0.001214644);
   VbbHcc_both_Sphericity_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_11 = new TH1D("VbbHcc_both_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(1,1.220375);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(2,1.161127);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(3,0.769128);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(4,0.678459);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(5,0.5282556);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(6,0.4434586);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(7,0.3693395);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(8,0.3119343);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(9,0.2900705);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(10,0.2602773);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(11,0.1398673);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(12,0.1364416);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(13,0.1265329);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(14,0.1253008);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(15,0.1059122);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(16,0.08261128);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(17,0.05435054);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(18,0.03567356);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(19,0.01306939);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(20,0.006283421);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(21,0.0008915226);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(22,0.003918798);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(1,0.06198775);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(2,0.054915);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(3,0.04519971);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(4,0.04203848);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(5,0.03708394);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(6,0.03372127);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(7,0.03063727);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(8,0.02852774);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(9,0.02777123);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(10,0.02593744);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(11,0.01886601);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(12,0.0189511);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(13,0.017456);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(14,0.01803345);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(15,0.02542295);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(16,0.01441576);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(17,0.01139578);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(18,0.009948885);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(19,0.005897043);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(20,0.003763083);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(21,0.0008915226);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(22,0.002866318);
   VbbHcc_both_Sphericity_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_12 = new TH1D("VbbHcc_both_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(1,0.599753);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(2,0.5701925);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(3,0.3710305);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(4,0.3050867);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(5,0.2485586);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(6,0.2072322);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(7,0.1622808);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(8,0.1624288);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(9,0.121791);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(10,0.1161012);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(11,0.0943918);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(12,0.07703156);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(13,0.0643116);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(14,0.05933338);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(15,0.05449158);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(16,0.03828105);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(17,0.03178499);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(18,0.01987171);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(19,0.004599469);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(20,0.003974421);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(21,0.00196499);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(22,0.0002420281);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(1,0.0141127);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(2,0.01369964);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(3,0.01115939);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(4,0.009995036);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(5,0.009691685);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(6,0.00829206);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(7,0.007312461);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(8,0.007299152);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(9,0.006657735);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(10,0.006240931);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(11,0.005613006);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(12,0.005004562);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(13,0.00455314);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(14,0.004405435);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(15,0.004266116);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(16,0.003539895);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(17,0.003144807);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(18,0.002510305);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(19,0.001213495);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(20,0.001125049);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(21,0.0008799812);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(22,0.0002420281);
   VbbHcc_both_Sphericity_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity_all__503 = new TH1D("VbbHcc_both_Sphericity_all__503","",25,0,1);
   VbbHcc_both_Sphericity_all__503->SetBinContent(1,1155059);
   VbbHcc_both_Sphericity_all__503->SetBinContent(2,1086449);
   VbbHcc_both_Sphericity_all__503->SetBinContent(3,743054);
   VbbHcc_both_Sphericity_all__503->SetBinContent(4,527070);
   VbbHcc_both_Sphericity_all__503->SetBinContent(5,387509);
   VbbHcc_both_Sphericity_all__503->SetBinContent(6,294254);
   VbbHcc_both_Sphericity_all__503->SetBinContent(7,228634);
   VbbHcc_both_Sphericity_all__503->SetBinContent(8,181159);
   VbbHcc_both_Sphericity_all__503->SetBinContent(9,147371);
   VbbHcc_both_Sphericity_all__503->SetBinContent(10,119666);
   VbbHcc_both_Sphericity_all__503->SetBinContent(11,98740);
   VbbHcc_both_Sphericity_all__503->SetBinContent(12,81774);
   VbbHcc_both_Sphericity_all__503->SetBinContent(13,67533);
   VbbHcc_both_Sphericity_all__503->SetBinContent(14,55247);
   VbbHcc_both_Sphericity_all__503->SetBinContent(15,45019);
   VbbHcc_both_Sphericity_all__503->SetBinContent(16,35530);
   VbbHcc_both_Sphericity_all__503->SetBinContent(17,26867);
   VbbHcc_both_Sphericity_all__503->SetBinContent(18,18354);
   VbbHcc_both_Sphericity_all__503->SetBinContent(19,10286);
   VbbHcc_both_Sphericity_all__503->SetBinContent(20,4298);
   VbbHcc_both_Sphericity_all__503->SetBinContent(21,1624);
   VbbHcc_both_Sphericity_all__503->SetBinContent(22,530);
   VbbHcc_both_Sphericity_all__503->SetBinContent(23,147);
   VbbHcc_both_Sphericity_all__503->SetBinContent(24,16);
   VbbHcc_both_Sphericity_all__503->SetBinContent(25,2);
   VbbHcc_both_Sphericity_all__503->SetEntries(5316216);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all__503->SetLineColor(ci);
   VbbHcc_both_Sphericity_all__503->SetLineWidth(2);
   VbbHcc_both_Sphericity_all__503->SetMarkerStyle(20);
   VbbHcc_both_Sphericity_all__503->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fx1503[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fy1503[25] = {
   1583062,
   1669109,
   1073436,
   781525.3,
   568249,
   428115.7,
   329383.2,
   262921.8,
   208166,
   167983.2,
   140696.6,
   115264.8,
   90235.95,
   77044.46,
   62811.12,
   44912.57,
   44382.5,
   25184.43,
   16761.16,
   7159.54,
   3210.16,
   1259.193,
   103.0681,
   6.765911,
   0.1798567};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fex1503[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fey1503[25] = {
   32084.79,
   37805.1,
   25651.85,
   12948.7,
   10742.91,
   8838.366,
   7497.501,
   6803.152,
   6017.373,
   5886.939,
   4215.787,
   4515.272,
   3473.772,
   3509.845,
   2661.448,
   2190.615,
   3242.036,
   1633.377,
   1574.809,
   1655.399,
   725.6682,
   456.6556,
   30.16704,
   0.7265297,
   0.1074895};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_all_fx1503,Graph_from_VbbHcc_both_Sphericity_all_fy1503,Graph_from_VbbHcc_both_Sphericity_all_fex1503,Graph_from_VbbHcc_both_Sphericity_all_fey1503);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity_all1503 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity_all1503","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMinimum(0.0651305);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMaximum(1877605);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity_all1503);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__504 = new TH1D("data_mc_ratio__504","",25,0,1);
   data_mc_ratio__504->SetBinContent(1,0.7296362);
   data_mc_ratio__504->SetBinContent(2,0.6509156);
   data_mc_ratio__504->SetBinContent(3,0.6922201);
   data_mc_ratio__504->SetBinContent(4,0.6744119);
   data_mc_ratio__504->SetBinContent(5,0.6819352);
   data_mc_ratio__504->SetBinContent(6,0.6873236);
   data_mc_ratio__504->SetBinContent(7,0.6941277);
   data_mc_ratio__504->SetBinContent(8,0.6890223);
   data_mc_ratio__504->SetBinContent(9,0.7079495);
   data_mc_ratio__504->SetBinContent(10,0.7123687);
   data_mc_ratio__504->SetBinContent(11,0.7017939);
   data_mc_ratio__504->SetBinContent(12,0.7094445);
   data_mc_ratio__504->SetBinContent(13,0.7484046);
   data_mc_ratio__504->SetBinContent(14,0.7170794);
   data_mc_ratio__504->SetBinContent(15,0.7167361);
   data_mc_ratio__504->SetBinContent(16,0.7910925);
   data_mc_ratio__504->SetBinContent(17,0.6053512);
   data_mc_ratio__504->SetBinContent(18,0.7287837);
   data_mc_ratio__504->SetBinContent(19,0.6136805);
   data_mc_ratio__504->SetBinContent(20,0.6003179);
   data_mc_ratio__504->SetBinContent(21,0.5058938);
   data_mc_ratio__504->SetBinContent(22,0.4209046);
   data_mc_ratio__504->SetBinContent(23,1.426241);
   data_mc_ratio__504->SetBinContent(24,2.364796);
   data_mc_ratio__504->SetBinContent(25,11.11996);
   data_mc_ratio__504->SetBinError(1,0.0006788976);
   data_mc_ratio__504->SetBinError(2,0.0006244821);
   data_mc_ratio__504->SetBinError(3,0.0008030342);
   data_mc_ratio__504->SetBinError(4,0.0009289474);
   data_mc_ratio__504->SetBinError(5,0.001095474);
   data_mc_ratio__504->SetBinError(6,0.001267068);
   data_mc_ratio__504->SetBinError(7,0.001451674);
   data_mc_ratio__504->SetBinError(8,0.001618838);
   data_mc_ratio__504->SetBinError(9,0.00184415);
   data_mc_ratio__504->SetBinError(10,0.002059299);
   data_mc_ratio__504->SetBinError(11,0.002233382);
   data_mc_ratio__504->SetBinError(12,0.002480909);
   data_mc_ratio__504->SetBinError(13,0.002879907);
   data_mc_ratio__504->SetBinError(14,0.003050794);
   data_mc_ratio__504->SetBinError(15,0.003378013);
   data_mc_ratio__504->SetBinError(16,0.00419691);
   data_mc_ratio__504->SetBinError(17,0.003693158);
   data_mc_ratio__504->SetBinError(18,0.005379393);
   data_mc_ratio__504->SetBinError(19,0.006050888);
   data_mc_ratio__504->SetBinError(20,0.009156891);
   data_mc_ratio__504->SetBinError(21,0.01255354);
   data_mc_ratio__504->SetBinError(22,0.01828293);
   data_mc_ratio__504->SetBinError(23,0.1176344);
   data_mc_ratio__504->SetBinError(24,0.591199);
   data_mc_ratio__504->SetBinError(25,7.863002);
   data_mc_ratio__504->SetMinimum(0.4);
   data_mc_ratio__504->SetMaximum(1.6);
   data_mc_ratio__504->SetEntries(8.264232);
   data_mc_ratio__504->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__504->SetLineColor(ci);
   data_mc_ratio__504->SetLineWidth(2);
   data_mc_ratio__504->SetMarkerStyle(20);
   data_mc_ratio__504->SetMarkerSize(1.2);
   data_mc_ratio__504->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__504->GetXaxis()->SetRange(1,25);
   data_mc_ratio__504->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__504->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__504->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__504->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__504->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__504->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__504->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__504->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__504->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__504->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__504->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__504->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__504->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__504->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1504[25] = {
   0.02026756,
   0.02264987,
   0.02389695,
   0.0165685,
   0.01890528,
   0.02064481,
   0.02276224,
   0.02587519,
   0.02890661,
   0.0350448,
   0.02996368,
   0.03917302,
   0.03849654,
   0.04555609,
   0.04237224,
   0.04877509,
   0.07304762,
   0.06485663,
   0.09395583,
   0.2312159,
   0.2260536,
   0.3626574,
   0.2926903,
   0.1073809,
   0.5976396};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1504,Graph_from_mc_statistical_error_fy1504,Graph_from_mc_statistical_error_fex1504,Graph_from_mc_statistical_error_fey1504);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1504 = new TH1F("Graph_Graph_from_mc_statistical_error1504","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1504->SetMinimum(0.2828325);
   Graph_Graph_from_mc_statistical_error1504->SetMaximum(1.717167);
   Graph_Graph_from_mc_statistical_error1504->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1504->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1504);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
