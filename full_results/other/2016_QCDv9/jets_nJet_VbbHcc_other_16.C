void jets_nJet_VbbHcc_other_16()
{
//=========Macro generated from canvas: jets_nJet_VbbHcc_other_16/jets_nJet_VbbHcc_other_16
//=========  (Tue Nov 22 09:30:36 2022) by ROOT version 6.14/09
   TCanvas *jets_nJet_VbbHcc_other_16 = new TCanvas("jets_nJet_VbbHcc_other_16", "jets_nJet_VbbHcc_other_16",0,0,600,600);
   jets_nJet_VbbHcc_other_16->SetHighLightColor(2);
   jets_nJet_VbbHcc_other_16->Range(0,0,1,1);
   jets_nJet_VbbHcc_other_16->SetFillColor(0);
   jets_nJet_VbbHcc_other_16->SetFillStyle(4000);
   jets_nJet_VbbHcc_other_16->SetBorderMode(0);
   jets_nJet_VbbHcc_other_16->SetBorderSize(2);
   jets_nJet_VbbHcc_other_16->SetFrameFillStyle(1000);
   jets_nJet_VbbHcc_other_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.645156,-6.653297e+07,14.23387,6.646644e+10);
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
   st->SetMaximum(5.69649e+10);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",14,-0.5,13.5);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(5.981314e+10);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetRange(1,14);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetLabelSize(0.035);
   st_stack_5->GetXaxis()->SetTitleSize(0.035);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/1.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetLabelSize(0.035);
   st_stack_5->GetZaxis()->SetTitleSize(0.035);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,9.763777e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,8.960132e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,2.56241e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.737469e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,4.918016e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,7.117054e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,7.954183e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,7908746);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,718844.8);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,54013.92);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,5057.748);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,1173.17);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1129246);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,3472228);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5955237);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,4913597);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,2613594);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,992413.2);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,331126.6);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,104133.6);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,31314.87);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,8503.271);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,2547.548);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,1173.17);
   VbbHcc_jets_nJet_stack_1->SetEntries(4.327968e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,504828.6);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,1933924);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,3086811);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,2721781);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,1531343);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,632223.4);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,218271.2);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,65676.36);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,17595.75);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,4282.043);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1006.539);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,235.0475);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,47.56073);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,10.66634);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,2.667052);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,193.2237);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,397.5227);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,536.6865);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,553.5628);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,465.676);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,332.1875);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,205.1285);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,114.4361);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,59.31565);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,28.97971);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,13.76232);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,6.558693);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.808727);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.403858);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.5751996);
   VbbHcc_jets_nJet_stack_2->SetEntries(1.860522e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   
   TH1D *VbbHcc_jets_nJet_stack_3 = new TH1D("VbbHcc_jets_nJet_stack_3","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(1,172151.6);
   VbbHcc_jets_nJet_stack_3->SetBinContent(2,1166932);
   VbbHcc_jets_nJet_stack_3->SetBinContent(3,3617932);
   VbbHcc_jets_nJet_stack_3->SetBinContent(4,6494122);
   VbbHcc_jets_nJet_stack_3->SetBinContent(5,7536556);
   VbbHcc_jets_nJet_stack_3->SetBinContent(6,5863957);
   VbbHcc_jets_nJet_stack_3->SetBinContent(7,3170002);
   VbbHcc_jets_nJet_stack_3->SetBinContent(8,1267108);
   VbbHcc_jets_nJet_stack_3->SetBinContent(9,418316.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(10,120754.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(11,31456.77);
   VbbHcc_jets_nJet_stack_3->SetBinContent(12,7721.038);
   VbbHcc_jets_nJet_stack_3->SetBinContent(13,1743.529);
   VbbHcc_jets_nJet_stack_3->SetBinContent(14,379.2586);
   VbbHcc_jets_nJet_stack_3->SetBinContent(15,95.02217);
   VbbHcc_jets_nJet_stack_3->SetBinError(1,91.47545);
   VbbHcc_jets_nJet_stack_3->SetBinError(2,240.6115);
   VbbHcc_jets_nJet_stack_3->SetBinError(3,435.6796);
   VbbHcc_jets_nJet_stack_3->SetBinError(4,606.8064);
   VbbHcc_jets_nJet_stack_3->SetBinError(5,679.8675);
   VbbHcc_jets_nJet_stack_3->SetBinError(6,617.9474);
   VbbHcc_jets_nJet_stack_3->SetBinError(7,461.4463);
   VbbHcc_jets_nJet_stack_3->SetBinError(8,293.6128);
   VbbHcc_jets_nJet_stack_3->SetBinError(9,169.2179);
   VbbHcc_jets_nJet_stack_3->SetBinError(10,91.04292);
   VbbHcc_jets_nJet_stack_3->SetBinError(11,46.48048);
   VbbHcc_jets_nJet_stack_3->SetBinError(12,23.03035);
   VbbHcc_jets_nJet_stack_3->SetBinError(13,10.93223);
   VbbHcc_jets_nJet_stack_3->SetBinError(14,5.105359);
   VbbHcc_jets_nJet_stack_3->SetBinError(15,2.549325);
   VbbHcc_jets_nJet_stack_3->SetEntries(5.294007e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nJet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_3->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_3,"");
   
   TH1D *VbbHcc_jets_nJet_stack_4 = new TH1D("VbbHcc_jets_nJet_stack_4","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_4->SetBinContent(1,7279.023);
   VbbHcc_jets_nJet_stack_4->SetBinContent(2,100411.4);
   VbbHcc_jets_nJet_stack_4->SetBinContent(3,592163.6);
   VbbHcc_jets_nJet_stack_4->SetBinContent(4,1347370);
   VbbHcc_jets_nJet_stack_4->SetBinContent(5,1258998);
   VbbHcc_jets_nJet_stack_4->SetBinContent(6,648397.6);
   VbbHcc_jets_nJet_stack_4->SetBinContent(7,213601.2);
   VbbHcc_jets_nJet_stack_4->SetBinContent(8,48305.48);
   VbbHcc_jets_nJet_stack_4->SetBinContent(9,8646.964);
   VbbHcc_jets_nJet_stack_4->SetBinContent(10,1297.656);
   VbbHcc_jets_nJet_stack_4->SetBinContent(11,181.6373);
   VbbHcc_jets_nJet_stack_4->SetBinContent(12,22.67501);
   VbbHcc_jets_nJet_stack_4->SetBinContent(13,3.44496);
   VbbHcc_jets_nJet_stack_4->SetBinContent(15,0.2981117);
   VbbHcc_jets_nJet_stack_4->SetBinError(1,41.0783);
   VbbHcc_jets_nJet_stack_4->SetBinError(2,161.7336);
   VbbHcc_jets_nJet_stack_4->SetBinError(3,412.4982);
   VbbHcc_jets_nJet_stack_4->SetBinError(4,631.5756);
   VbbHcc_jets_nJet_stack_4->SetBinError(5,612.9656);
   VbbHcc_jets_nJet_stack_4->SetBinError(6,440.4478);
   VbbHcc_jets_nJet_stack_4->SetBinError(7,252.8357);
   VbbHcc_jets_nJet_stack_4->SetBinError(8,120.1442);
   VbbHcc_jets_nJet_stack_4->SetBinError(9,50.77448);
   VbbHcc_jets_nJet_stack_4->SetBinError(10,19.61901);
   VbbHcc_jets_nJet_stack_4->SetBinError(11,7.357365);
   VbbHcc_jets_nJet_stack_4->SetBinError(12,2.595803);
   VbbHcc_jets_nJet_stack_4->SetBinError(13,0.9792591);
   VbbHcc_jets_nJet_stack_4->SetBinError(15,0.2981117);
   VbbHcc_jets_nJet_stack_4->SetEntries(1.46368e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nJet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_4->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_4,"");
   
   TH1D *VbbHcc_jets_nJet_stack_5 = new TH1D("VbbHcc_jets_nJet_stack_5","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_5->SetBinContent(1,18860.86);
   VbbHcc_jets_nJet_stack_5->SetBinContent(2,264083.5);
   VbbHcc_jets_nJet_stack_5->SetBinContent(3,1452842);
   VbbHcc_jets_nJet_stack_5->SetBinContent(4,3291995);
   VbbHcc_jets_nJet_stack_5->SetBinContent(5,3051631);
   VbbHcc_jets_nJet_stack_5->SetBinContent(6,1512947);
   VbbHcc_jets_nJet_stack_5->SetBinContent(7,470765.4);
   VbbHcc_jets_nJet_stack_5->SetBinContent(8,110494.6);
   VbbHcc_jets_nJet_stack_5->SetBinContent(9,21113.77);
   VbbHcc_jets_nJet_stack_5->SetBinContent(10,3470.738);
   VbbHcc_jets_nJet_stack_5->SetBinContent(11,513.4801);
   VbbHcc_jets_nJet_stack_5->SetBinContent(12,63.00525);
   VbbHcc_jets_nJet_stack_5->SetBinContent(13,9.618012);
   VbbHcc_jets_nJet_stack_5->SetBinContent(14,1.075938);
   VbbHcc_jets_nJet_stack_5->SetBinError(1,126.6594);
   VbbHcc_jets_nJet_stack_5->SetBinError(2,502.9908);
   VbbHcc_jets_nJet_stack_5->SetBinError(3,1238.209);
   VbbHcc_jets_nJet_stack_5->SetBinError(4,1894.832);
   VbbHcc_jets_nJet_stack_5->SetBinError(5,1832.717);
   VbbHcc_jets_nJet_stack_5->SetBinError(6,1291.99);
   VbbHcc_jets_nJet_stack_5->SetBinError(7,720.5145);
   VbbHcc_jets_nJet_stack_5->SetBinError(8,348.801);
   VbbHcc_jets_nJet_stack_5->SetBinError(9,152.2532);
   VbbHcc_jets_nJet_stack_5->SetBinError(10,61.60708);
   VbbHcc_jets_nJet_stack_5->SetBinError(11,23.66976);
   VbbHcc_jets_nJet_stack_5->SetBinError(12,8.304819);
   VbbHcc_jets_nJet_stack_5->SetBinError(13,3.233312);
   VbbHcc_jets_nJet_stack_5->SetBinError(14,1.075938);
   VbbHcc_jets_nJet_stack_5->SetEntries(9601782);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nJet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_5->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_5,"");
   
   TH1D *VbbHcc_jets_nJet_stack_6 = new TH1D("VbbHcc_jets_nJet_stack_6","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_6->SetBinContent(1,553959.1);
   VbbHcc_jets_nJet_stack_6->SetBinContent(2,852505.6);
   VbbHcc_jets_nJet_stack_6->SetBinContent(3,780842.8);
   VbbHcc_jets_nJet_stack_6->SetBinContent(4,433440);
   VbbHcc_jets_nJet_stack_6->SetBinContent(5,165209.9);
   VbbHcc_jets_nJet_stack_6->SetBinContent(6,42997.4);
   VbbHcc_jets_nJet_stack_6->SetBinContent(7,9500.199);
   VbbHcc_jets_nJet_stack_6->SetBinContent(8,1936.74);
   VbbHcc_jets_nJet_stack_6->SetBinContent(9,348.2734);
   VbbHcc_jets_nJet_stack_6->SetBinContent(10,60.78535);
   VbbHcc_jets_nJet_stack_6->SetBinContent(11,11.72523);
   VbbHcc_jets_nJet_stack_6->SetBinContent(12,1.662291);
   VbbHcc_jets_nJet_stack_6->SetBinContent(13,0.5238663);
   VbbHcc_jets_nJet_stack_6->SetBinError(1,226.1499);
   VbbHcc_jets_nJet_stack_6->SetBinError(2,280.6828);
   VbbHcc_jets_nJet_stack_6->SetBinError(3,268.8682);
   VbbHcc_jets_nJet_stack_6->SetBinError(4,200.3846);
   VbbHcc_jets_nJet_stack_6->SetBinError(5,123.6789);
   VbbHcc_jets_nJet_stack_6->SetBinError(6,63.01898);
   VbbHcc_jets_nJet_stack_6->SetBinError(7,29.58143);
   VbbHcc_jets_nJet_stack_6->SetBinError(8,13.33346);
   VbbHcc_jets_nJet_stack_6->SetBinError(9,5.650073);
   VbbHcc_jets_nJet_stack_6->SetBinError(10,2.354699);
   VbbHcc_jets_nJet_stack_6->SetBinError(11,1.036715);
   VbbHcc_jets_nJet_stack_6->SetBinError(12,0.3939441);
   VbbHcc_jets_nJet_stack_6->SetBinError(13,0.2154567);
   VbbHcc_jets_nJet_stack_6->SetEntries(3.120324e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nJet_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_6->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_6,"");
   
   TH1D *VbbHcc_jets_nJet_stack_7 = new TH1D("VbbHcc_jets_nJet_stack_7","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_7->SetBinContent(1,183473);
   VbbHcc_jets_nJet_stack_7->SetBinContent(2,299445.4);
   VbbHcc_jets_nJet_stack_7->SetBinContent(3,284667.8);
   VbbHcc_jets_nJet_stack_7->SetBinContent(4,164384.1);
   VbbHcc_jets_nJet_stack_7->SetBinContent(5,68388.6);
   VbbHcc_jets_nJet_stack_7->SetBinContent(6,18860.14);
   VbbHcc_jets_nJet_stack_7->SetBinContent(7,4317.057);
   VbbHcc_jets_nJet_stack_7->SetBinContent(8,901.5412);
   VbbHcc_jets_nJet_stack_7->SetBinContent(9,167.0116);
   VbbHcc_jets_nJet_stack_7->SetBinContent(10,30.15684);
   VbbHcc_jets_nJet_stack_7->SetBinContent(11,5.105227);
   VbbHcc_jets_nJet_stack_7->SetBinContent(12,0.6238067);
   VbbHcc_jets_nJet_stack_7->SetBinContent(13,0.06287276);
   VbbHcc_jets_nJet_stack_7->SetBinError(1,112.2131);
   VbbHcc_jets_nJet_stack_7->SetBinError(2,143.3153);
   VbbHcc_jets_nJet_stack_7->SetBinError(3,139.7548);
   VbbHcc_jets_nJet_stack_7->SetBinError(4,106.1961);
   VbbHcc_jets_nJet_stack_7->SetBinError(5,68.48514);
   VbbHcc_jets_nJet_stack_7->SetBinError(6,35.92397);
   VbbHcc_jets_nJet_stack_7->SetBinError(7,17.16623);
   VbbHcc_jets_nJet_stack_7->SetBinError(8,7.838898);
   VbbHcc_jets_nJet_stack_7->SetBinError(9,3.370168);
   VbbHcc_jets_nJet_stack_7->SetBinError(10,1.428058);
   VbbHcc_jets_nJet_stack_7->SetBinError(11,0.5897145);
   VbbHcc_jets_nJet_stack_7->SetBinError(12,0.2082171);
   VbbHcc_jets_nJet_stack_7->SetBinError(13,0.06287276);
   VbbHcc_jets_nJet_stack_7->SetEntries(1.517316e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nJet_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_7->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_7,"");
   
   TH1D *VbbHcc_jets_nJet_stack_8 = new TH1D("VbbHcc_jets_nJet_stack_8","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_8->SetBinContent(1,83958.79);
   VbbHcc_jets_nJet_stack_8->SetBinContent(2,119380.3);
   VbbHcc_jets_nJet_stack_8->SetBinContent(3,124816);
   VbbHcc_jets_nJet_stack_8->SetBinContent(4,78130.48);
   VbbHcc_jets_nJet_stack_8->SetBinContent(5,33939.68);
   VbbHcc_jets_nJet_stack_8->SetBinContent(6,8843.216);
   VbbHcc_jets_nJet_stack_8->SetBinContent(7,1948.62);
   VbbHcc_jets_nJet_stack_8->SetBinContent(8,381.7087);
   VbbHcc_jets_nJet_stack_8->SetBinContent(9,72.83058);
   VbbHcc_jets_nJet_stack_8->SetBinContent(10,14.93177);
   VbbHcc_jets_nJet_stack_8->SetBinContent(11,1.56832);
   VbbHcc_jets_nJet_stack_8->SetBinError(1,127.4302);
   VbbHcc_jets_nJet_stack_8->SetBinError(2,151.8106);
   VbbHcc_jets_nJet_stack_8->SetBinError(3,155.3676);
   VbbHcc_jets_nJet_stack_8->SetBinError(4,122.9592);
   VbbHcc_jets_nJet_stack_8->SetBinError(5,81.04586);
   VbbHcc_jets_nJet_stack_8->SetBinError(6,41.32652);
   VbbHcc_jets_nJet_stack_8->SetBinError(7,19.36137);
   VbbHcc_jets_nJet_stack_8->SetBinError(8,8.565279);
   VbbHcc_jets_nJet_stack_8->SetBinError(9,3.739538);
   VbbHcc_jets_nJet_stack_8->SetBinError(10,1.677087);
   VbbHcc_jets_nJet_stack_8->SetBinError(11,0.5550955);
   VbbHcc_jets_nJet_stack_8->SetEntries(2372132);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nJet_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_8->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_8,"");
   
   TH1D *VbbHcc_jets_nJet_stack_9 = new TH1D("VbbHcc_jets_nJet_stack_9","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_9->SetBinContent(1,604.7735);
   VbbHcc_jets_nJet_stack_9->SetBinContent(2,1510.125);
   VbbHcc_jets_nJet_stack_9->SetBinContent(3,3149.107);
   VbbHcc_jets_nJet_stack_9->SetBinContent(4,4024.614);
   VbbHcc_jets_nJet_stack_9->SetBinContent(5,2802.024);
   VbbHcc_jets_nJet_stack_9->SetBinContent(6,1038.36);
   VbbHcc_jets_nJet_stack_9->SetBinContent(7,330.7831);
   VbbHcc_jets_nJet_stack_9->SetBinContent(8,97.70744);
   VbbHcc_jets_nJet_stack_9->SetBinContent(9,27.15246);
   VbbHcc_jets_nJet_stack_9->SetBinContent(10,7.304096);
   VbbHcc_jets_nJet_stack_9->SetBinContent(11,1.76887);
   VbbHcc_jets_nJet_stack_9->SetBinContent(12,0.4198219);
   VbbHcc_jets_nJet_stack_9->SetBinContent(13,0.1004536);
   VbbHcc_jets_nJet_stack_9->SetBinContent(14,0.02593842);
   VbbHcc_jets_nJet_stack_9->SetBinContent(15,0.007175442);
   VbbHcc_jets_nJet_stack_9->SetBinError(1,1.023394);
   VbbHcc_jets_nJet_stack_9->SetBinError(2,1.571102);
   VbbHcc_jets_nJet_stack_9->SetBinError(3,2.234089);
   VbbHcc_jets_nJet_stack_9->SetBinError(4,2.505202);
   VbbHcc_jets_nJet_stack_9->SetBinError(5,2.072979);
   VbbHcc_jets_nJet_stack_9->SetBinError(6,1.244084);
   VbbHcc_jets_nJet_stack_9->SetBinError(7,0.6989385);
   VbbHcc_jets_nJet_stack_9->SetBinError(8,0.3790027);
   VbbHcc_jets_nJet_stack_9->SetBinError(9,0.1994018);
   VbbHcc_jets_nJet_stack_9->SetBinError(10,0.1032758);
   VbbHcc_jets_nJet_stack_9->SetBinError(11,0.05073044);
   VbbHcc_jets_nJet_stack_9->SetBinError(12,0.02458904);
   VbbHcc_jets_nJet_stack_9->SetBinError(13,0.01207136);
   VbbHcc_jets_nJet_stack_9->SetBinError(14,0.006121433);
   VbbHcc_jets_nJet_stack_9->SetBinError(15,0.003209997);
   VbbHcc_jets_nJet_stack_9->SetEntries(9965780);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nJet_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_9->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_9,"");
   
   TH1D *VbbHcc_jets_nJet_stack_10 = new TH1D("VbbHcc_jets_nJet_stack_10","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_10->SetBinContent(1,4.512067);
   VbbHcc_jets_nJet_stack_10->SetBinContent(2,38.84643);
   VbbHcc_jets_nJet_stack_10->SetBinContent(3,194.2545);
   VbbHcc_jets_nJet_stack_10->SetBinContent(4,475.8605);
   VbbHcc_jets_nJet_stack_10->SetBinContent(5,587.4149);
   VbbHcc_jets_nJet_stack_10->SetBinContent(6,364.2109);
   VbbHcc_jets_nJet_stack_10->SetBinContent(7,149.4856);
   VbbHcc_jets_nJet_stack_10->SetBinContent(8,48.12396);
   VbbHcc_jets_nJet_stack_10->SetBinContent(9,13.1352);
   VbbHcc_jets_nJet_stack_10->SetBinContent(10,3.223157);
   VbbHcc_jets_nJet_stack_10->SetBinContent(11,0.7407026);
   VbbHcc_jets_nJet_stack_10->SetBinContent(12,0.1624807);
   VbbHcc_jets_nJet_stack_10->SetBinContent(13,0.03019377);
   VbbHcc_jets_nJet_stack_10->SetBinContent(14,0.007867071);
   VbbHcc_jets_nJet_stack_10->SetBinContent(15,0.0007427483);
   VbbHcc_jets_nJet_stack_10->SetBinError(1,0.04099158);
   VbbHcc_jets_nJet_stack_10->SetBinError(2,0.1207277);
   VbbHcc_jets_nJet_stack_10->SetBinError(3,0.2723352);
   VbbHcc_jets_nJet_stack_10->SetBinError(4,0.4277961);
   VbbHcc_jets_nJet_stack_10->SetBinError(5,0.4757123);
   VbbHcc_jets_nJet_stack_10->SetBinError(6,0.3743203);
   VbbHcc_jets_nJet_stack_10->SetBinError(7,0.2395502);
   VbbHcc_jets_nJet_stack_10->SetBinError(8,0.1357406);
   VbbHcc_jets_nJet_stack_10->SetBinError(9,0.07083308);
   VbbHcc_jets_nJet_stack_10->SetBinError(10,0.03504133);
   VbbHcc_jets_nJet_stack_10->SetBinError(11,0.0168038);
   VbbHcc_jets_nJet_stack_10->SetBinError(12,0.00783517);
   VbbHcc_jets_nJet_stack_10->SetBinError(13,0.003362063);
   VbbHcc_jets_nJet_stack_10->SetBinError(14,0.001716218);
   VbbHcc_jets_nJet_stack_10->SetBinError(15,0.0005252069);
   VbbHcc_jets_nJet_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nJet_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_10->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_10,"");
   
   TH1D *VbbHcc_jets_nJet_stack_11 = new TH1D("VbbHcc_jets_nJet_stack_11","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_11->SetBinContent(1,25.4626);
   VbbHcc_jets_nJet_stack_11->SetBinContent(2,64.24017);
   VbbHcc_jets_nJet_stack_11->SetBinContent(3,134.8637);
   VbbHcc_jets_nJet_stack_11->SetBinContent(4,184.9998);
   VbbHcc_jets_nJet_stack_11->SetBinContent(5,137.4272);
   VbbHcc_jets_nJet_stack_11->SetBinContent(6,54.18153);
   VbbHcc_jets_nJet_stack_11->SetBinContent(7,18.19511);
   VbbHcc_jets_nJet_stack_11->SetBinContent(8,5.62821);
   VbbHcc_jets_nJet_stack_11->SetBinContent(9,1.734415);
   VbbHcc_jets_nJet_stack_11->SetBinContent(10,0.4639795);
   VbbHcc_jets_nJet_stack_11->SetBinContent(11,0.1479277);
   VbbHcc_jets_nJet_stack_11->SetBinContent(12,0.02703688);
   VbbHcc_jets_nJet_stack_11->SetBinContent(13,0.003064927);
   VbbHcc_jets_nJet_stack_11->SetBinContent(14,0.001184486);
   VbbHcc_jets_nJet_stack_11->SetBinContent(15,0.001119176);
   VbbHcc_jets_nJet_stack_11->SetBinError(1,0.214807);
   VbbHcc_jets_nJet_stack_11->SetBinError(2,0.3292635);
   VbbHcc_jets_nJet_stack_11->SetBinError(3,0.4697389);
   VbbHcc_jets_nJet_stack_11->SetBinError(4,0.5455739);
   VbbHcc_jets_nJet_stack_11->SetBinError(5,0.4661794);
   VbbHcc_jets_nJet_stack_11->SetBinError(6,0.2885331);
   VbbHcc_jets_nJet_stack_11->SetBinError(7,0.1663702);
   VbbHcc_jets_nJet_stack_11->SetBinError(8,0.09229104);
   VbbHcc_jets_nJet_stack_11->SetBinError(9,0.05099997);
   VbbHcc_jets_nJet_stack_11->SetBinError(10,0.02650995);
   VbbHcc_jets_nJet_stack_11->SetBinError(11,0.01492094);
   VbbHcc_jets_nJet_stack_11->SetBinError(12,0.006372383);
   VbbHcc_jets_nJet_stack_11->SetBinError(13,0.002168155);
   VbbHcc_jets_nJet_stack_11->SetBinError(14,0.001184486);
   VbbHcc_jets_nJet_stack_11->SetBinError(15,0.001119176);
   VbbHcc_jets_nJet_stack_11->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_11->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_11,"");
   
   TH1D *VbbHcc_jets_nJet_stack_12 = new TH1D("VbbHcc_jets_nJet_stack_12","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_12->SetBinContent(1,3766.004);
   VbbHcc_jets_nJet_stack_12->SetBinContent(2,31577.24);
   VbbHcc_jets_nJet_stack_12->SetBinContent(3,159576.1);
   VbbHcc_jets_nJet_stack_12->SetBinContent(4,418640.9);
   VbbHcc_jets_nJet_stack_12->SetBinContent(5,566375.2);
   VbbHcc_jets_nJet_stack_12->SetBinContent(6,390633.5);
   VbbHcc_jets_nJet_stack_12->SetBinContent(7,182844.5);
   VbbHcc_jets_nJet_stack_12->SetBinContent(8,67533.31);
   VbbHcc_jets_nJet_stack_12->SetBinContent(9,20519.01);
   VbbHcc_jets_nJet_stack_12->SetBinContent(10,5774.997);
   VbbHcc_jets_nJet_stack_12->SetBinContent(11,1549.381);
   VbbHcc_jets_nJet_stack_12->SetBinContent(12,351.923);
   VbbHcc_jets_nJet_stack_12->SetBinContent(13,93.22546);
   VbbHcc_jets_nJet_stack_12->SetBinContent(14,21.58963);
   VbbHcc_jets_nJet_stack_12->SetBinContent(15,4.025055);
   VbbHcc_jets_nJet_stack_12->SetBinError(1,120.7574);
   VbbHcc_jets_nJet_stack_12->SetBinError(2,352.2583);
   VbbHcc_jets_nJet_stack_12->SetBinError(3,799.0088);
   VbbHcc_jets_nJet_stack_12->SetBinError(4,1299.853);
   VbbHcc_jets_nJet_stack_12->SetBinError(5,1514.443);
   VbbHcc_jets_nJet_stack_12->SetBinError(6,1256.841);
   VbbHcc_jets_nJet_stack_12->SetBinError(7,858.7536);
   VbbHcc_jets_nJet_stack_12->SetBinError(8,521.0543);
   VbbHcc_jets_nJet_stack_12->SetBinError(9,287.0877);
   VbbHcc_jets_nJet_stack_12->SetBinError(10,152.2315);
   VbbHcc_jets_nJet_stack_12->SetBinError(11,78.76666);
   VbbHcc_jets_nJet_stack_12->SetBinError(12,37.46996);
   VbbHcc_jets_nJet_stack_12->SetBinError(13,19.19563);
   VbbHcc_jets_nJet_stack_12->SetBinError(14,9.341704);
   VbbHcc_jets_nJet_stack_12->SetBinError(15,4.025055);
   VbbHcc_jets_nJet_stack_12->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_12->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_jets_nJet__9 = new TH1D("VbbHcc_jets_nJet__9","",14,-0.5,13.5);
   VbbHcc_jets_nJet__9->SetBinContent(1,1.937518e+07);
   VbbHcc_jets_nJet__9->SetBinContent(2,5.193082e+07);
   VbbHcc_jets_nJet__9->SetBinContent(3,1.130512e+08);
   VbbHcc_jets_nJet__9->SetBinContent(4,1.122558e+08);
   VbbHcc_jets_nJet__9->SetBinContent(5,8.82118e+07);
   VbbHcc_jets_nJet__9->SetBinContent(6,6.679439e+07);
   VbbHcc_jets_nJet__9->SetBinContent(7,6.026566e+07);
   VbbHcc_jets_nJet__9->SetBinContent(8,2.652934e+07);
   VbbHcc_jets_nJet__9->SetBinContent(9,8367625);
   VbbHcc_jets_nJet__9->SetBinContent(10,2225228);
   VbbHcc_jets_nJet__9->SetBinContent(11,539197);
   VbbHcc_jets_nJet__9->SetBinContent(12,124247);
   VbbHcc_jets_nJet__9->SetBinContent(13,28240);
   VbbHcc_jets_nJet__9->SetBinContent(14,6209);
   VbbHcc_jets_nJet__9->SetBinContent(15,1840);
   VbbHcc_jets_nJet__9->SetEntries(5.497068e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet__9->SetLineColor(ci);
   VbbHcc_jets_nJet__9->SetLineWidth(2);
   VbbHcc_jets_nJet__9->SetMarkerStyle(20);
   VbbHcc_jets_nJet__9->SetMarkerSize(1.2);
   VbbHcc_jets_nJet__9->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__9->Draw("same E");
   
   Double_t Graph_from_VbbHcc_jets_nJet_fx1009[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_VbbHcc_jets_nJet_fy1009[14] = {
   9.779066e+08,
   8.964902e+09,
   2.56342e+10,
   1.738965e+10,
   4.932232e+09,
   7.208257e+08,
   8.381358e+07,
   9471235,
   1205667,
   189710.7,
   39786.61,
   9569.754,
   1898.099,
   412.6255};
   Double_t Graph_from_VbbHcc_jets_nJet_fex1009[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_jets_nJet_fey1009[14] = {
   1129246,
   3472228,
   5955237,
   4913598,
   2613595,
   992415.2,
   331129,
   104136,
   31317.11,
   8505.416,
   2549.347,
   1174.045,
   22.52418,
   10.79169};
   TGraphErrors *gre = new TGraphErrors(14,Graph_from_VbbHcc_jets_nJet_fx1009,Graph_from_VbbHcc_jets_nJet_fy1009,Graph_from_VbbHcc_jets_nJet_fex1009,Graph_from_VbbHcc_jets_nJet_fey1009);
   gre->SetName("Graph_from_VbbHcc_jets_nJet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_jets_nJet1009 = new TH1F("Graph_Graph_from_VbbHcc_jets_nJet1009","",100,-1.9,14.9);
   Graph_Graph_from_VbbHcc_jets_nJet1009->SetMinimum(361.6504);
   Graph_Graph_from_VbbHcc_jets_nJet1009->SetMaximum(2.820417e+10);
   Graph_Graph_from_VbbHcc_jets_nJet1009->SetDirectory(0);
   Graph_Graph_from_VbbHcc_jets_nJet1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_jets_nJet1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_jets_nJet1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_jets_nJet","MC unc. (stat.)","fl");

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
   jets_nJet_VbbHcc_other_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.645156,-0.2774193,14.23387,1.658065);
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
   
   TH1D *data_mc_ratio__10 = new TH1D("data_mc_ratio__10","",14,-0.5,13.5);
   data_mc_ratio__10->SetBinContent(1,0.01981292);
   data_mc_ratio__10->SetBinContent(2,0.005792682);
   data_mc_ratio__10->SetBinContent(3,0.004410169);
   data_mc_ratio__10->SetBinContent(4,0.006455327);
   data_mc_ratio__10->SetBinContent(5,0.01788476);
   data_mc_ratio__10->SetBinContent(6,0.09266372);
   data_mc_ratio__10->SetBinContent(7,0.7190441);
   data_mc_ratio__10->SetBinContent(8,2.801043);
   data_mc_ratio__10->SetBinContent(9,6.940246);
   data_mc_ratio__10->SetBinContent(10,11.72958);
   data_mc_ratio__10->SetBinContent(11,13.55222);
   data_mc_ratio__10->SetBinContent(12,12.9833);
   data_mc_ratio__10->SetBinContent(13,14.87805);
   data_mc_ratio__10->SetBinContent(14,15.04754);
   data_mc_ratio__10->SetBinContent(15,18.03543);
   data_mc_ratio__10->SetBinError(1,4.501171e-06);
   data_mc_ratio__10->SetBinError(2,8.038353e-07);
   data_mc_ratio__10->SetBinError(3,4.147799e-07);
   data_mc_ratio__10->SetBinError(4,6.092755e-07);
   data_mc_ratio__10->SetBinError(5,1.904232e-06);
   data_mc_ratio__10->SetBinError(6,1.133809e-05);
   data_mc_ratio__10->SetBinError(7,9.262337e-05);
   data_mc_ratio__10->SetBinError(8,0.0005438218);
   data_mc_ratio__10->SetBinError(9,0.00239924);
   data_mc_ratio__10->SetBinError(10,0.007863128);
   data_mc_ratio__10->SetBinError(11,0.01845596);
   data_mc_ratio__10->SetBinError(12,0.03683343);
   data_mc_ratio__10->SetBinError(13,0.08853471);
   data_mc_ratio__10->SetBinError(14,0.1909655);
   data_mc_ratio__10->SetBinError(15,0.9483195);
   data_mc_ratio__10->SetMinimum(0.4);
   data_mc_ratio__10->SetMaximum(1.6);
   data_mc_ratio__10->SetEntries(1619.793);
   data_mc_ratio__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__10->SetLineColor(ci);
   data_mc_ratio__10->SetLineWidth(2);
   data_mc_ratio__10->SetMarkerStyle(20);
   data_mc_ratio__10->SetMarkerSize(1.2);
   data_mc_ratio__10->GetXaxis()->SetTitle("Jet multiplicity");
   data_mc_ratio__10->GetXaxis()->SetRange(1,14);
   data_mc_ratio__10->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__10->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__10->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__10->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__10->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__10->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_mc_statistical_error_fy1010[14] = {
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1010[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1010[14] = {
   0.001154759,
   0.0003873136,
   0.0002323161,
   0.0002825588,
   0.000529901,
   0.001376776,
   0.003950779,
   0.01099498,
   0.02597492,
   0.04483361,
   0.06407549,
   0.1226828,
   0.0118667,
   0.02615372};
   gre = new TGraphErrors(14,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,-1.9,14.9);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.8527806);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(1.147219);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(-0.5,1,13.5,1);
   line->Draw();
   bottomPad->Modified();
   jets_nJet_VbbHcc_other_16->cd();
   jets_nJet_VbbHcc_other_16->Modified();
   jets_nJet_VbbHcc_other_16->cd();
   jets_nJet_VbbHcc_other_16->SetSelected(jets_nJet_VbbHcc_other_16);
}
