void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Aug 10 12:32:01 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(0,0,1,1);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.420855,6.314516,14.90054);
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
   st->SetMinimum(0.3);
   st->SetMaximum(5.088569e+12);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0.03939729);
   st_stack_116->SetMaximum(1.855239e+13);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,143.1797);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,359022.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,448739.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,353012);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,349792.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,361272.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,350134.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,345777.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,370290.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,370594.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,344725.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,314251.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,310495.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,278147.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,297968.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,245664.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,245742.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,194233.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,152684.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,146131.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,131346.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,125827.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,103980.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,104724.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,127690.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,93407.69);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(28,76380.29);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(29,71399.49);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(30,46232.94);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(31,41472.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,34.94454);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,8591.042);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,17483.74);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,8981.487);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,9261.059);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,9285.84);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,9465.574);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,9236.826);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,22287.08);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,10845.08);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,22401.21);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,9017.208);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,9644.635);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,9033.048);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,22594.95);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,21589.79);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,26215.94);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,8418.253);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,6097.131);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,5880.634);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,5761.162);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,6030.848);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,4747.229);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,5501.271);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,25408.53);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,5546.858);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(28,4442.212);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(29,4649.256);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(30,3061.936);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(31,2542.041);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,1.268456);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,1838.286);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,3078.612);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,3419.365);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,3518.978);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,3448.277);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,3238.301);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,3028.347);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,2794.138);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,2559.327);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,2310.622);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,2093.624);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,1918.319);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,1767.522);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,1628.77);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,1397.733);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,1268.679);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,1138.707);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,1043.396);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,1020.396);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,957.5955);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,942.0226);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,902.962);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,827.9489);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,784.9337);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,685.6908);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,598.4879);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(29,494.498);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(30,341.6858);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(31,271.9106);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.4810792);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,16.60915);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,21.13307);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,22.02464);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,22.1675);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,22.02303);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,21.51903);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,20.94378);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,20.27569);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,19.48514);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,18.3358);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,17.31918);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,16.39777);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,15.73186);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,15.00421);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,13.95844);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,13.34653);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,12.71016);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,12.12582);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,12.21721);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,11.83416);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,11.76952);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,11.63799);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,10.80159);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,10.56635);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,9.819944);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,9.158578);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(29,8.284169);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(30,7.013088);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(31,6.067105);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(2,21.92934);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(3,34788.91);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(4,66310.5);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(5,77410.45);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(6,78305.55);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(7,70015.26);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(8,58846.1);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(9,48371.42);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(10,39940.27);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(11,33699.35);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(12,29387.56);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(13,26363.08);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(14,24080.6);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(15,22322.68);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(16,20761.79);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(17,18619.23);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(18,17069.08);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(19,15752.7);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(20,14766.64);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(21,13935.68);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(22,13439.46);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(23,13194.76);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(24,13183.63);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(25,13243.35);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(26,13091.44);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(27,12366.54);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(28,10920.98);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(29,8639.214);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(30,5303.488);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(31,3787.789);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(2,1.169338);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(3,46.94602);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(4,64.93237);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(5,70.13816);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(6,70.39938);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(7,66.35614);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(8,60.60807);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(9,54.71082);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(10,49.53237);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(11,45.34577);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(12,42.2417);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(13,39.94096);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(14,38.13661);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(15,36.68595);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(16,35.37481);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(17,33.52003);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(18,32.11899);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(19,30.88891);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(20,29.94392);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(21,29.13182);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(22,28.66027);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(23,28.46131);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(24,28.52742);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(25,28.67128);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(26,28.57975);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(27,27.82619);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(28,26.17969);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(29,23.2804);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(30,18.20105);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(31,15.28865);
   VbbHcc_algo_Z_dR_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(2,2.257376);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(3,1983.556);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(4,2940.858);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(5,2736.393);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(6,2450.87);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(7,2142.058);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(8,1951.952);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(9,1861.598);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(10,1750.121);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(11,1661.319);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(12,1552.411);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(13,1435.973);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(14,1360.143);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(15,1224.992);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(16,1157.383);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(17,1014.533);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(18,900.1807);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(19,851.7401);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(20,804.2266);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(21,730.278);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(22,672.7414);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(23,618.4599);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(24,549.5558);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(25,524.3763);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(26,505.2728);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(27,457.8622);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(28,423.2471);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(29,349.2843);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(30,275.7802);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(31,196.8676);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(2,0.5997398);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(3,25.69007);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(4,37.69046);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(5,40.82921);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(6,45.27287);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(7,43.82895);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(8,38.30038);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(9,35.50038);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(10,35.3939);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(11,33.55736);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(12,31.9772);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(13,31.9963);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(14,31.44818);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(15,28.31255);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(16,28.65836);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(17,26.39064);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(18,23.42434);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(19,24.56892);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(20,25.14123);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(21,22.3304);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(22,22.76141);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(23,21.20822);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(24,18.95343);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(25,19.94742);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(26,21.74571);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(27,17.78927);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(28,16.20899);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(29,13.88019);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(30,13.83347);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(31,10.42918);
   VbbHcc_algo_Z_dR_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(2,0.2648202);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(3,915.0834);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(4,1136.594);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(5,954.1867);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(6,873.3181);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(7,781.6008);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(8,819.1279);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(9,794.0003);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(10,744.0022);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(11,679.7235);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(12,700.8075);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(13,556.5831);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(14,566.426);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(15,536.0248);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(16,540.9585);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(17,417.139);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(18,393.0969);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(19,358.8493);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(20,301.7868);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(21,284.3791);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(22,240.9251);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(23,257.7602);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(24,216.4515);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(25,222.2739);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(26,167.1156);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(27,212.6909);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(28,165.5415);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(29,178.6873);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(30,107.1475);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(31,78.17823);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(2,0.157336);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(3,27.43872);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(4,39.27948);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(5,39.19827);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(6,39.20379);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(7,37.15163);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(8,41.68467);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(9,38.53052);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(10,39.8796);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(11,32.46379);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(12,39.89434);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(13,31.9689);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(14,31.79494);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(15,29.95855);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(16,32.2888);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(17,26.21759);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(18,27.50727);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(19,24.9441);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(20,21.1415);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(21,21.39172);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(22,16.30267);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(23,19.09785);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(24,18.52981);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(25,19.25465);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(26,11.6963);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(27,20.18057);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(28,16.82346);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(29,18.05118);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(30,12.47822);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(31,8.785713);
   VbbHcc_algo_Z_dR_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(3,11.10572);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(4,13.66347);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(5,10.79278);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(6,8.454234);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(7,7.728718);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(8,7.366844);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(9,6.7021);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(10,5.844582);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(11,4.183216);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(12,5.697778);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(13,8.041058);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(14,6.338457);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(15,4.354085);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(16,4.441887);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(17,3.185996);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(18,2.920222);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(19,3.185996);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(20,3.015127);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(21,2.880758);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(22,3.185996);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(23,2.294346);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(24,1.97904);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(25,1.52463);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(26,2.162344);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(27,1.074954);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(28,1.84467);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(29,1.842303);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(30,1.439195);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(31,0.7207813);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(3,1.710083);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(4,1.855039);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(5,1.70641);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(6,1.510911);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(7,1.36699);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(8,1.306115);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(9,1.36977);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(10,1.237292);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(11,1.078913);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(12,1.039403);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(13,1.372254);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(14,1.274677);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(15,0.9485823);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(16,0.9244219);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(17,0.792939);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(18,0.823189);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(19,0.792939);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(20,0.944985);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(21,0.9353831);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(22,0.792939);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(23,0.8078018);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(24,0.7437244);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(25,0.5117751);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(26,0.8493282);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(27,0.3800538);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(28,0.7314854);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(29,0.6694783);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(30,0.6277228);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(31,0.4903599);
   VbbHcc_algo_Z_dR_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(2,0.1090586);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(3,16.00777);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(4,20.8617);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(5,17.57414);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(6,13.12254);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(7,10.65208);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(8,7.51312);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(9,7.814272);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(10,6.898317);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(11,6.446274);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(12,5.978423);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(13,7.649857);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(14,7.937485);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(15,5.43313);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(16,5.445);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(17,4.802518);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(18,5.066406);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(19,3.493815);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(20,5.270369);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(21,4.506959);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(22,2.621345);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(23,2.964329);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(24,2.430906);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(25,2.496479);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(26,2.992008);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(27,2.39929);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(28,3.73961);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(29,2.403228);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(30,1.748876);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(31,0.9973359);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(2,0.1090586);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(3,1.82383);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(4,2.008916);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(5,1.876743);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(6,1.639067);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(7,1.442931);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(8,1.268722);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(9,1.382945);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(10,1.252033);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(11,1.167581);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(12,1.001067);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(13,1.30942);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(14,1.311856);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(15,0.9709099);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(16,0.9375125);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(17,0.8624561);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(18,0.9368512);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(19,0.7753096);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(20,1.051161);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(21,1.010784);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(22,0.711305);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(23,0.8357054);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(24,0.7584182);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(25,0.5807698);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(26,0.8896261);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(27,0.5115304);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(28,0.8473037);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(29,0.6943826);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(30,0.6409403);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(31,0.5136258);
   VbbHcc_algo_Z_dR_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(3,40.72822);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(4,57.65067);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(5,56.1042);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(6,31.9227);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(7,20.25858);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(8,18.76722);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(9,13.20557);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(10,13.73412);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(11,16.80153);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(12,14.93421);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(13,17.25173);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(14,16.28506);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(15,12.55042);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(16,12.13642);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(17,9.527184);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(18,8.777525);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(19,7.945434);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(20,9.671788);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(21,7.469038);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(22,5.63793);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(23,2.478297);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(24,3.547444);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(25,2.866333);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(26,3.724613);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(27,4.309406);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(28,4.70746);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(29,7.748453);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(30,2.554578);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(31,2.33756);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(3,3.256351);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(4,3.876613);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(5,3.815234);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(6,2.872221);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(7,2.268741);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(8,2.200608);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(9,1.852524);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(10,1.872094);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(11,2.087948);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(12,1.964648);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(13,2.111612);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(14,2.055799);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(15,1.796368);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(16,1.773833);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(17,1.568867);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(18,1.507962);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(19,1.429592);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(20,1.57121);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(21,1.389391);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(22,1.204012);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(23,0.7844701);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(24,0.9490816);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(25,0.8661603);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(26,0.997195);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(27,1.046975);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(28,1.111742);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(29,1.417208);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(30,0.8088325);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(31,0.7803906);
   VbbHcc_algo_Z_dR_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(2,0.0128681);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(3,26.46624);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(4,44.52066);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(5,40.03172);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(6,28.73382);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(7,17.95678);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(8,11.75948);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(9,9.221174);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(10,8.286855);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(11,8.133181);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(12,8.242501);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(13,7.95583);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(14,7.645375);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(15,7.173903);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(16,6.320336);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(17,5.898382);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(18,5.401156);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(19,5.115493);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(20,4.402229);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(21,4.120631);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(22,3.439806);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(23,2.956308);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(24,2.720949);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(25,2.684293);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(26,3.206703);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(27,3.729002);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(28,4.215987);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(29,3.969421);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(30,2.511231);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(31,1.428871);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(2,0.00461762);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(3,0.2200956);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(4,0.2854568);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(5,0.2693167);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(6,0.2251193);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(7,0.1763398);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(8,0.1416223);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(9,0.1259193);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(10,0.1197927);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(11,0.1193613);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(12,0.1205658);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(13,0.1185889);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(14,0.1167671);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(15,0.1133091);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(16,0.1068163);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(17,0.1028181);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(18,0.09868243);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(19,0.09588737);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(20,0.08846127);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(21,0.08545782);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(22,0.07826885);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(23,0.07131788);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(24,0.06850465);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(25,0.06784988);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(26,0.07445571);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(27,0.08135012);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(28,0.08672069);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(29,0.08504934);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(30,0.06755885);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(31,0.05072021);
   VbbHcc_algo_Z_dR_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(2,0.004106449);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(3,6.663398);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(4,14.82017);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(5,17.76587);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(6,16.51888);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(7,11.74992);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(8,8.295027);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(9,6.473133);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(10,5.820207);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(11,5.759979);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(12,5.569714);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(13,5.497167);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(14,5.022187);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(15,4.584166);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(16,4.173521);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(17,3.679378);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(18,3.40014);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(19,3.227669);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(20,2.996339);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(21,2.817024);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(22,2.504934);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(23,2.24349);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(24,1.992997);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(25,2.01216);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(26,2.109346);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(27,2.335201);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(28,2.27771);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(29,1.708283);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(30,1.081365);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(31,0.685777);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(2,0.001402319);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(3,0.0564887);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(4,0.08424427);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(5,0.09223737);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(6,0.0889414);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(7,0.07501207);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(8,0.06302642);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(9,0.05567638);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(10,0.0527938);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(11,0.05251993);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(12,0.05164522);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(13,0.05130777);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(14,0.04904109);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(15,0.0468537);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(16,0.04470592);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(17,0.04197599);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(18,0.04035172);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(19,0.03931499);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(20,0.03787993);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(21,0.03672899);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(22,0.03463473);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(23,0.0327775);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(24,0.03089349);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(25,0.03104166);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(26,0.03178247);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(27,0.03344073);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(28,0.03302653);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(29,0.02860181);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(30,0.02275621);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(31,0.01812196);
   VbbHcc_algo_Z_dR_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(3,0.2435302);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(4,0.3507959);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(5,0.2810369);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(6,0.2214548);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(7,0.1450096);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(8,0.09338201);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(9,0.08097626);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(10,0.08113174);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(11,0.07345347);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(12,0.07017843);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(13,0.1059289);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(14,0.08109799);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(15,0.07481074);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(16,0.06231092);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(17,0.05342367);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(18,0.06252672);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(19,0.04698813);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(20,0.04887215);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(21,0.03930986);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(22,0.05553067);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(23,0.03727036);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(24,0.02385205);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(25,0.02609407);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(26,0.02909909);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(27,0.02089407);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(28,0.03453535);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(29,0.02293356);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(30,0.01133177);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(31,0.004315259);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(3,0.02336772);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(4,0.02799226);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(5,0.02514342);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(6,0.02232669);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(7,0.01847459);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(8,0.01462626);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(9,0.01394025);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(10,0.01366298);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(11,0.0132707);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(12,0.01258156);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(13,0.015597);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(14,0.01348666);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(15,0.01329241);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(16,0.01227179);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(17,0.01113258);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(18,0.01202708);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(19,0.01005605);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(20,0.01065721);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(21,0.009516227);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(22,0.01176039);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(23,0.009260681);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(24,0.007420673);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(25,0.007447042);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(26,0.008252665);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(27,0.006757638);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(28,0.008847596);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(29,0.007103805);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(30,0.004759005);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(31,0.003158712);
   VbbHcc_algo_Z_dR_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(3,0.05626457);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(4,0.118361);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(5,0.12361);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(6,0.1024322);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(7,0.07126351);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(8,0.04662793);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(9,0.0414881);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(10,0.04088912);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(11,0.04321716);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(12,0.04722685);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(13,0.0366923);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(14,0.03921667);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(15,0.03703829);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(16,0.03239249);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(17,0.02734141);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(18,0.03012106);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(19,0.0216251);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(20,0.02497927);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(21,0.02025336);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(22,0.02143937);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(23,0.01681741);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(24,0.01006408);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(25,0.01293348);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(26,0.01379767);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(27,0.01565457);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(28,0.01522842);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(29,0.01053595);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(30,0.005902038);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(31,0.004679907);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(3,0.00407863);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(4,0.00592294);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(5,0.006008934);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(6,0.005515678);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(7,0.004563655);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(8,0.003713906);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(9,0.003471317);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(10,0.003433827);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(11,0.003545575);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(12,0.003778865);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(13,0.003271485);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(14,0.00339791);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(15,0.003293994);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(16,0.003083541);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(17,0.002894277);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(18,0.003000663);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(19,0.002561732);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(20,0.002740213);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(21,0.002437456);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(22,0.002576363);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(23,0.002272862);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(24,0.001702405);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(25,0.001974626);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(26,0.002058875);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(27,0.002120953);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(28,0.002086409);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(29,0.001741328);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(30,0.001318785);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(31,0.001195954);
   VbbHcc_algo_Z_dR_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_all__318 = new TH1D("VbbHcc_algo_Z_dR_all__318","",30,0,6);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(2,120);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(3,177030);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(4,231568);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(5,200117);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(6,190877);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(7,184987);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(8,179766);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(9,176032);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(10,170095);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(11,163819);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(12,155532);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(13,147907);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(14,139650);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(15,132027);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(16,124937);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(17,105988);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(18,93851);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(19,85290);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(20,77766);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(21,70665);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(22,64912);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(23,59924);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(24,55791);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(25,50858);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(26,46990);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(27,42427);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(28,38862);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(29,34545);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(30,24391);
   VbbHcc_algo_Z_dR_all__318->SetBinContent(31,21619);
   VbbHcc_algo_Z_dR_all__318->SetEntries(3248372);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all__318->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all__318->SetLineWidth(2);
   VbbHcc_algo_Z_dR_all__318->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_all__318->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all__318->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__318->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__318->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fx1231[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fy1231[30] = {
   0,
   169.0257,
   398649.4,
   522357.8,
   437675.1,
   435039.9,
   437728.4,
   415043.8,
   399876.8,
   415559.9,
   409235.5,
   378717.4,
   344747.6,
   338464.7,
   304033.1,
   322089.6,
   267140.6,
   265399.6,
   212358.6,
   169625.5,
   162124.2,
   146675,
   140853.5,
   118846.2,
   119554.4,
   142253.7,
   107144.4,
   88505.38,
   81078.88,
   52270.39};
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fex1231[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fey1231[30] = {
   0,
   34.97308,
   8591.269,
   17483.96,
   8981.967,
   9261.547,
   9286.281,
   9465.963,
   9237.161,
   22287.2,
   10845.29,
   22401.32,
   9017.427,
   9644.829,
   9033.23,
   22595.02,
   21589.86,
   26215.99,
   8418.392,
   6097.305,
   5880.801,
   5761.314,
   6030.994,
   4747.403,
   5501.427,
   25408.56,
   5547.002,
   4442.36,
   4649.378,
   3062.055};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_all_fx1231,Graph_from_VbbHcc_algo_Z_dR_all_fy1231,Graph_from_VbbHcc_algo_Z_dR_all_fex1231,Graph_from_VbbHcc_algo_Z_dR_all_fey1231);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_all1231 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_all1231","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMinimum(593.8259);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMaximum(593825.9);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_all1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__319 = new TH1D("data_mc_ratio__319","",30,0,6);
   data_mc_ratio__319->SetBinContent(2,0.7099511);
   data_mc_ratio__319->SetBinContent(3,0.4440744);
   data_mc_ratio__319->SetBinContent(4,0.443313);
   data_mc_ratio__319->SetBinContent(5,0.4572273);
   data_mc_ratio__319->SetBinContent(6,0.4387574);
   data_mc_ratio__319->SetBinContent(7,0.4226068);
   data_mc_ratio__319->SetBinContent(8,0.4331254);
   data_mc_ratio__319->SetBinContent(9,0.4402156);
   data_mc_ratio__319->SetBinContent(10,0.4093153);
   data_mc_ratio__319->SetBinContent(11,0.400305);
   data_mc_ratio__319->SetBinContent(12,0.4106809);
   data_mc_ratio__319->SetBinContent(13,0.4290298);
   data_mc_ratio__319->SetBinContent(14,0.4125984);
   data_mc_ratio__319->SetBinContent(15,0.4342521);
   data_mc_ratio__319->SetBinContent(16,0.3878952);
   data_mc_ratio__319->SetBinContent(17,0.3967499);
   data_mc_ratio__319->SetBinContent(18,0.3536215);
   data_mc_ratio__319->SetBinContent(19,0.4016319);
   data_mc_ratio__319->SetBinContent(20,0.4584569);
   data_mc_ratio__319->SetBinContent(21,0.4358695);
   data_mc_ratio__319->SetBinContent(22,0.4425566);
   data_mc_ratio__319->SetBinContent(23,0.4254351);
   data_mc_ratio__319->SetBinContent(24,0.4694388);
   data_mc_ratio__319->SetBinContent(25,0.4253961);
   data_mc_ratio__319->SetBinContent(26,0.3303253);
   data_mc_ratio__319->SetBinContent(27,0.3959798);
   data_mc_ratio__319->SetBinContent(28,0.4390919);
   data_mc_ratio__319->SetBinContent(29,0.4260666);
   data_mc_ratio__319->SetBinContent(30,0.4666313);
   data_mc_ratio__319->SetBinContent(31,0.4718902);
   data_mc_ratio__319->SetBinError(2,0.06480937);
   data_mc_ratio__319->SetBinError(3,0.001055437);
   data_mc_ratio__319->SetBinError(4,0.0009212367);
   data_mc_ratio__319->SetBinError(5,0.001022092);
   data_mc_ratio__319->SetBinError(6,0.001004263);
   data_mc_ratio__319->SetBinError(7,0.0009825754);
   data_mc_ratio__319->SetBinError(8,0.001021551);
   data_mc_ratio__319->SetBinError(9,0.001049227);
   data_mc_ratio__319->SetBinError(10,0.0009924581);
   data_mc_ratio__319->SetBinError(11,0.0009890287);
   data_mc_ratio__319->SetBinError(12,0.001041345);
   data_mc_ratio__319->SetBinError(13,0.001115561);
   data_mc_ratio__319->SetBinError(14,0.001104097);
   data_mc_ratio__319->SetBinError(15,0.001195117);
   data_mc_ratio__319->SetBinError(16,0.00109741);
   data_mc_ratio__319->SetBinError(17,0.001218677);
   data_mc_ratio__319->SetBinError(18,0.001154301);
   data_mc_ratio__319->SetBinError(19,0.001375242);
   data_mc_ratio__319->SetBinError(20,0.001644007);
   data_mc_ratio__319->SetBinError(21,0.001639662);
   data_mc_ratio__319->SetBinError(22,0.001737026);
   data_mc_ratio__319->SetBinError(23,0.001737932);
   data_mc_ratio__319->SetBinError(24,0.001987453);
   data_mc_ratio__319->SetBinError(25,0.001886314);
   data_mc_ratio__319->SetBinError(26,0.001523839);
   data_mc_ratio__319->SetBinError(27,0.001922436);
   data_mc_ratio__319->SetBinError(28,0.002227373);
   data_mc_ratio__319->SetBinError(29,0.002292371);
   data_mc_ratio__319->SetBinError(30,0.002987852);
   data_mc_ratio__319->SetBinError(31,0.02638045);
   data_mc_ratio__319->SetMinimum(0.4);
   data_mc_ratio__319->SetMaximum(1.6);
   data_mc_ratio__319->SetEntries(4023.171);
   data_mc_ratio__319->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__319->SetLineColor(ci);
   data_mc_ratio__319->SetLineWidth(2);
   data_mc_ratio__319->SetMarkerStyle(20);
   data_mc_ratio__319->SetMarkerSize(1.2);
   data_mc_ratio__319->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__319->GetXaxis()->SetRange(1,30);
   data_mc_ratio__319->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__319->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__319->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__319->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__319->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__319->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__319->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__319->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__319->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__319->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__319->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__319->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__319->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__319->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__319->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1232[30] = {
   0,
   0.2069098,
   0.02155094,
   0.03347123,
   0.020522,
   0.02128896,
   0.02121471,
   0.02280714,
   0.02310002,
   0.05363175,
   0.02650134,
   0.05915048,
   0.02615661,
   0.02849582,
   0.02971134,
   0.07015136,
   0.08081833,
   0.0987793,
   0.03964234,
   0.03594568,
   0.03627343,
   0.03927945,
   0.04281751,
   0.03994578,
   0.04601608,
   0.1786143,
   0.05177129,
   0.05019311,
   0.05734389,
   0.05858105};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.7517082);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(1.248292);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
