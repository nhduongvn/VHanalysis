void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Fri Jul 14 13:37:56 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(0,0,1,1);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1574.784,6.314516,1573509);
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
   st->SetMaximum(1348572);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0.3);
   st_stack_20->SetMaximum(1416001);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,181.1887);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,549477.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,568428.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,429648.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,341064.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,275392.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,239816.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,238935.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,229220.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,207725.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,200519.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,219979.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,260146.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,269768.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,279879.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,249422.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,251092.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,202343.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,184038.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,145475.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,150959.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,105804);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,92169.88);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,70980.87);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,68905.52);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,65645.72);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,62017.66);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,66431.49);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(30,41587.98);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(31,28408.44);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,45.41941);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,8309.89);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,10789.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,24405.28);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,8986.336);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,7698.877);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,6518.105);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,7985.611);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,7892.893);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,7390.954);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,6831.923);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,7570.295);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,24693.21);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,15914.54);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,16775.39);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,13114.99);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,22501.52);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,6773.11);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,7062.932);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,6175.854);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,18699.44);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,4862.034);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,5568.973);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,3759.618);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,4089.297);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,3789.167);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,3493.615);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,4546.553);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(30,3037.009);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(31,2908.176);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.5395626);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,1002.555);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,1794.597);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,2071.283);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,2347.063);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,2605.846);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,2795.388);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,3022.113);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,3153.401);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,3411.647);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,3640.593);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,3854.304);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,3973.884);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,4058.415);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,4042.672);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,3762.522);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,3434.801);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,3082.585);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,2706.015);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,2305.176);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,1912.038);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,1574.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,1280.435);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,1029.552);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,877.1401);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,660.9725);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,511.4597);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,397.1785);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(30,246.8512);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(31,240.7384);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.3143844);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,14.7574);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,18.86525);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,20.27172);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,21.9018);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,22.75908);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,24.0545);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,27.86971);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,25.28531);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,28.95045);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,26.85772);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,27.66486);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,27.81197);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,28.40899);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,28.30857);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,27.1728);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,26.80526);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,24.54237);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,23.39951);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,21.36174);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,19.54147);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,17.80267);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,16.1068);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,14.43229);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,13.48159);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,11.79412);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,10.40679);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,9.285408);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(30,7.092104);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(31,7.130958);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(2,9.335289);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(3,14949.1);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(4,28449.14);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(5,33472.81);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(6,38426.52);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(7,41955.11);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(8,44792.23);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(9,48064.38);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(10,51910.37);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(11,57136.78);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(12,63094.47);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(13,69625.23);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(14,75668);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(15,79949.56);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(16,81571.94);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(17,78301.9);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(18,72470.87);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(19,64120.48);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(20,54621.51);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(21,44887.2);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(22,35881.73);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(23,28071.72);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(24,21706.94);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(25,16633.91);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(26,12785.84);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(27,9758.566);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(28,7288.112);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(29,5272.398);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(30,3198.661);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(31,2717.35);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(2,0.7962245);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(3,33.3448);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(4,45.88841);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(5,50.07556);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(6,53.88066);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(7,55.90556);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(8,57.70908);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(9,59.81872);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(10,62.32211);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(11,65.32642);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(12,68.59192);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(13,72.78889);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(14,75.42742);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(15,77.52037);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(16,78.41471);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(17,77.57843);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(18,74.5587);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(19,70.21422);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(20,64.57093);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(21,58.20956);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(22,51.96554);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(23,46.04832);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(24,40.06078);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(25,35.00705);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(26,30.94904);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(27,26.99386);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(28,23.02995);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(29,19.51539);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(30,15.55252);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(31,14.64322);
   VbbHcc_tags_Z_dR_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(2,1.253485);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(3,3698.088);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(4,5392.018);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(5,4876.996);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(6,4123.609);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(7,2957.899);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(8,2126.696);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(9,1684.474);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(10,1475.852);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(11,1425.832);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(12,1411.152);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(13,1459.336);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(14,1629.947);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(15,1756.042);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(16,1771.398);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(17,1672.525);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(18,1547.585);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(19,1422.308);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(20,1212.936);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(21,1004.679);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(22,826.8402);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(23,739.0848);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(24,625.1108);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(25,610.7615);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(26,619.6884);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(27,629.196);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(28,623.2976);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(29,530.8244);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(30,344.2139);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(31,204.4476);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(2,0.3345995);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(3,30.07741);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(4,36.96655);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(5,45.20847);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(6,54.38924);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(7,47.50789);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(8,40.99883);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(9,36.05017);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(10,32.7507);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(11,30.47223);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(12,29.04933);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(13,28.77321);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(14,30.80068);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(15,33.75472);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(16,32.01097);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(17,32.7843);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(18,30.29385);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(19,30.39324);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(20,28.94632);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(21,24.8587);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(22,20.85728);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(23,20.74726);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(24,17.95697);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(25,20.10139);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(26,18.74189);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(27,22.33298);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(28,19.10344);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(29,14.23731);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(30,10.53675);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(31,9.060167);
   VbbHcc_tags_Z_dR_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(2,1.217457);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(3,2830.595);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(4,2659.962);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(5,1762.561);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(6,1421.465);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(7,1211.694);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(8,1053.037);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(9,947.5628);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(10,921.8429);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(11,946.3562);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(12,936.0839);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(13,996.2845);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(14,1091.087);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(15,1249.219);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(16,1242.749);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(17,1178.758);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(18,994.6427);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(19,982.7368);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(20,820.5289);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(21,687.6476);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(22,555.6782);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(23,469.4446);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(24,396.813);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(25,328.6373);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(26,305.2041);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(27,313.8929);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(28,266.7529);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(29,304.2494);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(30,201.6397);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(31,132.5317);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(2,0.3731283);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(3,58.48099);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(4,58.21824);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(5,44.07438);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(6,43.89016);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(7,42.96241);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(8,34.90127);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(9,35.6039);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(10,38.16014);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(11,37.30411);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(12,36.43367);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(13,40.36044);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(14,40.66928);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(15,45.38412);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(16,47.21205);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(17,47.39468);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(18,38.40724);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(19,45.1681);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(20,33.74565);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(21,29.23137);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(22,23.61491);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(23,31.95558);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(24,21.94123);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(25,19.68921);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(26,16.92774);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(27,22.8906);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(28,15.13235);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(29,31.81219);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(30,17.42752);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(31,11.00983);
   VbbHcc_tags_Z_dR_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(3,10.94674);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(4,9.970015);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(5,7.353582);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(6,4.603015);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(7,6.735843);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(8,5.699076);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(9,5.973495);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(10,5.824558);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(11,5.900075);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(12,7.489998);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(13,6.739074);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(14,9.096577);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(15,9.440056);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(16,8.09766);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(17,8.740483);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(18,7.044471);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(19,7.264306);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(20,6.767367);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(21,2.349062);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(22,3.987119);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(23,3.075396);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(24,2.496354);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(25,2.481258);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(26,2.328881);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(27,1.008092);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(28,0.843978);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(29,1.363783);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(30,1.607745);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(31,0.5466434);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(3,1.504258);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(4,1.407553);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(5,1.239941);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(6,0.8619537);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(7,1.154364);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(8,1.055143);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(9,1.102886);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(10,1.081578);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(11,0.968218);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(12,1.268043);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(13,1.098907);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(14,1.374403);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(15,1.357899);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(16,1.140816);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(17,1.31785);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(18,1.205824);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(19,1.117568);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(20,1.217586);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(21,0.5904278);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(22,0.9123101);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(23,0.791796);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(24,0.6567815);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(25,0.6723138);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(26,0.6809523);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(27,0.4318724);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(28,0.2759333);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(29,0.4640921);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(30,0.6969186);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(31,0.3061962);
   VbbHcc_tags_Z_dR_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(3,22.03983);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(4,34.7167);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(5,27.6682);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(6,18.94108);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(7,16.52159);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(8,9.944475);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(9,8.932986);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(10,6.654658);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(11,5.016273);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(12,8.120671);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(13,5.543582);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(14,9.494441);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(15,9.817638);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(16,7.284194);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(17,10.16276);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(18,7.373402);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(19,7.138976);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(20,7.074497);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(21,3.633843);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(22,4.59968);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(23,3.443914);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(24,2.273018);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(25,2.925251);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(26,2.606284);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(27,3.259574);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(28,2.758077);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(29,2.420252);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(30,2.293632);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(31,1.460642);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(3,1.707265);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(4,1.888946);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(5,1.697392);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(6,1.28539);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(7,1.397407);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(8,1.164225);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(9,1.171182);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(10,1.083802);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(11,0.8847677);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(12,1.263856);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(13,1.021372);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(14,1.352991);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(15,1.328443);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(16,1.071193);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(17,1.330092);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(18,1.183283);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(19,1.074306);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(20,1.199062);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(21,0.6364299);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(22,0.9161709);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(23,0.7880343);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(24,0.6236517);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(25,0.6736492);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(26,0.6759376);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(27,0.5780012);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(28,0.4340428);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(29,0.5170999);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(30,0.7216623);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(31,0.3837777);
   VbbHcc_tags_Z_dR_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(3,33.93094);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(4,52.07466);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(5,48.13312);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(6,30.5535);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(7,21.10255);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(8,14.8767);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(9,11.86589);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(10,8.959998);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(11,7.480776);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(12,8.333104);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(13,10.84922);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(14,10.33549);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(15,12.94894);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(16,15.28109);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(17,11.7471);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(18,12.98697);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(19,8.022585);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(20,6.549567);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(21,6.294354);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(22,4.160977);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(23,3.652007);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(24,3.119661);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(25,3.695057);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(26,3.662762);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(27,4.800078);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(28,5.934558);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(29,4.317841);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(30,1.238588);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(31,0.5499168);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(3,2.676998);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(4,3.392567);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(5,3.196303);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(6,2.544972);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(7,2.125784);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(8,1.772281);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(9,1.625565);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(10,1.37285);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(11,1.285269);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(12,1.350242);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(13,1.768902);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(14,1.472436);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(15,1.632504);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(16,1.791896);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(17,1.557388);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(18,1.673919);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(19,1.312156);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(20,1.186937);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(21,1.165679);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(22,0.8972935);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(23,0.9081718);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(24,0.7865843);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(25,0.9022957);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(26,0.8741974);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(27,1.018361);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(28,1.114943);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(29,1.00244);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(30,0.4915209);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(31,0.3219484);
   VbbHcc_tags_Z_dR_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(2,0.002368554);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(3,8.775232);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(4,19.97143);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(5,24.17294);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(6,24.381);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(7,20.79565);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(8,14.08543);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(9,9.894397);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(10,7.630076);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(11,6.923257);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(12,6.972594);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(13,7.682478);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(14,8.560812);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(15,9.608795);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(16,10.16836);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(17,9.800869);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(18,8.322581);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(19,7.064269);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(20,5.376617);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(21,4.085323);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(22,3.443778);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(23,2.894139);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(24,2.968128);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(25,3.210558);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(26,3.495932);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(27,3.252807);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(28,3.043106);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(29,2.13812);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(30,1.218895);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(31,0.7551774);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(2,0.002368554);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(3,0.1379774);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(4,0.2037948);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(5,0.2299527);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(6,0.2318236);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(7,0.2137368);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(8,0.1968707);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(9,0.1412075);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(10,0.1217997);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(11,0.1175506);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(12,0.1251542);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(13,0.1317908);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(14,0.1382323);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(15,0.143612);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(16,0.1437226);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(17,0.1480249);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(18,0.1319242);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(19,0.1280763);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(20,0.1054432);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(21,0.09191977);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(22,0.08307461);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(23,0.07586108);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(24,0.08086063);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(25,0.08018043);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(26,0.08495926);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(27,0.08180377);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(28,0.07994475);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(29,0.06643588);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(30,0.0635519);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(31,0.03944071);
   VbbHcc_tags_Z_dR_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(2,0.004376029);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(3,7.341959);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(4,15.06528);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(5,18.46841);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(6,19.31238);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(7,16.92985);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(8,12.323);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(9,8.380709);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(10,6.02396);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(11,5.315301);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(12,5.198798);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(13,5.254445);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(14,5.308934);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(15,5.717628);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(16,5.942059);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(17,5.537662);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(18,4.925432);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(19,4.293192);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(20,3.609044);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(21,3.04878);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(22,2.601901);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(23,2.342871);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(24,2.576235);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(25,2.645998);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(26,2.754426);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(27,2.681949);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(28,2.231891);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(29,1.720489);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(30,1.0274);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(31,0.6510884);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(2,0.001502756);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(3,0.0611192);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(4,0.08758483);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(5,0.09709102);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(6,0.09940303);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(7,0.09316761);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(8,0.07950091);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(9,0.06547352);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(10,0.05548209);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(11,0.05215538);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(12,0.05156257);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(13,0.0518422);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(14,0.05211006);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(15,0.05406689);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(16,0.05518776);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(17,0.05332539);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(18,0.05025917);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(19,0.04692912);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(20,0.04298105);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(21,0.03941464);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(22,0.03642251);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(23,0.03462712);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(24,0.03632462);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(25,0.03682652);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(26,0.03757517);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(27,0.03701609);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(28,0.03378423);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(29,0.02967665);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(30,0.02285493);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(31,0.01825138);
   VbbHcc_tags_Z_dR_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(3,0.7201256);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(4,1.083676);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(5,0.9569645);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(6,0.6797397);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(7,0.3440966);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(8,0.2218832);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(9,0.1213792);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(10,0.1782537);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(11,0.1106282);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(12,0.1487285);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(13,0.1526285);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(14,0.1865196);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(15,0.1921341);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(16,0.1924373);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(17,0.1813478);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(18,0.1834439);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(19,0.1156861);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(20,0.1115859);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(21,0.0697215);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(22,0.08483529);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(23,0.04215544);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(24,0.06350837);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(25,0.06937642);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(26,0.05152727);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(27,0.1102281);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(28,0.1039948);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(29,0.09142461);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(30,0.04153692);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(31,0.03379335);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(3,0.04719447);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(4,0.05327155);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(5,0.04973152);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(6,0.04135009);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(7,0.02983072);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(8,0.02364334);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(9,0.01855426);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(10,0.02897069);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(11,0.01729998);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(12,0.01894886);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(13,0.01935559);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(14,0.02225779);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(15,0.02273312);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(16,0.02245052);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(17,0.0213983);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(18,0.02214706);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(19,0.01776394);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(20,0.01658874);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(21,0.0133983);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(22,0.01510121);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(23,0.01020565);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(24,0.01302959);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(25,0.01340211);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(26,0.01129562);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(27,0.02547174);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(28,0.01604807);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(29,0.01538561);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(30,0.01021396);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(31,0.009956733);
   VbbHcc_tags_Z_dR_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(3,0.2576514);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(4,0.549097);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(5,0.5300228);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(6,0.3523586);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(7,0.1871454);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(8,0.1079893);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(9,0.06340191);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(10,0.0626836);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(11,0.05293099);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(12,0.06573039);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(13,0.07500913);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(14,0.0749322);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(15,0.08045082);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(16,0.08980638);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(17,0.09168844);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(18,0.06933727);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(19,0.06157699);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(20,0.05268599);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(21,0.04440567);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(22,0.03728065);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(23,0.02770193);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(24,0.02595353);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(25,0.02664012);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(26,0.03397249);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(27,0.04430493);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(28,0.04826011);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(29,0.04334085);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(30,0.02344441);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(31,0.01344365);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(3,0.009170975);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(4,0.01379888);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(5,0.01319678);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(6,0.01064846);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(7,0.007917027);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(8,0.006004085);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(9,0.004716742);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(10,0.004582719);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(11,0.004193884);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(12,0.004680785);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(13,0.004952328);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(14,0.004986622);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(15,0.005145372);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(16,0.005470634);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(17,0.006533808);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(18,0.004742537);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(19,0.004522988);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(20,0.004134969);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(21,0.003813155);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(22,0.003485402);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(23,0.002992534);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(24,0.002946724);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(25,0.002929885);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(26,0.003290456);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(27,0.003803428);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(28,0.003952832);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(29,0.003734786);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(30,0.00278147);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(31,0.002123866);
   VbbHcc_tags_Z_dR_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_all__39 = new TH1D("VbbHcc_tags_Z_dR_all__39","",30,0,6);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(2,169);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(3,366311);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(4,404300);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(5,291234);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(6,247608);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(7,220039);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(8,203423);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(9,194268);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(10,190817);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(11,191948);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(12,196998);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(13,207006);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(14,219286);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(15,232248);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(16,239980);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(17,227909);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(18,211866);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(19,190313);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(20,166494);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(21,142978);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(22,120039);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(23,99105);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(24,82449);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(25,70078);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(26,60645);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(27,53944);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(28,50484);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(29,49554);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(30,32833);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(31,23625);
   VbbHcc_tags_Z_dR_all__39->SetEntries(4987951);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all__39->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all__39->SetLineWidth(2);
   VbbHcc_tags_Z_dR_all__39->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_all__39->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fx1039[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fy1039[30] = {
   0,
   193.5412,
   572041.4,
   606857.5,
   471959.3,
   387481.9,
   324205.8,
   290640.8,
   292699.7,
   286717.5,
   270676.9,
   269637.9,
   295951,
   342552.7,
   356830,
   368554.9,
   334384.8,
   329581.4,
   271985.7,
   243429.5,
   194380.1,
   190155,
   136674.4,
   116192.7,
   89598.78,
   83508.33,
   77023.51,
   70722.25,
   72948.23,
   45586.8};
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fex1039[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fey1039[30] = {
   0,
   45.43024,
   8310.231,
   10790.08,
   24405.42,
   8986.797,
   7699.381,
   6518.628,
   7986.045,
   7893.34,
   7391.457,
   6832.48,
   7570.858,
   24693.39,
   15914.86,
   16775.7,
   13115.38,
   22501.72,
   6773.737,
   7063.406,
   6176.285,
   18699.55,
   4862.434,
   5569.212,
   3759.914,
   4089.514,
   3789.417,
   3493.791,
   4546.738,
   3037.126};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_all_fx1039,Graph_from_VbbHcc_tags_Z_dR_all_fy1039,Graph_from_VbbHcc_tags_Z_dR_all_fex1039,Graph_from_VbbHcc_tags_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_all1039","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMaximum(679412.4);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__40 = new TH1D("data_mc_ratio__40","",30,0,6);
   data_mc_ratio__40->SetBinContent(2,0.8731991);
   data_mc_ratio__40->SetBinContent(3,0.6403574);
   data_mc_ratio__40->SetBinContent(4,0.666219);
   data_mc_ratio__40->SetBinContent(5,0.6170744);
   data_mc_ratio__40->SetBinContent(6,0.6390182);
   data_mc_ratio__40->SetBinContent(7,0.6787016);
   data_mc_ratio__40->SetBinContent(8,0.6999122);
   data_mc_ratio__40->SetBinContent(9,0.663711);
   data_mc_ratio__40->SetBinContent(10,0.6655227);
   data_mc_ratio__40->SetBinContent(11,0.7091408);
   data_mc_ratio__40->SetBinContent(12,0.730602);
   data_mc_ratio__40->SetBinContent(13,0.6994603);
   data_mc_ratio__40->SetBinContent(14,0.6401527);
   data_mc_ratio__40->SetBinContent(15,0.6508646);
   data_mc_ratio__40->SetBinContent(16,0.6511377);
   data_mc_ratio__40->SetBinContent(17,0.681577);
   data_mc_ratio__40->SetBinContent(18,0.6428335);
   data_mc_ratio__40->SetBinContent(19,0.6997169);
   data_mc_ratio__40->SetBinContent(20,0.6839517);
   data_mc_ratio__40->SetBinContent(21,0.735559);
   data_mc_ratio__40->SetBinContent(22,0.6312693);
   data_mc_ratio__40->SetBinContent(23,0.7251173);
   data_mc_ratio__40->SetBinContent(24,0.7095885);
   data_mc_ratio__40->SetBinContent(25,0.7821312);
   data_mc_ratio__40->SetBinContent(26,0.726215);
   data_mc_ratio__40->SetBinContent(27,0.7003576);
   data_mc_ratio__40->SetBinContent(28,0.7138348);
   data_mc_ratio__40->SetBinContent(29,0.6793036);
   data_mc_ratio__40->SetBinContent(30,0.7202304);
   data_mc_ratio__40->SetBinContent(31,0.7450913);
   data_mc_ratio__40->SetBinError(2,0.06716916);
   data_mc_ratio__40->SetBinError(3,0.001058029);
   data_mc_ratio__40->SetBinError(4,0.001047768);
   data_mc_ratio__40->SetBinError(5,0.001143448);
   data_mc_ratio__40->SetBinError(6,0.001284195);
   data_mc_ratio__40->SetBinError(7,0.001446869);
   data_mc_ratio__40->SetBinError(8,0.001551828);
   data_mc_ratio__40->SetBinError(9,0.001505838);
   data_mc_ratio__40->SetBinError(10,0.001523542);
   data_mc_ratio__40->SetBinError(11,0.001618604);
   data_mc_ratio__40->SetBinError(12,0.001646076);
   data_mc_ratio__40->SetBinError(13,0.001537346);
   data_mc_ratio__40->SetBinError(14,0.00136703);
   data_mc_ratio__40->SetBinError(15,0.001350562);
   data_mc_ratio__40->SetBinError(16,0.001329185);
   data_mc_ratio__40->SetBinError(17,0.001427691);
   data_mc_ratio__40->SetBinError(18,0.001396587);
   data_mc_ratio__40->SetBinError(19,0.00160394);
   data_mc_ratio__40->SetBinError(20,0.001676201);
   data_mc_ratio__40->SetBinError(21,0.001945283);
   data_mc_ratio__40->SetBinError(22,0.001822021);
   data_mc_ratio__40->SetBinError(23,0.002303353);
   data_mc_ratio__40->SetBinError(24,0.002471234);
   data_mc_ratio__40->SetBinError(25,0.002954532);
   data_mc_ratio__40->SetBinError(26,0.002948952);
   data_mc_ratio__40->SetBinError(27,0.003015423);
   data_mc_ratio__40->SetBinError(28,0.003177026);
   data_mc_ratio__40->SetBinError(29,0.003051579);
   data_mc_ratio__40->SetBinError(30,0.003974808);
   data_mc_ratio__40->SetBinError(31,0.06851248);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(5541.574);
   data_mc_ratio__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__40->SetLineColor(ci);
   data_mc_ratio__40->SetLineWidth(2);
   data_mc_ratio__40->SetMarkerStyle(20);
   data_mc_ratio__40->SetMarkerSize(1.2);
   data_mc_ratio__40->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__40->GetXaxis()->SetRange(1,30);
   data_mc_ratio__40->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__40->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__40->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__40->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__40->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__40->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1040[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1040[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1040[30] = {
   0,
   0.2347316,
   0.01452732,
   0.01778025,
   0.05171087,
   0.02319282,
   0.02374844,
   0.02242847,
   0.02728409,
   0.02753002,
   0.02730731,
   0.02533946,
   0.02558145,
   0.0720864,
   0.04460067,
   0.0455175,
   0.0392224,
   0.06827362,
   0.02490475,
   0.02901623,
   0.03177427,
   0.09833846,
   0.03557677,
   0.04793083,
   0.0419639,
   0.04897133,
   0.04919819,
   0.04940159,
   0.06232829,
   0.06662292};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.7183221);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.281678);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
