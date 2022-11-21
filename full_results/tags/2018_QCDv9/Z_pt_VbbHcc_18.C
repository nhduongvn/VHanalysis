void Z_pt_VbbHcc_18()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_18/Z_pt_VbbHcc_18
//=========  (Mon Nov 21 09:33:06 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_18 = new TCanvas("Z_pt_VbbHcc_18", "Z_pt_VbbHcc_18",0,0,600,600);
   Z_pt_VbbHcc_18->SetHighLightColor(2);
   Z_pt_VbbHcc_18->Range(0,0,1,1);
   Z_pt_VbbHcc_18->SetFillColor(0);
   Z_pt_VbbHcc_18->SetFillStyle(4000);
   Z_pt_VbbHcc_18->SetBorderMode(0);
   Z_pt_VbbHcc_18->SetBorderSize(2);
   Z_pt_VbbHcc_18->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-36262.4,1562.903,3.622614e+07);
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
   st->SetMaximum(3.104753e+07);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(3.25999e+07);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetLabelSize(0.035);
   st_stack_11->GetXaxis()->SetTitleSize(0.035);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetLabelSize(0.035);
   st_stack_11->GetZaxis()->SetTitleSize(0.035);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,58601.99);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,111983);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,69596.8);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,29698.22);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,13388.05);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,6595.544);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,3469.156);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,1953.081);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,1189.348);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,737.1632);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,483.722);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,294.7841);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,207.6185);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,158.1717);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,107.7822);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,72.74418);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,48.21284);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,38.12812);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(19,30.38425);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(20,19.96329);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(21,13.36241);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(22,8.835258);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(23,10.12197);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(24,4.399004);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(25,4.849862);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(26,2.559208);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(27,2.635566);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(28,1.538652);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(29,1.338532);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(30,1.272141);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(31,2.156099);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(32,0.2047242);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(33,1.801446);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(34,0.5341146);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(35,0.3007676);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(38,0.1954691);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(41,0.6393256);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,106.5928);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,149.2577);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,123.4356);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,81.07123);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,58.20791);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,40.64105);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,30.90309);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,23.03191);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,18.45973);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,14.33488);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,17.29945);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,8.767596);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,7.607722);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,6.646394);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,6.368712);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,4.61641);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,3.653852);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,3.282413);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(19,3.023907);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(20,2.488021);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(21,2.005156);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(22,1.59894);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(23,1.787288);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(24,1.119943);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(25,1.192691);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(26,0.8758944);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(27,0.8533803);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(28,0.6504914);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(29,0.6085197);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(30,0.5566643);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(31,0.791866);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(32,0.2047242);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(33,0.7444675);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(34,0.3815406);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(35,0.3007676);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(38,0.2585085);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(41,0.4620277);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3753295);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,923321.2);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1743410);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,1138260);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,353266.2);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,121927);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,51094.21);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,24320.25);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,12823.69);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,7256.683);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,4389.265);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,2809.957);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,1846.975);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,1231.995);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,837.53);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,588.9226);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,412.6301);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,297.1143);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,209.551);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,156.3677);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(20,112.135);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,82.16907);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(22,59.65189);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,45.30953);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(24,30.32275);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(25,22.22018);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,16.20548);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(27,13.0113);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(28,8.12293);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(29,6.739096);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(30,6.309573);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(31,3.313547);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(32,3.241674);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(33,3.214898);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(34,1.351419);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(35,1.627844);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(36,1.09858);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(37,0.9703859);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(38,0.3944451);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(39,0.3891343);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(40,0.7319744);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(41,1.03602);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,279.056);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,382.6001);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,309.0708);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,172.0172);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,101.3608);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,65.23702);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,45.22301);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,32.56927);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,24.39244);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,18.81432);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,15.80206);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,12.39547);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,10.11777);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,8.431934);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,6.894044);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,6.545346);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,5.446968);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,4.127428);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,3.908603);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(20,3.095751);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,2.649902);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(22,2.288683);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,2.049313);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(24,1.541621);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(25,1.29259);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,1.10334);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(27,1.03496);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(28,0.8029346);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(29,0.7299434);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(30,0.712635);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(31,0.5209416);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(32,0.5321124);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(33,0.5010624);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(34,0.3087184);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(35,0.3537599);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(36,0.2894757);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(37,0.2724774);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(38,0.1793071);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(39,0.1691649);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(40,0.2401356);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(41,0.28352);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(6.525334e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_3 = new TH1D("VbbHcc_tags_Z_pt_stack_3","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(1,8670.993);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(2,19686.01);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(3,20729.18);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(4,14228.44);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(5,6107.74);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(6,1312.13);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(7,95.93159);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(8,5.286143);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(9,0.4588168);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(1,71.66187);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(2,113.1666);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(3,120.46);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(4,95.2977);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(5,61.82132);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(6,27.8825);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(7,7.264623);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(8,1.785585);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(9,0.4588168);
   VbbHcc_tags_Z_pt_stack_3->SetEntries(129105);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_4 = new TH1D("VbbHcc_tags_Z_pt_stack_4","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(1,4569.681);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(2,11573.04);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(3,12029.54);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(4,8300.584);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(5,3691.52);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(6,971.8706);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(7,89.94502);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(8,14.91064);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(9,2.337341);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(1,108.8887);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(2,177.087);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(3,177.2139);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(4,147.5362);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(5,102.3594);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(6,61.7647);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(7,15.12746);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(8,6.120986);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(9,2.337341);
   VbbHcc_tags_Z_pt_stack_4->SetEntries(17149);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_5 = new TH1D("VbbHcc_tags_Z_pt_stack_5","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(1,320.7745);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(2,504.4104);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(3,231.3524);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(4,107.1376);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(5,63.57254);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(6,28.57417);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(7,17.10057);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(8,13.24489);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(9,8.173839);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(10,5.711111);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(11,2.445083);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(12,1.827375);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(13,1.535285);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(14,1.275396);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(15,0.2727504);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(16,0.7089254);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(18,1.118847);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(19,0.4808949);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(20,0.8117483);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(21,0.4804647);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(22,0.3664998);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(24,0.3562396);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(25,0.396108);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(28,0.3586122);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(35,0.3336772);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(1,11.16269);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(2,14.30177);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(3,9.426284);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(4,6.407233);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(5,5.071977);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(6,3.267978);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(7,2.508947);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(8,2.257642);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(9,1.769045);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(10,1.482593);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(11,0.9735199);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(12,0.8316208);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(13,0.7713112);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(14,0.640676);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(15,0.2727504);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(16,0.5013203);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(18,0.6466299);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(19,0.4808949);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(20,0.5748585);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(21,0.4804647);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(22,0.3664998);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(24,0.3562396);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(25,0.396108);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(28,0.3586122);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(35,0.3336772);
   VbbHcc_tags_Z_pt_stack_5->SetEntries(3629);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_6 = new TH1D("VbbHcc_tags_Z_pt_stack_6","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(1,622.3403);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(2,799.3682);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(3,507.3928);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(4,251.9389);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(5,140.4257);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(6,69.50045);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(7,44.03244);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(8,27.26224);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(9,13.43751);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(10,7.118844);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(11,1.476609);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(12,2.030858);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(13,1.549024);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(14,0.5108984);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(15,1.081719);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(16,0.4598301);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(18,0.4688475);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(19,0.3036839);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(22,0.2183893);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(23,0.2588144);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(1,12.88834);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(2,14.1069);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(3,11.37664);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(4,8.187705);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(5,5.951233);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(6,4.10993);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(7,3.274624);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(8,2.601148);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(9,1.837637);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(10,1.280822);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(11,0.5582642);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(12,0.6802098);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(13,0.6425248);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(14,0.3629522);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(15,0.4848719);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(16,0.3255573);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(18,0.3333149);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(19,0.3036839);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(22,0.2183893);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(23,0.2588144);
   VbbHcc_tags_Z_pt_stack_6->SetEntries(10826);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_7 = new TH1D("VbbHcc_tags_Z_pt_stack_7","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(1,716.4228);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(2,831.3565);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(3,436.7803);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(4,192.0785);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(5,102.9665);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(6,50.92309);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(7,31.95535);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(8,19.18106);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(9,8.91694);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(10,4.040874);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(11,1.701944);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(12,1.681239);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(13,1.00377);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(14,0.7155276);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(15,0.3006179);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(16,0.8675684);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(18,0.2263142);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(28,0.1706549);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(1,13.64345);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(2,17.45013);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(3,11.18701);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(4,7.200192);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(5,5.281503);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(6,3.526537);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(7,2.785471);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(8,2.196964);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(9,1.495955);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(10,0.967002);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(11,0.6560894);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(12,0.6902396);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(13,0.5062283);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(14,0.4138028);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(15,0.3006179);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(16,0.502482);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(18,0.2263142);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(28,0.1706549);
   VbbHcc_tags_Z_pt_stack_7->SetEntries(10313);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_8 = new TH1D("VbbHcc_tags_Z_pt_stack_8","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(1,180.518);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(2,278.5771);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(3,170.4537);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(4,87.91294);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(5,45.95654);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(6,25.01602);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(7,14.7229);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(8,8.529351);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(9,5.024508);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(10,2.582127);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(11,1.355347);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(12,0.8005072);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(13,0.4758969);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(14,0.196395);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(15,0.133577);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(16,0.1151432);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(17,0.07210666);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(18,0.04006521);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(19,0.02933092);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(20,0.01329856);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(21,0.02453301);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(22,0.01423551);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(23,0.01236051);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(25,0.003334215);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(27,0.006923721);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(28,0.008779893);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(29,0.003348055);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(33,0.005476742);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(34,0.002028083);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(37,0.002971343);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(40,0.001892769);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(41,0.002142527);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(1,0.7563565);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(2,0.9276134);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(3,0.7185173);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(4,0.5241668);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(5,0.4024736);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(6,0.2913354);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(7,0.2556983);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(8,0.1557138);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(9,0.1271015);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(10,0.1350452);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(11,0.06480993);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(12,0.05340786);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(13,0.03649299);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(14,0.02300469);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(15,0.01844986);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(16,0.01760061);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(17,0.013731);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(18,0.01024771);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(19,0.008945505);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(20,0.006006185);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(21,0.007639006);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(22,0.005901898);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(23,0.006222364);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(25,0.003334215);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(27,0.004116725);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(28,0.005103338);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(29,0.003348055);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(33,0.003963258);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(34,0.002028083);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(37,0.002971343);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(40,0.001892769);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(41,0.002142527);
   VbbHcc_tags_Z_pt_stack_8->SetEntries(326928);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_9 = new TH1D("VbbHcc_tags_Z_pt_stack_9","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(1,24.39212);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(2,54.69379);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(3,56.82035);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(4,38.3836);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(5,21.72451);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(6,12.1383);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(7,7.203248);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(8,4.291933);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(9,2.649885);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(10,1.671101);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(11,1.088838);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(12,0.6958441);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(13,0.4398658);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(14,0.2947651);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(15,0.2082011);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(16,0.1620775);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(17,0.100641);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(18,0.08121872);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(19,0.05979563);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(20,0.0585324);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(21,0.04080736);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(22,0.0268855);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(23,0.02263394);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(24,0.02246646);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(25,0.01802502);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(26,0.009604963);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(27,0.01118458);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(28,0.003955894);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(29,0.007320102);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(30,0.003878888);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(31,0.001643161);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(32,0.003165133);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(33,0.003120422);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(34,0.004174055);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(36,0.001255671);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(37,0.0003004933);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(39,0.001273268);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(41,0.001978741);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(1,0.1248393);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(2,0.1868881);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(3,0.1904719);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(4,0.1564115);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(5,0.1174735);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(6,0.08780454);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(7,0.06760745);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(8,0.05212885);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(9,0.04096281);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(10,0.03256847);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(11,0.02626541);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(12,0.02102242);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(13,0.01673096);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(14,0.01367263);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(15,0.0114944);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(16,0.01017853);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(17,0.008022902);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(18,0.007210998);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(19,0.006169657);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(20,0.006120758);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(21,0.005037342);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(22,0.004139457);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(23,0.003769414);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(24,0.003768015);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(25,0.003392084);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(26,0.002468989);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(27,0.002717615);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(28,0.001616752);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(29,0.002122208);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(30,0.00158712);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(31,0.0009777514);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(32,0.001417147);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(33,0.001397408);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(34,0.001597712);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(36,0.0008882961);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(37,0.0003004933);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(39,0.0009004491);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(41,0.0011448);
   VbbHcc_tags_Z_pt_stack_9->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_10 = new TH1D("VbbHcc_tags_Z_pt_stack_10","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(1,2.680119);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(2,4.732438);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(3,3.012468);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(4,1.414396);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(5,0.6774152);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(6,0.3788009);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(7,0.1791111);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(8,0.1108242);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(9,0.06087776);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(10,0.02839044);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(11,0.01765863);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(12,0.00355944);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(13,0.01239158);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(14,0.003940972);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(16,0.003020277);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(21,0.002353708);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(1,0.08492903);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(2,0.1122177);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(3,0.08944928);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(4,0.06271164);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(5,0.04164818);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(6,0.0310689);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(7,0.02150917);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(8,0.01672895);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(9,0.01304427);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(10,0.008361833);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(11,0.006763664);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(12,0.002613715);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(13,0.005544154);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(14,0.002884122);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(16,0.003020277);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(21,0.002353708);
   VbbHcc_tags_Z_pt_stack_10->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_11 = new TH1D("VbbHcc_tags_Z_pt_stack_11","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(1,8576.116);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(2,22169.29);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(3,25641.51);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(4,15299.1);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(5,7847.466);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(6,3869.992);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(7,2074.358);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(8,1295.622);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(9,629.264);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(10,366.9796);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(11,264.3129);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(12,237.4412);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(13,85.29585);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(14,68.43437);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(15,24.31469);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(16,29.63656);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(17,16.84871);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(18,29.81856);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(19,3.933459);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(20,9.175609);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(21,17.72399);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(23,8.167892);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(25,6.945887);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(33,6.662534);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(1,244.4152);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(2,395.3263);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(3,427.0177);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(4,326.2369);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(5,233.7323);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(6,163.4533);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(7,120.3481);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(8,98.27344);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(9,67.63343);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(10,51.10322);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(11,43.09999);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(12,40.75487);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(13,25.92145);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(14,22.25497);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(15,12.68287);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(16,13.57165);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(17,9.673352);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(18,14.04583);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(19,3.933459);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(20,9.175609);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(21,12.5406);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(23,6.505911);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(25,6.945887);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(33,6.662534);
   VbbHcc_tags_Z_pt_stack_11->SetEntries(14113);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_11,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_pt__21 = new TH1D("VbbHcc_tags_Z_pt__21","",40,0,2000);
   VbbHcc_tags_Z_pt__21->SetBinContent(1,7249849);
   VbbHcc_tags_Z_pt__21->SetBinContent(2,1.397139e+07);
   VbbHcc_tags_Z_pt__21->SetBinContent(3,5319881);
   VbbHcc_tags_Z_pt__21->SetBinContent(4,367221.3);
   VbbHcc_tags_Z_pt__21->SetBinContent(5,23063.03);
   VbbHcc_tags_Z_pt__21->SetBinContent(6,9944.931);
   VbbHcc_tags_Z_pt__21->SetBinContent(7,2496.999);
   VbbHcc_tags_Z_pt__21->SetBinError(1,133997.7);
   VbbHcc_tags_Z_pt__21->SetBinError(2,188604.5);
   VbbHcc_tags_Z_pt__21->SetBinError(3,100371.4);
   VbbHcc_tags_Z_pt__21->SetBinError(4,27015.25);
   VbbHcc_tags_Z_pt__21->SetBinError(5,6178.434);
   VbbHcc_tags_Z_pt__21->SetBinError(6,4239.76);
   VbbHcc_tags_Z_pt__21->SetBinError(7,1765.645);
   VbbHcc_tags_Z_pt__21->SetEntries(16133);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt__21->SetLineColor(ci);
   VbbHcc_tags_Z_pt__21->SetLineWidth(2);
   VbbHcc_tags_Z_pt__21->SetMarkerStyle(20);
   VbbHcc_tags_Z_pt__21->SetMarkerSize(1.2);
   VbbHcc_tags_Z_pt__21->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt__21->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__21->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__21->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__21->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__21->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__21->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__21->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__21->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt__21->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__21->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__21->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__21->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__21->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__21->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_pt_fx1021[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fy1021[40] = {
   1005607,
   1911294,
   1267663,
   421471.4,
   153337.1,
   64030.27,
   30164.83,
   16165.21,
   9116.355,
   5514.561,
   3566.078,
   2386.24,
   1529.926,
   1067.133,
   723.0163,
   517.3274,
   362.3486,
   279.433,
   191.5591,
   142.1574,
   113.8036,
   69.11316,
   63.8932,
   35.10046,
   34.4334,
   18.77429,
   15.66497,
   10.20358,
   8.088296,
   7.585593,
   5.471289,
   3.449563,
   11.68747,
   1.891735,
   2.262289,
   1.099835,
   0.9736578,
   0.5899142,
   0.3904075,
   0.7338671};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fex1021[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fey1021[40] = {
   407.9739,
   608.1275,
   582.5501,
   416.6555,
   287.5439,
   193.0206,
   133.3801,
   106.3309,
   74.32678,
   56.35424,
   49.07423,
   43.5099,
   28.86925,
   24.72387,
   15.79062,
   15.77823,
   11.68735,
   15.02251,
   6.341679,
   10.0148,
   12.9823,
   2.824314,
   7.056061,
   1.938502,
   7.176042,
   1.408743,
   1.341426,
   1.107067,
   0.9503311,
   0.9042822,
   0.947857,
   0.5701382,
   6.722698,
   0.4908024,
   0.5717934,
   0.2894771,
   0.2724937,
   0.3146072,
   0.1691673,
   0.2401431};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_pt_fx1021,Graph_from_VbbHcc_tags_Z_pt_fy1021,Graph_from_VbbHcc_tags_Z_pt_fex1021,Graph_from_VbbHcc_tags_Z_pt_fey1021);
   gre->SetName("Graph_from_VbbHcc_tags_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_pt1021 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_pt1021","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->SetMinimum(0.1991162);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->SetMaximum(2103092);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_pt1021);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt","QCD","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_11","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_10","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_9","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_8","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_7","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_6","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_5","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_4","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_3","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_pt","MC unc. (stat.)","fl");

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
   Z_pt_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",40,0,2000);
   data_mc_ratio__22->SetBinContent(1,7.209425);
   data_mc_ratio__22->SetBinContent(2,7.30991);
   data_mc_ratio__22->SetBinContent(3,4.196605);
   data_mc_ratio__22->SetBinContent(4,0.8712841);
   data_mc_ratio__22->SetBinContent(5,0.1504074);
   data_mc_ratio__22->SetBinContent(6,0.1553161);
   data_mc_ratio__22->SetBinContent(7,0.08277849);
   data_mc_ratio__22->SetBinError(1,0.1332506);
   data_mc_ratio__22->SetBinError(2,0.09867895);
   data_mc_ratio__22->SetBinError(3,0.0791783);
   data_mc_ratio__22->SetBinError(4,0.06409748);
   data_mc_ratio__22->SetBinError(5,0.04029315);
   data_mc_ratio__22->SetBinError(6,0.06621493);
   data_mc_ratio__22->SetBinError(7,0.05853323);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(8431.884);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(7,30);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1022[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1022[40] = {
   0.0004056991,
   0.0003181758,
   0.0004595464,
   0.0009885736,
   0.001875241,
   0.003014521,
   0.004421707,
   0.006577762,
   0.008153125,
   0.01021917,
   0.0137614,
   0.01823367,
   0.01886971,
   0.0231685,
   0.02183993,
   0.03049951,
   0.03225443,
   0.05376068,
   0.03310559,
   0.07044867,
   0.1140764,
   0.04086506,
   0.1104352,
   0.05522724,
   0.2084035,
   0.07503573,
   0.08563221,
   0.1084979,
   0.1174946,
   0.1192105,
   0.173242,
   0.1652784,
   0.5752053,
   0.2594456,
   0.2527499,
   0.2632003,
   0.279866,
   0.53331,
   0.4333094,
   0.3272296};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0.3097536);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(1.690246);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->SetSelected(Z_pt_VbbHcc_18);
}
