#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_all_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_all/nC_medium_jets_all_all
//=========  (Tue Dec  6 15:26:16 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_all = new TCanvas("nC_medium_jets_all_all", "nC_medium_jets_all_all",0,0,600,600);
   nC_medium_jets_all_all->SetHighLightColor(2);
   nC_medium_jets_all_all->Range(-2.683529,4.795837,11.21633,14.22342);
   nC_medium_jets_all_all->SetFillColor(0);
   nC_medium_jets_all_all->SetFillStyle(4000);
   nC_medium_jets_all_all->SetBorderMode(0);
   nC_medium_jets_all_all->SetBorderSize(2);
   nC_medium_jets_all_all->SetLogy();
   nC_medium_jets_all_all->SetLeftMargin(0.15709);
   nC_medium_jets_all_all->SetRightMargin(0.1234783);
   nC_medium_jets_all_all->SetBottomMargin(0.12);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(3540639);
   st->SetMaximum(8.388703e+12);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",10,-0.5,9.5);
   st_stack_48->SetMinimum(845564.9);
   st_stack_48->SetMaximum(1.908365e+13);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_48->GetXaxis()->SetRange(1,10);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/1.0");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(1,6.290862e+10);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(2,8.381932e+10);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(3,5.431977e+10);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(4,2.367821e+10);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(5,8.091198e+09);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(6,2.362467e+09);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(7,6.239627e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(8,1.523393e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(9,3.519258e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(10,7833324);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(11,2113435);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(1,1.079718e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(2,1.221435e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(3,9635806);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(4,6225084);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(5,3573000);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(6,1898306);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(7,962006.9);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(8,469661.1);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(9,224496.8);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(10,104382.1);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(11,53978.16);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetEntries(1.542251e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(1,8042468);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(2,1.375129e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(3,1.134046e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(4,6140882);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(5,2516502);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(6,851452.6);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(7,251810.7);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(8,67636.64);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(9,16696.17);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(10,3969.494);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(11,1169.128);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(1,1025.457);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(2,1386.024);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(3,1303.42);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(4,986.6254);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(5,646.5394);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(6,381.1939);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(7,209.8134);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(8,108.8584);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(9,53.72808);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(10,26.1925);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(11,14.1338);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetEntries(6.217747e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_3 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(1,1.229924e+07);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(2,2.93445e+07);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(3,3.332177e+07);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(4,2.418058e+07);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(5,1.276534e+07);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(6,5315020);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(7,1853159);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(8,565028.3);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(9,155918.2);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(10,39935.58);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinContent(11,12584.36);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(1,950.4563);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(2,1493.153);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(3,1608.377);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(4,1376.856);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(5,1000.499);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(6,643.0715);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(7,377.8196);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(8,207.2521);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(9,108.1108);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(10,54.30679);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetBinError(11,30.22746);
   VbbHcc_jets_all_nC_medium_all_stack_3->SetEntries(1.878746e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nC_medium_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_4 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(1,2309629);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(2,4861573);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(3,4809444);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(4,3001144);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(5,1361485);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(6,494538.7);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(7,153768.5);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(8,42582.15);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(9,10918.02);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(10,2585.4);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinContent(11,775.303);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(1,1131.737);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(2,1610.458);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(3,1581.774);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(4,1230.631);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(5,816.496);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(6,483.3907);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(7,266.8979);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(8,138.3662);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(9,69.50949);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(10,33.0979);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetBinError(11,17.80692);
   VbbHcc_jets_all_nC_medium_all_stack_4->SetEntries(3.985608e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nC_medium_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_5 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(1,4817722);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(2,1.151341e+07);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(3,1.201583e+07);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(4,7607158);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(5,3451705);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(6,1245954);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(7,383487.4);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(8,105262.3);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(9,26809.33);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(10,6651.612);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinContent(11,1899.473);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(1,3239.612);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(2,4928.168);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(3,4953.991);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(4,3883.327);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(5,2550.289);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(6,1508.321);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(7,816.8202);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(8,420.8028);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(9,207.9449);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(10,101.9629);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetBinError(11,52.77294);
   VbbHcc_jets_all_nC_medium_all_stack_5->SetEntries(2.697091e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nC_medium_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_6 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(1,2785374);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(2,3921152);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(3,2750073);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(4,1279577);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(5,457155.4);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(6,137699.6);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(7,37041.7);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(8,9202.981);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(9,2211.646);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(10,516.4016);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinContent(11,143.5942);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(1,896.2478);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(2,1054.02);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(3,874.7326);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(4,590.1207);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(5,348.9079);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(6,189.8809);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(7,98.41765);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(8,48.23546);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(9,23.43961);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(10,11.20829);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetBinError(11,5.750077);
   VbbHcc_jets_all_nC_medium_all_stack_6->SetEntries(6.001887e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nC_medium_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_7 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(1,1033171);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(2,1395221);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(3,975822.4);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(4,461801.6);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(5,167862.9);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(6,51542.42);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(7,14051.26);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(8,3550.936);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(9,845.5091);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(10,196.5573);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinContent(11,53.76685);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(1,491.968);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(2,564.2619);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(3,467.1597);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(4,316.7915);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(5,187.7151);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(6,102.886);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(7,52.58182);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(8,25.99638);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(9,12.50721);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(10,5.868205);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetBinError(11,3.00888);
   VbbHcc_jets_all_nC_medium_all_stack_7->SetEntries(2.788188e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nC_medium_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_8 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(1,476993.2);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(2,607055.4);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(3,420915.4);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(4,199393.8);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(5,73179.57);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(6,22418.19);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(7,6149.621);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(8,1604.664);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(9,385.9673);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(10,76.97053);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinContent(11,24.86335);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(1,404.5345);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(2,451.9647);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(3,375.2035);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(4,258.4076);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(5,155.7212);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(6,86.08268);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(7,45.47123);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(8,23.46311);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(9,11.73118);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(10,5.035713);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetBinError(11,2.936137);
   VbbHcc_jets_all_nC_medium_all_stack_8->SetEntries(6488151);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nC_medium_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_9 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(1,9458.277);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(2,17159.54);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(3,14807.08);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(4,8170.005);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(5,3355.109);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(6,1132.002);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(7,334.9917);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(8,90.28196);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(9,23.29803);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(10,5.574696);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinContent(11,1.722999);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(1,5.041616);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(2,6.650272);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(3,6.055777);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(4,4.409012);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(5,2.772522);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(6,1.581005);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(7,0.8439069);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(8,0.4334854);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(9,0.216488);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(10,0.1045137);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetBinError(11,0.05739108);
   VbbHcc_jets_all_nC_medium_all_stack_9->SetEntries(2.909576e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nC_medium_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_10 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(1,1068.737);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(2,2152.571);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(3,2027.672);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(4,1194.067);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(5,506.4385);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(6,170.3176);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(7,49.59153);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(8,13.43873);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(9,3.360303);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(10,0.8176116);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinContent(11,0.2937093);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(1,0.7456297);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(2,1.055082);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(3,1.020642);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(4,0.7801112);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(5,0.5056114);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(6,0.2915059);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(7,0.1561958);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(8,0.08070504);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(9,0.03998748);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(10,0.01948754);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetBinError(11,0.01162859);
   VbbHcc_jets_all_nC_medium_all_stack_10->SetEntries(1.49329e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nC_medium_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_11 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(1,363.821);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(2,832.059);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(3,760.974);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(4,349.1944);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(5,89.67888);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(6,13.25826);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(7,1.240842);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(8,0.1101028);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(9,0.006680496);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinContent(10,0.003080716);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(1,0.8898781);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(2,1.346547);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(3,1.294667);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(4,0.880617);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(5,0.4495825);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(6,0.1732476);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(7,0.05161339);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(8,0.01403559);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(9,0.002833002);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetBinError(10,0.002179075);
   VbbHcc_jets_all_nC_medium_all_stack_11->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_12 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(1,805823.1);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(2,2294851);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(3,2418356);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(4,1221793);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(5,324394.4);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(6,40184.76);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(7,1784.067);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(8,25.98288);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinContent(9,5.23763);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(1,2137.443);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(2,3622.454);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(3,3728.751);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(4,2648.136);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(5,1368.629);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(6,479.225);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(7,100.7549);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(8,13.23042);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetBinError(9,5.23763);
   VbbHcc_jets_all_nC_medium_all_stack_12->SetEntries(1455030);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_all->Modified();
   nC_medium_jets_all_all->cd();
   nC_medium_jets_all_all->SetSelected(nC_medium_jets_all_all);
}
