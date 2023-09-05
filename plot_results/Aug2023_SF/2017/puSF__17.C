#ifdef __CLING__
#pragma cling optimize(0)
#endif
void puSF__17()
{
//=========Macro generated from canvas: puSF__17/puSF__17
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *puSF__17 = new TCanvas("puSF__17", "puSF__17",0,0,600,600);
   puSF__17->SetHighLightColor(2);
   puSF__17->Range(0,0,1,1);
   puSF__17->SetFillColor(0);
   puSF__17->SetFillStyle(4000);
   puSF__17->SetBorderMode(0);
   puSF__17->SetBorderSize(2);
   puSF__17->SetFrameFillStyle(1000);
   puSF__17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-8.125725e+08,2.209678,8.117599e+11);
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
   st->SetMaximum(7.305027e+11);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",500,-5,5);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(7.305027e+11);
   st_stack_5->SetDirectory(nullptr);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->SetLineWidth(0);
   st_stack_5->GetXaxis()->SetRange(151,350);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/0.02");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *puSF_stack_1 = new TH1D("puSF_stack_1","",500,-5,5);
   puSF_stack_1->SetBinContent(251,1.007284e+08);
   puSF_stack_1->SetBinContent(252,4.70687e+08);
   puSF_stack_1->SetBinContent(253,4.109064e+08);
   puSF_stack_1->SetBinContent(254,6.755045e+08);
   puSF_stack_1->SetBinContent(255,1.091781e+09);
   puSF_stack_1->SetBinContent(256,206570.6);
   puSF_stack_1->SetBinContent(257,1.758471e+09);
   puSF_stack_1->SetBinContent(259,334296.3);
   puSF_stack_1->SetBinContent(260,2.669275e+09);
   puSF_stack_1->SetBinContent(262,516310.8);
   puSF_stack_1->SetBinContent(265,3.87615e+09);
   puSF_stack_1->SetBinContent(266,765554.9);
   puSF_stack_1->SetBinContent(268,3495.743);
   puSF_stack_1->SetBinContent(271,5.429165e+09);
   puSF_stack_1->SetBinContent(275,644312.6);
   puSF_stack_1->SetBinContent(276,1523675);
   puSF_stack_1->SetBinContent(279,7.398293e+09);
   puSF_stack_1->SetBinContent(281,4.077196e+08);
   puSF_stack_1->SetBinContent(286,2717043);
   puSF_stack_1->SetBinContent(288,5.38179e+10);
   puSF_stack_1->SetBinContent(290,4.518754e+10);
   puSF_stack_1->SetBinContent(292,2.662946e+10);
   puSF_stack_1->SetBinContent(293,2.080043e+10);
   puSF_stack_1->SetBinContent(294,2.925829e+10);
   puSF_stack_1->SetBinContent(295,2163074);
   puSF_stack_1->SetBinContent(296,3.220635e+10);
   puSF_stack_1->SetBinContent(298,3.403729e+10);
   puSF_stack_1->SetBinContent(299,3.535651e+10);
   puSF_stack_1->SetBinContent(300,5421077);
   puSF_stack_1->SetBinContent(302,3.855084e+10);
   puSF_stack_1->SetBinContent(303,1.360915e+10);
   puSF_stack_1->SetBinContent(304,2.793885e+10);
   puSF_stack_1->SetBinContent(305,2.281817e+10);
   puSF_stack_1->SetBinContent(306,4.164243e+10);
   puSF_stack_1->SetBinContent(307,2.359669e+10);
   puSF_stack_1->SetBinContent(308,1.585062e+10);
   puSF_stack_1->SetBinContent(309,7.97134e+10);
   puSF_stack_1->SetBinContent(310,3.312847e+10);
   puSF_stack_1->SetBinContent(311,3.680367e+10);
   puSF_stack_1->SetBinContent(312,8.650064e+10);
   puSF_stack_1->SetBinContent(313,7.239953e+10);
   puSF_stack_1->SetBinContent(314,3.286478e+11);
   puSF_stack_1->SetBinContent(315,1.940913e+08);
   puSF_stack_1->SetBinContent(317,2.392288e+10);
   puSF_stack_1->SetBinContent(322,2.481306e+10);
   puSF_stack_1->SetBinContent(324,2.320361e+10);
   puSF_stack_1->SetBinContent(325,2.973632e+10);
   puSF_stack_1->SetBinContent(327,2.452645e+10);
   puSF_stack_1->SetBinContent(332,1.504444e+08);
   puSF_stack_1->SetBinContent(379,9.209735e+07);
   puSF_stack_1->SetBinContent(420,1.10495e+08);
   puSF_stack_1->SetBinContent(444,4.379089e+07);
   puSF_stack_1->SetBinError(251,1192057);
   puSF_stack_1->SetBinError(252,2575540);
   puSF_stack_1->SetBinError(253,2406843);
   puSF_stack_1->SetBinError(254,3085782);
   puSF_stack_1->SetBinError(255,3923086);
   puSF_stack_1->SetBinError(256,1157.339);
   puSF_stack_1->SetBinError(257,4978542);
   puSF_stack_1->SetBinError(259,1471.839);
   puSF_stack_1->SetBinError(260,6134414);
   puSF_stack_1->SetBinError(262,1829.226);
   puSF_stack_1->SetBinError(265,7392165);
   puSF_stack_1->SetBinError(266,2228.177);
   puSF_stack_1->SetBinError(268,149.9952);
   puSF_stack_1->SetBinError(271,8746110);
   puSF_stack_1->SetBinError(275,2043.583);
   puSF_stack_1->SetBinError(276,3141.967);
   puSF_stack_1->SetBinError(279,1.021308e+07);
   puSF_stack_1->SetBinError(281,2391680);
   puSF_stack_1->SetBinError(286,4196.192);
   puSF_stack_1->SetBinError(288,2.754347e+07);
   puSF_stack_1->SetBinError(290,2.523885e+07);
   puSF_stack_1->SetBinError(292,1.937348e+07);
   puSF_stack_1->SetBinError(293,1.712351e+07);
   puSF_stack_1->SetBinError(294,2.030864e+07);
   puSF_stack_1->SetBinError(295,3743.898);
   puSF_stack_1->SetBinError(296,2.130503e+07);
   puSF_stack_1->SetBinError(298,2.190463e+07);
   puSF_stack_1->SetBinError(299,2.232371e+07);
   puSF_stack_1->SetBinError(300,5926.156);
   puSF_stack_1->SetBinError(302,2.331233e+07);
   puSF_stack_1->SetBinError(303,1.380207e+07);
   puSF_stack_1->SetBinError(304,1.983084e+07);
   puSF_stack_1->SetBinError(305,1.791079e+07);
   puSF_stack_1->SetBinError(306,2.422576e+07);
   puSF_stack_1->SetBinError(307,1.823565e+07);
   puSF_stack_1->SetBinError(308,1.493832e+07);
   puSF_stack_1->SetBinError(309,3.351843e+07);
   puSF_stack_1->SetBinError(310,2.159879e+07);
   puSF_stack_1->SetBinError(311,2.27685e+07);
   puSF_stack_1->SetBinError(312,3.491835e+07);
   puSF_stack_1->SetBinError(313,3.194587e+07);
   puSF_stack_1->SetBinError(314,6.806487e+07);
   puSF_stack_1->SetBinError(315,1654490);
   puSF_stack_1->SetBinError(317,1.836429e+07);
   puSF_stack_1->SetBinError(322,1.87034e+07);
   puSF_stack_1->SetBinError(324,1.808467e+07);
   puSF_stack_1->SetBinError(325,2.047382e+07);
   puSF_stack_1->SetBinError(327,1.859508e+07);
   puSF_stack_1->SetBinError(332,1455431);
   puSF_stack_1->SetBinError(379,1138685);
   puSF_stack_1->SetBinError(420,1247156);
   puSF_stack_1->SetBinError(444,785881.6);
   puSF_stack_1->SetEntries(3.106442e+08);

   ci = TColor::GetColor("#ff6600");
   puSF_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_1->SetLineColor(ci);
   puSF_stack_1->GetXaxis()->SetRange(1,500);
   puSF_stack_1->GetXaxis()->SetLabelFont(42);
   puSF_stack_1->GetXaxis()->SetTitleOffset(1);
   puSF_stack_1->GetXaxis()->SetTitleFont(42);
   puSF_stack_1->GetYaxis()->SetLabelFont(42);
   puSF_stack_1->GetYaxis()->SetTitleFont(42);
   puSF_stack_1->GetZaxis()->SetLabelFont(42);
   puSF_stack_1->GetZaxis()->SetTitleOffset(1);
   puSF_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_1,"");
   
   TH1D *puSF_stack_2 = new TH1D("puSF_stack_2","",500,-5,5);
   puSF_stack_2->SetBinContent(251,1027.779);
   puSF_stack_2->SetBinContent(252,4726.371);
   puSF_stack_2->SetBinContent(253,4107.461);
   puSF_stack_2->SetBinContent(254,6790.217);
   puSF_stack_2->SetBinContent(255,10932.89);
   puSF_stack_2->SetBinContent(257,17679.88);
   puSF_stack_2->SetBinContent(260,26921.4);
   puSF_stack_2->SetBinContent(265,38849.4);
   puSF_stack_2->SetBinContent(271,54714.07);
   puSF_stack_2->SetBinContent(279,74380.39);
   puSF_stack_2->SetBinContent(281,4074.818);
   puSF_stack_2->SetBinContent(288,541773.6);
   puSF_stack_2->SetBinContent(290,454738.4);
   puSF_stack_2->SetBinContent(292,268103.1);
   puSF_stack_2->SetBinContent(293,209175.8);
   puSF_stack_2->SetBinContent(294,294384.3);
   puSF_stack_2->SetBinContent(296,324311.2);
   puSF_stack_2->SetBinContent(298,342810.1);
   puSF_stack_2->SetBinContent(299,355611.9);
   puSF_stack_2->SetBinContent(302,387515.1);
   puSF_stack_2->SetBinContent(303,136079.9);
   puSF_stack_2->SetBinContent(304,281080.1);
   puSF_stack_2->SetBinContent(305,228996.1);
   puSF_stack_2->SetBinContent(306,419382.9);
   puSF_stack_2->SetBinContent(307,237370.2);
   puSF_stack_2->SetBinContent(308,159480);
   puSF_stack_2->SetBinContent(309,802713.7);
   puSF_stack_2->SetBinContent(310,333234.4);
   puSF_stack_2->SetBinContent(311,370206.9);
   puSF_stack_2->SetBinContent(312,871059.4);
   puSF_stack_2->SetBinContent(313,729135);
   puSF_stack_2->SetBinContent(314,3309151);
   puSF_stack_2->SetBinContent(315,1954.268);
   puSF_stack_2->SetBinContent(317,240744.6);
   puSF_stack_2->SetBinContent(322,249730.5);
   puSF_stack_2->SetBinContent(324,233783.7);
   puSF_stack_2->SetBinContent(325,299684.5);
   puSF_stack_2->SetBinContent(327,246587.8);
   puSF_stack_2->SetBinContent(332,1541.337);
   puSF_stack_2->SetBinContent(379,929.7458);
   puSF_stack_2->SetBinContent(420,1137.474);
   puSF_stack_2->SetBinContent(444,448.1728);
   puSF_stack_2->SetBinError(251,10.17097);
   puSF_stack_2->SetBinError(252,21.63629);
   puSF_stack_2->SetBinError(253,20.23813);
   puSF_stack_2->SetBinError(254,26.10419);
   puSF_stack_2->SetBinError(255,32.92772);
   puSF_stack_2->SetBinError(257,42.10004);
   puSF_stack_2->SetBinError(260,51.83755);
   puSF_stack_2->SetBinError(265,62.19158);
   puSF_stack_2->SetBinError(271,74.01549);
   puSF_stack_2->SetBinError(279,86.35876);
   puSF_stack_2->SetBinError(281,20.24477);
   puSF_stack_2->SetBinError(288,232.7929);
   puSF_stack_2->SetBinError(290,213.4067);
   puSF_stack_2->SetBinError(292,163.7824);
   puSF_stack_2->SetBinError(293,144.6405);
   puSF_stack_2->SetBinError(294,171.5637);
   puSF_stack_2->SetBinError(296,180.1686);
   puSF_stack_2->SetBinError(298,185.3595);
   puSF_stack_2->SetBinError(299,188.6364);
   puSF_stack_2->SetBinError(302,196.8495);
   puSF_stack_2->SetBinError(303,116.6553);
   puSF_stack_2->SetBinError(304,167.6563);
   puSF_stack_2->SetBinError(305,151.325);
   puSF_stack_2->SetBinError(306,204.8637);
   puSF_stack_2->SetBinError(307,154.0818);
   puSF_stack_2->SetBinError(308,126.3488);
   puSF_stack_2->SetBinError(309,283.4595);
   puSF_stack_2->SetBinError(310,182.5998);
   puSF_stack_2->SetBinError(311,192.4059);
   puSF_stack_2->SetBinError(312,295.2195);
   puSF_stack_2->SetBinError(313,270.0991);
   puSF_stack_2->SetBinError(314,575.3831);
   puSF_stack_2->SetBinError(315,14.01256);
   puSF_stack_2->SetBinError(317,155.1732);
   puSF_stack_2->SetBinError(322,158.1067);
   puSF_stack_2->SetBinError(324,152.9602);
   puSF_stack_2->SetBinError(325,173.2098);
   puSF_stack_2->SetBinError(327,157.0365);
   puSF_stack_2->SetBinError(332,12.46897);
   puSF_stack_2->SetBinError(379,9.720124);
   puSF_stack_2->SetBinError(420,10.67317);
   puSF_stack_2->SetBinError(444,6.716079);
   puSF_stack_2->SetEntries(2.05456e+08);

   ci = TColor::GetColor("#660066");
   puSF_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_2->SetLineColor(ci);
   puSF_stack_2->GetXaxis()->SetRange(1,500);
   puSF_stack_2->GetXaxis()->SetLabelFont(42);
   puSF_stack_2->GetXaxis()->SetTitleOffset(1);
   puSF_stack_2->GetXaxis()->SetTitleFont(42);
   puSF_stack_2->GetYaxis()->SetLabelFont(42);
   puSF_stack_2->GetYaxis()->SetTitleFont(42);
   puSF_stack_2->GetZaxis()->SetLabelFont(42);
   puSF_stack_2->GetZaxis()->SetTitleOffset(1);
   puSF_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_2,"");
   
   TH1D *puSF_stack_3 = new TH1D("puSF_stack_3","",500,-5,5);
   puSF_stack_3->SetBinContent(251,2785.37);
   puSF_stack_3->SetBinContent(252,13155.06);
   puSF_stack_3->SetBinContent(253,11388.22);
   puSF_stack_3->SetBinContent(254,18716.85);
   puSF_stack_3->SetBinContent(255,30575.5);
   puSF_stack_3->SetBinContent(257,49003.31);
   puSF_stack_3->SetBinContent(260,74697.52);
   puSF_stack_3->SetBinContent(265,107967.7);
   puSF_stack_3->SetBinContent(271,151874);
   puSF_stack_3->SetBinContent(279,206614.5);
   puSF_stack_3->SetBinContent(281,11259.22);
   puSF_stack_3->SetBinContent(288,1502263);
   puSF_stack_3->SetBinContent(290,1261098);
   puSF_stack_3->SetBinContent(292,743797.3);
   puSF_stack_3->SetBinContent(293,581138.6);
   puSF_stack_3->SetBinContent(294,817262.2);
   puSF_stack_3->SetBinContent(296,899457.4);
   puSF_stack_3->SetBinContent(298,951139.4);
   puSF_stack_3->SetBinContent(299,987847.7);
   puSF_stack_3->SetBinContent(302,1076976);
   puSF_stack_3->SetBinContent(303,377643);
   puSF_stack_3->SetBinContent(304,780415.2);
   puSF_stack_3->SetBinContent(305,635635.5);
   puSF_stack_3->SetBinContent(306,1163366);
   puSF_stack_3->SetBinContent(307,658839.4);
   puSF_stack_3->SetBinContent(308,442718.5);
   puSF_stack_3->SetBinContent(309,2227510);
   puSF_stack_3->SetBinContent(310,925380.7);
   puSF_stack_3->SetBinContent(311,1028348);
   puSF_stack_3->SetBinContent(312,2417436);
   puSF_stack_3->SetBinContent(313,2023839);
   puSF_stack_3->SetBinContent(314,9184496);
   puSF_stack_3->SetBinContent(315,5368.449);
   puSF_stack_3->SetBinContent(317,667822.5);
   puSF_stack_3->SetBinContent(322,692687.9);
   puSF_stack_3->SetBinContent(324,648665.5);
   puSF_stack_3->SetBinContent(325,831469.1);
   puSF_stack_3->SetBinContent(327,684073.4);
   puSF_stack_3->SetBinContent(332,4270.492);
   puSF_stack_3->SetBinContent(379,2624.914);
   puSF_stack_3->SetBinContent(420,3159.694);
   puSF_stack_3->SetBinContent(444,1240.064);
   puSF_stack_3->SetBinError(251,12.39811);
   puSF_stack_3->SetBinError(252,26.95271);
   puSF_stack_3->SetBinError(253,25.08516);
   puSF_stack_3->SetBinError(254,32.15331);
   puSF_stack_3->SetBinError(255,41.08642);
   puSF_stack_3->SetBinError(257,52.0259);
   puSF_stack_3->SetBinError(260,64.23106);
   puSF_stack_3->SetBinError(265,77.21532);
   puSF_stack_3->SetBinError(271,91.58213);
   puSF_stack_3->SetBinError(279,106.8068);
   puSF_stack_3->SetBinError(281,24.93464);
   puSF_stack_3->SetBinError(288,288.0507);
   puSF_stack_3->SetBinError(290,263.9147);
   puSF_stack_3->SetBinError(292,202.7002);
   puSF_stack_3->SetBinError(293,179.15);
   puSF_stack_3->SetBinError(294,212.459);
   puSF_stack_3->SetBinError(296,222.8826);
   puSF_stack_3->SetBinError(298,229.1955);
   puSF_stack_3->SetBinError(299,233.577);
   puSF_stack_3->SetBinError(302,243.8845);
   puSF_stack_3->SetBinError(303,144.4244);
   puSF_stack_3->SetBinError(304,207.6064);
   puSF_stack_3->SetBinError(305,187.3652);
   puSF_stack_3->SetBinError(306,253.477);
   puSF_stack_3->SetBinError(307,190.7451);
   puSF_stack_3->SetBinError(308,156.3654);
   puSF_stack_3->SetBinError(309,350.7258);
   puSF_stack_3->SetBinError(310,226.0791);
   puSF_stack_3->SetBinError(311,238.3214);
   puSF_stack_3->SetBinError(312,365.4014);
   puSF_stack_3->SetBinError(313,334.3449);
   puSF_stack_3->SetBinError(314,712.2216);
   puSF_stack_3->SetBinError(315,17.21098);
   puSF_stack_3->SetBinError(317,192.0538);
   puSF_stack_3->SetBinError(322,195.5796);
   puSF_stack_3->SetBinError(324,189.2723);
   puSF_stack_3->SetBinError(325,214.2928);
   puSF_stack_3->SetBinError(327,194.3742);
   puSF_stack_3->SetBinError(332,15.35529);
   puSF_stack_3->SetBinError(379,12.03825);
   puSF_stack_3->SetBinError(420,13.21034);
   puSF_stack_3->SetBinError(444,8.274356);
   puSF_stack_3->SetEntries(6.76188e+08);

   ci = TColor::GetColor("#cc00cc");
   puSF_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_3->SetLineColor(ci);
   puSF_stack_3->GetXaxis()->SetRange(1,500);
   puSF_stack_3->GetXaxis()->SetLabelFont(42);
   puSF_stack_3->GetXaxis()->SetTitleOffset(1);
   puSF_stack_3->GetXaxis()->SetTitleFont(42);
   puSF_stack_3->GetYaxis()->SetLabelFont(42);
   puSF_stack_3->GetYaxis()->SetTitleFont(42);
   puSF_stack_3->GetZaxis()->SetLabelFont(42);
   puSF_stack_3->GetZaxis()->SetTitleOffset(1);
   puSF_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_3,"");
   
   TH1D *puSF_stack_4 = new TH1D("puSF_stack_4","",500,-5,5);
   puSF_stack_4->SetBinContent(251,3982.824);
   puSF_stack_4->SetBinContent(252,18353.42);
   puSF_stack_4->SetBinContent(253,15551.83);
   puSF_stack_4->SetBinContent(254,25946.34);
   puSF_stack_4->SetBinContent(255,42080.28);
   puSF_stack_4->SetBinContent(257,67154.2);
   puSF_stack_4->SetBinContent(260,104137.9);
   puSF_stack_4->SetBinContent(265,148910.2);
   puSF_stack_4->SetBinContent(271,208254.8);
   puSF_stack_4->SetBinContent(279,283737.2);
   puSF_stack_4->SetBinContent(281,15307.61);
   puSF_stack_4->SetBinContent(288,2068809);
   puSF_stack_4->SetBinContent(290,1737983);
   puSF_stack_4->SetBinContent(292,1024829);
   puSF_stack_4->SetBinContent(293,798259);
   puSF_stack_4->SetBinContent(294,1126164);
   puSF_stack_4->SetBinContent(296,1239223);
   puSF_stack_4->SetBinContent(298,1310191);
   puSF_stack_4->SetBinContent(299,1359323);
   puSF_stack_4->SetBinContent(302,1484250);
   puSF_stack_4->SetBinContent(303,518269);
   puSF_stack_4->SetBinContent(304,1073401);
   puSF_stack_4->SetBinContent(305,875474.6);
   puSF_stack_4->SetBinContent(306,1597409);
   puSF_stack_4->SetBinContent(307,910169.6);
   puSF_stack_4->SetBinContent(308,610400.8);
   puSF_stack_4->SetBinContent(309,3065805);
   puSF_stack_4->SetBinContent(310,1270778);
   puSF_stack_4->SetBinContent(311,1411279);
   puSF_stack_4->SetBinContent(312,3324768);
   puSF_stack_4->SetBinContent(313,2780706);
   puSF_stack_4->SetBinContent(314,1.263241e+07);
   puSF_stack_4->SetBinContent(315,7141.715);
   puSF_stack_4->SetBinContent(317,920282.8);
   puSF_stack_4->SetBinContent(322,954343.4);
   puSF_stack_4->SetBinContent(324,892970.6);
   puSF_stack_4->SetBinContent(325,1144507);
   puSF_stack_4->SetBinContent(327,942389.8);
   puSF_stack_4->SetBinContent(332,5863.154);
   puSF_stack_4->SetBinContent(379,3637.034);
   puSF_stack_4->SetBinContent(420,4229.989);
   puSF_stack_4->SetBinContent(444,1679.996);
   puSF_stack_4->SetBinError(251,98.10893);
   puSF_stack_4->SetBinError(252,209.663);
   puSF_stack_4->SetBinError(253,192.8419);
   puSF_stack_4->SetBinError(254,249.6141);
   puSF_stack_4->SetBinError(255,317.565);
   puSF_stack_4->SetBinError(257,401.1694);
   puSF_stack_4->SetBinError(260,500.362);
   puSF_stack_4->SetBinError(265,597.704);
   puSF_stack_4->SetBinError(271,706.6033);
   puSF_stack_4->SetBinError(279,824.9841);
   puSF_stack_4->SetBinError(281,191.4729);
   puSF_stack_4->SetBinError(288,2227.731);
   puSF_stack_4->SetBinError(290,2042.092);
   puSF_stack_4->SetBinError(292,1567.943);
   puSF_stack_4->SetBinError(293,1383.294);
   puSF_stack_4->SetBinError(294,1643.616);
   puSF_stack_4->SetBinError(296,1724.051);
   puSF_stack_4->SetBinError(298,1772.626);
   puSF_stack_4->SetBinError(299,1805.518);
   puSF_stack_4->SetBinError(302,1887.108);
   puSF_stack_4->SetBinError(303,1114.872);
   puSF_stack_4->SetBinError(304,1604.167);
   puSF_stack_4->SetBinError(305,1449.198);
   puSF_stack_4->SetBinError(306,1957.347);
   puSF_stack_4->SetBinError(307,1477.781);
   puSF_stack_4->SetBinError(308,1210.152);
   puSF_stack_4->SetBinError(309,2711.737);
   puSF_stack_4->SetBinError(310,1745.705);
   puSF_stack_4->SetBinError(311,1839.403);
   puSF_stack_4->SetBinError(312,2823.527);
   puSF_stack_4->SetBinError(313,2582.25);
   puSF_stack_4->SetBinError(314,5504.126);
   puSF_stack_4->SetBinError(315,130.5373);
   puSF_stack_4->SetBinError(317,1485.736);
   puSF_stack_4->SetBinError(322,1512.916);
   puSF_stack_4->SetBinError(324,1463.459);
   puSF_stack_4->SetBinError(325,1656.802);
   puSF_stack_4->SetBinError(327,1503.656);
   puSF_stack_4->SetBinError(332,118.6001);
   puSF_stack_4->SetBinError(379,93.63473);
   puSF_stack_4->SetBinError(420,100.4);
   puSF_stack_4->SetBinError(444,63.49491);
   puSF_stack_4->SetEntries(4.611831e+07);

   ci = TColor::GetColor("#00cccc");
   puSF_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_4->SetLineColor(ci);
   puSF_stack_4->GetXaxis()->SetRange(1,500);
   puSF_stack_4->GetXaxis()->SetLabelFont(42);
   puSF_stack_4->GetXaxis()->SetTitleOffset(1);
   puSF_stack_4->GetXaxis()->SetTitleFont(42);
   puSF_stack_4->GetYaxis()->SetLabelFont(42);
   puSF_stack_4->GetYaxis()->SetTitleFont(42);
   puSF_stack_4->GetZaxis()->SetLabelFont(42);
   puSF_stack_4->GetZaxis()->SetTitleOffset(1);
   puSF_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_4,"");
   
   TH1D *puSF_stack_5 = new TH1D("puSF_stack_5","",500,-5,5);
   puSF_stack_5->SetBinContent(251,15701.86);
   puSF_stack_5->SetBinContent(252,72967.37);
   puSF_stack_5->SetBinContent(253,63331.28);
   puSF_stack_5->SetBinContent(254,104883.8);
   puSF_stack_5->SetBinContent(255,170804.5);
   puSF_stack_5->SetBinContent(257,272766.3);
   puSF_stack_5->SetBinContent(260,417396);
   puSF_stack_5->SetBinContent(265,599990.1);
   puSF_stack_5->SetBinContent(271,847128.4);
   puSF_stack_5->SetBinContent(279,1148742);
   puSF_stack_5->SetBinContent(281,62235.86);
   puSF_stack_5->SetBinContent(288,8382248);
   puSF_stack_5->SetBinContent(290,7032208);
   puSF_stack_5->SetBinContent(292,4147994);
   puSF_stack_5->SetBinContent(293,3239486);
   puSF_stack_5->SetBinContent(294,4556444);
   puSF_stack_5->SetBinContent(296,5014769);
   puSF_stack_5->SetBinContent(298,5299456);
   puSF_stack_5->SetBinContent(299,5501623);
   puSF_stack_5->SetBinContent(302,6008286);
   puSF_stack_5->SetBinContent(303,2105728);
   puSF_stack_5->SetBinContent(304,4354095);
   puSF_stack_5->SetBinContent(305,3542279);
   puSF_stack_5->SetBinContent(306,6493393);
   puSF_stack_5->SetBinContent(307,3672655);
   puSF_stack_5->SetBinContent(308,2467992);
   puSF_stack_5->SetBinContent(309,1.241025e+07);
   puSF_stack_5->SetBinContent(310,5161744);
   puSF_stack_5->SetBinContent(311,5729606);
   puSF_stack_5->SetBinContent(312,1.346826e+07);
   puSF_stack_5->SetBinContent(313,1.128391e+07);
   puSF_stack_5->SetBinContent(314,5.122858e+07);
   puSF_stack_5->SetBinContent(315,30004.11);
   puSF_stack_5->SetBinContent(317,3718164);
   puSF_stack_5->SetBinContent(322,3862478);
   puSF_stack_5->SetBinContent(324,3614644);
   puSF_stack_5->SetBinContent(325,4633788);
   puSF_stack_5->SetBinContent(327,3807420);
   puSF_stack_5->SetBinContent(332,23459.34);
   puSF_stack_5->SetBinContent(379,14572.16);
   puSF_stack_5->SetBinContent(420,17039.31);
   puSF_stack_5->SetBinContent(444,7296.873);
   puSF_stack_5->SetBinError(251,258.384);
   puSF_stack_5->SetBinError(252,553.5176);
   puSF_stack_5->SetBinError(253,516.4689);
   puSF_stack_5->SetBinError(254,666.0362);
   puSF_stack_5->SetBinError(255,849.9069);
   puSF_stack_5->SetBinError(257,1071.059);
   puSF_stack_5->SetBinError(260,1327.023);
   puSF_stack_5->SetBinError(265,1587.308);
   puSF_stack_5->SetBinError(271,1890.684);
   puSF_stack_5->SetBinError(279,2198.138);
   puSF_stack_5->SetBinError(281,510.6913);
   puSF_stack_5->SetBinError(288,5944.95);
   puSF_stack_5->SetBinError(290,5443.8);
   puSF_stack_5->SetBinError(292,4181.395);
   puSF_stack_5->SetBinError(293,3696.084);
   puSF_stack_5->SetBinError(294,4382.379);
   puSF_stack_5->SetBinError(296,4597.983);
   puSF_stack_5->SetBinError(298,4725.355);
   puSF_stack_5->SetBinError(299,4813.628);
   puSF_stack_5->SetBinError(302,5033.647);
   puSF_stack_5->SetBinError(303,2978.408);
   puSF_stack_5->SetBinError(304,4284.793);
   puSF_stack_5->SetBinError(305,3864.663);
   puSF_stack_5->SetBinError(306,5234.261);
   puSF_stack_5->SetBinError(307,3933.95);
   puSF_stack_5->SetBinError(308,3225.547);
   puSF_stack_5->SetBinError(309,7231.428);
   puSF_stack_5->SetBinError(310,4665.491);
   puSF_stack_5->SetBinError(311,4913.713);
   puSF_stack_5->SetBinError(312,7533.478);
   puSF_stack_5->SetBinError(313,6895.967);
   puSF_stack_5->SetBinError(314,14696.11);
   puSF_stack_5->SetBinError(315,356.0534);
   puSF_stack_5->SetBinError(317,3957.622);
   puSF_stack_5->SetBinError(322,4034.751);
   puSF_stack_5->SetBinError(324,3901.674);
   puSF_stack_5->SetBinError(325,4419.315);
   puSF_stack_5->SetBinError(327,4005.3);
   puSF_stack_5->SetBinError(332,317.1836);
   puSF_stack_5->SetBinError(379,248.9232);
   puSF_stack_5->SetBinError(420,263.253);
   puSF_stack_5->SetBinError(444,177.1456);
   puSF_stack_5->SetEntries(1.626053e+08);

   ci = TColor::GetColor("#ff99cc");
   puSF_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_5->SetLineColor(ci);
   puSF_stack_5->GetXaxis()->SetRange(1,500);
   puSF_stack_5->GetXaxis()->SetLabelFont(42);
   puSF_stack_5->GetXaxis()->SetTitleOffset(1);
   puSF_stack_5->GetXaxis()->SetTitleFont(42);
   puSF_stack_5->GetYaxis()->SetLabelFont(42);
   puSF_stack_5->GetYaxis()->SetTitleFont(42);
   puSF_stack_5->GetZaxis()->SetLabelFont(42);
   puSF_stack_5->GetZaxis()->SetTitleOffset(1);
   puSF_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_5,"");
   
   TH1D *puSF_stack_6 = new TH1D("puSF_stack_6","",500,-5,5);
   puSF_stack_6->SetBinContent(251,390.0334);
   puSF_stack_6->SetBinContent(252,1861.881);
   puSF_stack_6->SetBinContent(253,1640.852);
   puSF_stack_6->SetBinContent(254,2701.856);
   puSF_stack_6->SetBinContent(255,4294.782);
   puSF_stack_6->SetBinContent(257,6895.74);
   puSF_stack_6->SetBinContent(260,10513.56);
   puSF_stack_6->SetBinContent(265,15390.4);
   puSF_stack_6->SetBinContent(271,21536.65);
   puSF_stack_6->SetBinContent(279,29133.63);
   puSF_stack_6->SetBinContent(281,1575.899);
   puSF_stack_6->SetBinContent(288,212447.7);
   puSF_stack_6->SetBinContent(290,178321.2);
   puSF_stack_6->SetBinContent(292,105216.9);
   puSF_stack_6->SetBinContent(293,82074.44);
   puSF_stack_6->SetBinContent(294,115416.5);
   puSF_stack_6->SetBinContent(296,127216.8);
   puSF_stack_6->SetBinContent(298,134132.4);
   puSF_stack_6->SetBinContent(299,139726.5);
   puSF_stack_6->SetBinContent(302,152069.5);
   puSF_stack_6->SetBinContent(303,53545.56);
   puSF_stack_6->SetBinContent(304,110161.3);
   puSF_stack_6->SetBinContent(305,89590.39);
   puSF_stack_6->SetBinContent(306,164592.8);
   puSF_stack_6->SetBinContent(307,92844.03);
   puSF_stack_6->SetBinContent(308,62650.33);
   puSF_stack_6->SetBinContent(309,314572.8);
   puSF_stack_6->SetBinContent(310,130748.2);
   puSF_stack_6->SetBinContent(311,145173.5);
   puSF_stack_6->SetBinContent(312,341187.1);
   puSF_stack_6->SetBinContent(313,285469.8);
   puSF_stack_6->SetBinContent(314,1296753);
   puSF_stack_6->SetBinContent(315,730.5637);
   puSF_stack_6->SetBinContent(317,94292.23);
   puSF_stack_6->SetBinContent(322,97681.13);
   puSF_stack_6->SetBinContent(324,91439.65);
   puSF_stack_6->SetBinContent(325,117167.7);
   puSF_stack_6->SetBinContent(327,96752.56);
   puSF_stack_6->SetBinContent(332,603.1802);
   puSF_stack_6->SetBinContent(379,356.611);
   puSF_stack_6->SetBinContent(420,444.5813);
   puSF_stack_6->SetBinContent(444,177.5172);
   puSF_stack_6->SetBinError(251,11.08963);
   puSF_stack_6->SetBinError(252,24.22937);
   puSF_stack_6->SetBinError(253,22.74577);
   puSF_stack_6->SetBinError(254,29.18752);
   puSF_stack_6->SetBinError(255,36.79905);
   puSF_stack_6->SetBinError(257,46.62904);
   puSF_stack_6->SetBinError(260,57.57593);
   puSF_stack_6->SetBinError(265,69.6612);
   puSF_stack_6->SetBinError(271,82.4053);
   puSF_stack_6->SetBinError(279,95.84366);
   puSF_stack_6->SetBinError(281,22.29103);
   puSF_stack_6->SetBinError(288,258.8166);
   puSF_stack_6->SetBinError(290,237.1197);
   puSF_stack_6->SetBinError(292,182.1415);
   puSF_stack_6->SetBinError(293,160.8681);
   puSF_stack_6->SetBinError(294,190.7655);
   puSF_stack_6->SetBinError(296,200.2803);
   puSF_stack_6->SetBinError(298,205.652);
   puSF_stack_6->SetBinError(299,209.8966);
   puSF_stack_6->SetBinError(302,218.9713);
   puSF_stack_6->SetBinError(303,129.9355);
   puSF_stack_6->SetBinError(304,186.3719);
   puSF_stack_6->SetBinError(305,168.0725);
   puSF_stack_6->SetBinError(306,227.8093);
   puSF_stack_6->SetBinError(307,171.0972);
   puSF_stack_6->SetBinError(308,140.549);
   puSF_stack_6->SetBinError(309,314.9391);
   puSF_stack_6->SetBinError(310,203.0411);
   puSF_stack_6->SetBinError(311,213.9487);
   puSF_stack_6->SetBinError(312,327.9913);
   puSF_stack_6->SetBinError(313,300.0172);
   puSF_stack_6->SetBinError(314,639.4326);
   puSF_stack_6->SetBinError(315,15.17732);
   puSF_stack_6->SetBinError(317,172.4265);
   puSF_stack_6->SetBinError(322,175.4977);
   puSF_stack_6->SetBinError(324,169.7983);
   puSF_stack_6->SetBinError(325,192.2073);
   puSF_stack_6->SetBinError(327,174.6615);
   puSF_stack_6->SetBinError(332,13.7908);
   puSF_stack_6->SetBinError(379,10.60385);
   puSF_stack_6->SetBinError(420,11.83973);
   puSF_stack_6->SetBinError(444,7.481459);
   puSF_stack_6->SetEntries(1.5634e+07);

   ci = TColor::GetColor("#9933ff");
   puSF_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_6->SetLineColor(ci);
   puSF_stack_6->GetXaxis()->SetRange(1,500);
   puSF_stack_6->GetXaxis()->SetLabelFont(42);
   puSF_stack_6->GetXaxis()->SetTitleOffset(1);
   puSF_stack_6->GetXaxis()->SetTitleFont(42);
   puSF_stack_6->GetYaxis()->SetLabelFont(42);
   puSF_stack_6->GetYaxis()->SetTitleFont(42);
   puSF_stack_6->GetZaxis()->SetLabelFont(42);
   puSF_stack_6->GetZaxis()->SetTitleOffset(1);
   puSF_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_6,"");
   
   TH1D *puSF_stack_7 = new TH1D("puSF_stack_7","",500,-5,5);
   puSF_stack_7->SetBinContent(251,173.0636);
   puSF_stack_7->SetBinContent(252,743.8266);
   puSF_stack_7->SetBinContent(253,629.2773);
   puSF_stack_7->SetBinContent(254,1043.093);
   puSF_stack_7->SetBinContent(255,1776.258);
   puSF_stack_7->SetBinContent(257,2739.513);
   puSF_stack_7->SetBinContent(260,4146.833);
   puSF_stack_7->SetBinContent(265,6088.964);
   puSF_stack_7->SetBinContent(271,8506.4);
   puSF_stack_7->SetBinContent(279,11637.91);
   puSF_stack_7->SetBinContent(281,643.41);
   puSF_stack_7->SetBinContent(288,84097.53);
   puSF_stack_7->SetBinContent(290,70817.99);
   puSF_stack_7->SetBinContent(292,41701.89);
   puSF_stack_7->SetBinContent(293,32509.93);
   puSF_stack_7->SetBinContent(294,45736.41);
   puSF_stack_7->SetBinContent(296,50452.76);
   puSF_stack_7->SetBinContent(298,53412.2);
   puSF_stack_7->SetBinContent(299,55310.94);
   puSF_stack_7->SetBinContent(302,60431.69);
   puSF_stack_7->SetBinContent(303,21045.08);
   puSF_stack_7->SetBinContent(304,43618.24);
   puSF_stack_7->SetBinContent(305,35596.81);
   puSF_stack_7->SetBinContent(306,65178.55);
   puSF_stack_7->SetBinContent(307,37115.46);
   puSF_stack_7->SetBinContent(308,24718.1);
   puSF_stack_7->SetBinContent(309,124573.8);
   puSF_stack_7->SetBinContent(310,51804.3);
   puSF_stack_7->SetBinContent(311,57625.24);
   puSF_stack_7->SetBinContent(312,135634.3);
   puSF_stack_7->SetBinContent(313,113228.7);
   puSF_stack_7->SetBinContent(314,514839.1);
   puSF_stack_7->SetBinContent(315,271.2488);
   puSF_stack_7->SetBinContent(317,37347.04);
   puSF_stack_7->SetBinContent(322,38877.09);
   puSF_stack_7->SetBinContent(324,36363.7);
   puSF_stack_7->SetBinContent(325,46637.18);
   puSF_stack_7->SetBinContent(327,38316.99);
   puSF_stack_7->SetBinContent(332,240.5039);
   puSF_stack_7->SetBinContent(379,142.3188);
   puSF_stack_7->SetBinContent(420,177.5266);
   puSF_stack_7->SetBinContent(444,64.71291);
   puSF_stack_7->SetBinError(251,6.550556);
   puSF_stack_7->SetBinError(252,13.58035);
   puSF_stack_7->SetBinError(253,12.49097);
   puSF_stack_7->SetBinError(254,16.08187);
   puSF_stack_7->SetBinError(255,20.98593);
   puSF_stack_7->SetBinError(257,26.06225);
   puSF_stack_7->SetBinError(260,32.06517);
   puSF_stack_7->SetBinError(265,38.855);
   puSF_stack_7->SetBinError(271,45.92489);
   puSF_stack_7->SetBinError(279,53.71712);
   puSF_stack_7->SetBinError(281,12.63046);
   puSF_stack_7->SetBinError(288,144.3999);
   puSF_stack_7->SetBinError(290,132.5095);
   puSF_stack_7->SetBinError(292,101.6841);
   puSF_stack_7->SetBinError(293,89.78075);
   puSF_stack_7->SetBinError(294,106.4894);
   puSF_stack_7->SetBinError(296,111.8453);
   puSF_stack_7->SetBinError(298,115.0788);
   puSF_stack_7->SetBinError(299,117.1064);
   puSF_stack_7->SetBinError(302,122.4074);
   puSF_stack_7->SetBinError(303,72.23548);
   puSF_stack_7->SetBinError(304,103.9942);
   puSF_stack_7->SetBinError(305,93.94653);
   puSF_stack_7->SetBinError(306,127.124);
   puSF_stack_7->SetBinError(307,95.9296);
   puSF_stack_7->SetBinError(308,78.28576);
   puSF_stack_7->SetBinError(309,175.7473);
   puSF_stack_7->SetBinError(310,113.3334);
   puSF_stack_7->SetBinError(311,119.5313);
   puSF_stack_7->SetBinError(312,183.3834);
   puSF_stack_7->SetBinError(313,167.5535);
   puSF_stack_7->SetBinError(314,357.2819);
   puSF_stack_7->SetBinError(315,8.200854);
   puSF_stack_7->SetBinError(317,96.2284);
   puSF_stack_7->SetBinError(322,98.17978);
   puSF_stack_7->SetBinError(324,94.95312);
   puSF_stack_7->SetBinError(325,107.5329);
   puSF_stack_7->SetBinError(327,97.46998);
   puSF_stack_7->SetBinError(332,7.722115);
   puSF_stack_7->SetBinError(379,5.940273);
   puSF_stack_7->SetBinError(420,6.634481);
   puSF_stack_7->SetBinError(444,4.005629);
   puSF_stack_7->SetEntries(7889000);

   ci = TColor::GetColor("#3399ff");
   puSF_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_7->SetLineColor(ci);
   puSF_stack_7->GetXaxis()->SetRange(1,500);
   puSF_stack_7->GetXaxis()->SetLabelFont(42);
   puSF_stack_7->GetXaxis()->SetTitleOffset(1);
   puSF_stack_7->GetXaxis()->SetTitleFont(42);
   puSF_stack_7->GetYaxis()->SetLabelFont(42);
   puSF_stack_7->GetYaxis()->SetTitleFont(42);
   puSF_stack_7->GetZaxis()->SetLabelFont(42);
   puSF_stack_7->GetZaxis()->SetTitleOffset(1);
   puSF_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_7,"");
   
   TH1D *puSF_stack_8 = new TH1D("puSF_stack_8","",500,-5,5);
   puSF_stack_8->SetBinContent(251,56.21609);
   puSF_stack_8->SetBinContent(252,249.6805);
   puSF_stack_8->SetBinContent(253,222.5853);
   puSF_stack_8->SetBinContent(254,379.8384);
   puSF_stack_8->SetBinContent(255,606.2221);
   puSF_stack_8->SetBinContent(257,955.4202);
   puSF_stack_8->SetBinContent(260,1460.099);
   puSF_stack_8->SetBinContent(265,2107.344);
   puSF_stack_8->SetBinContent(271,2974.894);
   puSF_stack_8->SetBinContent(279,4071.868);
   puSF_stack_8->SetBinContent(281,228.6627);
   puSF_stack_8->SetBinContent(288,29472.68);
   puSF_stack_8->SetBinContent(290,24641.64);
   puSF_stack_8->SetBinContent(292,14643.02);
   puSF_stack_8->SetBinContent(293,11407.56);
   puSF_stack_8->SetBinContent(294,16045.13);
   puSF_stack_8->SetBinContent(296,17775.93);
   puSF_stack_8->SetBinContent(298,18842.77);
   puSF_stack_8->SetBinContent(299,19203.11);
   puSF_stack_8->SetBinContent(302,21233.73);
   puSF_stack_8->SetBinContent(303,7401.785);
   puSF_stack_8->SetBinContent(304,15226.71);
   puSF_stack_8->SetBinContent(305,12453.13);
   puSF_stack_8->SetBinContent(306,22883.75);
   puSF_stack_8->SetBinContent(307,12865.38);
   puSF_stack_8->SetBinContent(308,8766.924);
   puSF_stack_8->SetBinContent(309,43704.97);
   puSF_stack_8->SetBinContent(310,18129.18);
   puSF_stack_8->SetBinContent(311,20247.16);
   puSF_stack_8->SetBinContent(312,47504.11);
   puSF_stack_8->SetBinContent(313,39644.24);
   puSF_stack_8->SetBinContent(314,180315.1);
   puSF_stack_8->SetBinContent(315,101.5435);
   puSF_stack_8->SetBinContent(317,13132.03);
   puSF_stack_8->SetBinContent(322,13537.69);
   puSF_stack_8->SetBinContent(324,12728.13);
   puSF_stack_8->SetBinContent(325,16352.55);
   puSF_stack_8->SetBinContent(327,13437.92);
   puSF_stack_8->SetBinContent(332,82.0451);
   puSF_stack_8->SetBinContent(379,52.4177);
   puSF_stack_8->SetBinContent(420,59.25479);
   puSF_stack_8->SetBinContent(444,24.05643);
   puSF_stack_8->SetBinError(251,3.772977);
   puSF_stack_8->SetBinError(252,7.951445);
   puSF_stack_8->SetBinError(253,7.507616);
   puSF_stack_8->SetBinError(254,9.807386);
   puSF_stack_8->SetBinError(255,12.38995);
   puSF_stack_8->SetBinError(257,15.55432);
   puSF_stack_8->SetBinError(260,19.22848);
   puSF_stack_8->SetBinError(265,23.10051);
   puSF_stack_8->SetBinError(271,27.44667);
   puSF_stack_8->SetBinError(279,32.11076);
   puSF_stack_8->SetBinError(281,7.609419);
   puSF_stack_8->SetBinError(288,86.39002);
   puSF_stack_8->SetBinError(290,78.993);
   puSF_stack_8->SetBinError(292,60.89326);
   puSF_stack_8->SetBinError(293,53.7465);
   puSF_stack_8->SetBinError(294,63.74197);
   puSF_stack_8->SetBinError(296,67.09189);
   puSF_stack_8->SetBinError(298,69.07584);
   puSF_stack_8->SetBinError(299,69.7332);
   puSF_stack_8->SetBinError(302,73.32751);
   puSF_stack_8->SetBinError(303,43.29343);
   puSF_stack_8->SetBinError(304,62.09503);
   puSF_stack_8->SetBinError(305,56.1556);
   puSF_stack_8->SetBinError(306,76.12326);
   puSF_stack_8->SetBinError(307,57.07752);
   puSF_stack_8->SetBinError(308,47.11698);
   puSF_stack_8->SetBinError(309,105.2008);
   puSF_stack_8->SetBinError(310,67.75524);
   puSF_stack_8->SetBinError(311,71.60377);
   puSF_stack_8->SetBinError(312,109.678);
   puSF_stack_8->SetBinError(313,100.1945);
   puSF_stack_8->SetBinError(314,213.683);
   puSF_stack_8->SetBinError(315,5.070839);
   puSF_stack_8->SetBinError(317,57.66598);
   puSF_stack_8->SetBinError(322,58.5499);
   puSF_stack_8->SetBinError(324,56.77226);
   puSF_stack_8->SetBinError(325,64.3497);
   puSF_stack_8->SetBinError(327,58.33375);
   puSF_stack_8->SetBinError(332,4.558061);
   puSF_stack_8->SetBinError(379,3.643282);
   puSF_stack_8->SetBinError(420,3.873607);
   puSF_stack_8->SetBinError(444,2.468138);
   puSF_stack_8->SetEntries(2706000);

   ci = TColor::GetColor("#33ff99");
   puSF_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_8->SetLineColor(ci);
   puSF_stack_8->GetXaxis()->SetRange(1,500);
   puSF_stack_8->GetXaxis()->SetLabelFont(42);
   puSF_stack_8->GetXaxis()->SetTitleOffset(1);
   puSF_stack_8->GetXaxis()->SetTitleFont(42);
   puSF_stack_8->GetYaxis()->SetLabelFont(42);
   puSF_stack_8->GetYaxis()->SetTitleFont(42);
   puSF_stack_8->GetZaxis()->SetLabelFont(42);
   puSF_stack_8->GetZaxis()->SetTitleOffset(1);
   puSF_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_8,"");
   
   TH1D *puSF_stack_9 = new TH1D("puSF_stack_9","",500,-5,5);
   puSF_stack_9->SetBinContent(251,1.322781);
   puSF_stack_9->SetBinContent(252,6.080915);
   puSF_stack_9->SetBinContent(253,5.320195);
   puSF_stack_9->SetBinContent(254,8.414759);
   puSF_stack_9->SetBinContent(255,13.98207);
   puSF_stack_9->SetBinContent(257,21.98659);
   puSF_stack_9->SetBinContent(260,33.85123);
   puSF_stack_9->SetBinContent(265,48.69577);
   puSF_stack_9->SetBinContent(271,68.2403);
   puSF_stack_9->SetBinContent(279,94.4488);
   puSF_stack_9->SetBinContent(281,5.076312);
   puSF_stack_9->SetBinContent(288,684.2281);
   puSF_stack_9->SetBinContent(290,573.5991);
   puSF_stack_9->SetBinContent(292,339.7851);
   puSF_stack_9->SetBinContent(293,264.1362);
   puSF_stack_9->SetBinContent(294,372.9305);
   puSF_stack_9->SetBinContent(296,410.5595);
   puSF_stack_9->SetBinContent(298,433.3875);
   puSF_stack_9->SetBinContent(299,449.4757);
   puSF_stack_9->SetBinContent(302,489.718);
   puSF_stack_9->SetBinContent(303,172.0083);
   puSF_stack_9->SetBinContent(304,355.5825);
   puSF_stack_9->SetBinContent(305,288.0303);
   puSF_stack_9->SetBinContent(306,529.529);
   puSF_stack_9->SetBinContent(307,299.1746);
   puSF_stack_9->SetBinContent(308,201.3841);
   puSF_stack_9->SetBinContent(309,1012.205);
   puSF_stack_9->SetBinContent(310,421.2338);
   puSF_stack_9->SetBinContent(311,467.7023);
   puSF_stack_9->SetBinContent(312,1100.324);
   puSF_stack_9->SetBinContent(313,919.5361);
   puSF_stack_9->SetBinContent(314,4178.55);
   puSF_stack_9->SetBinContent(315,2.438826);
   puSF_stack_9->SetBinContent(317,303.818);
   puSF_stack_9->SetBinContent(322,315.0189);
   puSF_stack_9->SetBinContent(324,295.3047);
   puSF_stack_9->SetBinContent(325,376.8423);
   puSF_stack_9->SetBinContent(327,310.0508);
   puSF_stack_9->SetBinContent(332,1.963982);
   puSF_stack_9->SetBinContent(379,1.229104);
   puSF_stack_9->SetBinContent(420,1.401921);
   puSF_stack_9->SetBinContent(444,0.5539851);
   puSF_stack_9->SetBinError(251,0.0462217);
   puSF_stack_9->SetBinError(252,0.09910292);
   puSF_stack_9->SetBinError(253,0.09269702);
   puSF_stack_9->SetBinError(254,0.1165797);
   puSF_stack_9->SetBinError(255,0.1502753);
   puSF_stack_9->SetBinError(257,0.1884434);
   puSF_stack_9->SetBinError(260,0.2338241);
   puSF_stack_9->SetBinError(265,0.2804449);
   puSF_stack_9->SetBinError(271,0.3319881);
   puSF_stack_9->SetBinError(279,0.3905712);
   puSF_stack_9->SetBinError(281,0.09054743);
   puSF_stack_9->SetBinError(288,1.051241);
   puSF_stack_9->SetBinError(290,0.9625121);
   puSF_stack_9->SetBinError(292,0.7408054);
   puSF_stack_9->SetBinError(293,0.6531545);
   puSF_stack_9->SetBinError(294,0.7760969);
   puSF_stack_9->SetBinError(296,0.8143105);
   puSF_stack_9->SetBinError(298,0.836643);
   puSF_stack_9->SetBinError(299,0.8520304);
   puSF_stack_9->SetBinError(302,0.8893547);
   puSF_stack_9->SetBinError(303,0.5270802);
   puSF_stack_9->SetBinError(304,0.7578307);
   puSF_stack_9->SetBinError(305,0.6820576);
   puSF_stack_9->SetBinError(306,0.9247979);
   puSF_stack_9->SetBinError(307,0.6951272);
   puSF_stack_9->SetBinError(308,0.5703147);
   puSF_stack_9->SetBinError(309,1.278604);
   puSF_stack_9->SetBinError(310,0.8248283);
   puSF_stack_9->SetBinError(311,0.869134);
   puSF_stack_9->SetBinError(312,1.333099);
   puSF_stack_9->SetBinError(313,1.218671);
   puSF_stack_9->SetBinError(314,2.597854);
   puSF_stack_9->SetBinError(315,0.06276137);
   puSF_stack_9->SetBinError(317,0.700501);
   puSF_stack_9->SetBinError(322,0.7132968);
   puSF_stack_9->SetBinError(324,0.6906169);
   puSF_stack_9->SetBinError(325,0.7801566);
   puSF_stack_9->SetBinError(327,0.7076498);
   puSF_stack_9->SetBinError(332,0.05632105);
   puSF_stack_9->SetBinError(379,0.04455498);
   puSF_stack_9->SetBinError(420,0.04758431);
   puSF_stack_9->SetBinError(444,0.02991238);
   puSF_stack_9->SetEntries(9831562);

   ci = TColor::GetColor("#cccc00");
   puSF_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_9->SetLineColor(ci);
   puSF_stack_9->GetXaxis()->SetRange(1,500);
   puSF_stack_9->GetXaxis()->SetLabelFont(42);
   puSF_stack_9->GetXaxis()->SetTitleOffset(1);
   puSF_stack_9->GetXaxis()->SetTitleFont(42);
   puSF_stack_9->GetYaxis()->SetLabelFont(42);
   puSF_stack_9->GetYaxis()->SetTitleFont(42);
   puSF_stack_9->GetZaxis()->SetLabelFont(42);
   puSF_stack_9->GetZaxis()->SetTitleOffset(1);
   puSF_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_9,"");
   
   TH1D *puSF_stack_10 = new TH1D("puSF_stack_10","",500,-5,5);
   puSF_stack_10->SetBinContent(251,0.1778744);
   puSF_stack_10->SetBinContent(252,0.3773092);
   puSF_stack_10->SetBinContent(253,0.4183572);
   puSF_stack_10->SetBinContent(254,0.7492283);
   puSF_stack_10->SetBinContent(256,1.235999);
   puSF_stack_10->SetBinContent(259,2.028348);
   puSF_stack_10->SetBinContent(262,3.131252);
   puSF_stack_10->SetBinContent(266,4.635099);
   puSF_stack_10->SetBinContent(268,0.02321903);
   puSF_stack_10->SetBinContent(271,6.58218);
   puSF_stack_10->SetBinContent(275,3.918626);
   puSF_stack_10->SetBinContent(276,9.283051);
   puSF_stack_10->SetBinContent(281,12.66101);
   puSF_stack_10->SetBinContent(286,16.60617);
   puSF_stack_10->SetBinContent(288,7.476942);
   puSF_stack_10->SetBinContent(290,1.848401);
   puSF_stack_10->SetBinContent(292,21.44112);
   puSF_stack_10->SetBinContent(295,13.22282);
   puSF_stack_10->SetBinContent(296,26.91044);
   puSF_stack_10->SetBinContent(298,0.2197515);
   puSF_stack_10->SetBinContent(299,21.51948);
   puSF_stack_10->SetBinContent(300,33.16631);
   puSF_stack_10->SetBinContent(303,584.5237);
   puSF_stack_10->SetBinContent(304,241.4667);
   puSF_stack_10->SetBinContent(305,375.7735);
   puSF_stack_10->SetBinContent(306,63.60853);
   puSF_stack_10->SetBinContent(307,46.71337);
   puSF_stack_10->SetBinContent(308,117.7843);
   puSF_stack_10->SetBinContent(309,62.92564);
   puSF_stack_10->SetBinContent(310,219.9025);
   puSF_stack_10->SetBinContent(311,172.7964);
   puSF_stack_10->SetBinError(251,0.008587855);
   puSF_stack_10->SetBinError(252,0.01250768);
   puSF_stack_10->SetBinError(253,0.01317048);
   puSF_stack_10->SetBinError(254,0.01762524);
   puSF_stack_10->SetBinError(256,0.02263795);
   puSF_stack_10->SetBinError(259,0.02900008);
   puSF_stack_10->SetBinError(262,0.03603189);
   puSF_stack_10->SetBinError(266,0.04383869);
   puSF_stack_10->SetBinError(268,0.003102773);
   puSF_stack_10->SetBinError(271,0.05224117);
   puSF_stack_10->SetBinError(275,0.04030834);
   puSF_stack_10->SetBinError(276,0.06204023);
   puSF_stack_10->SetBinError(281,0.07245396);
   puSF_stack_10->SetBinError(286,0.08297796);
   puSF_stack_10->SetBinError(288,0.05567882);
   puSF_stack_10->SetBinError(290,0.02768382);
   puSF_stack_10->SetBinError(292,0.09428698);
   puSF_stack_10->SetBinError(295,0.07404404);
   puSF_stack_10->SetBinError(296,0.1056303);
   puSF_stack_10->SetBinError(298,0.009545397);
   puSF_stack_10->SetBinError(299,0.09445912);
   puSF_stack_10->SetBinError(300,0.1172672);
   puSF_stack_10->SetBinError(303,0.4922992);
   puSF_stack_10->SetBinError(304,0.3164147);
   puSF_stack_10->SetBinError(305,0.3947218);
   puSF_stack_10->SetBinError(306,0.1623999);
   puSF_stack_10->SetBinError(307,0.139171);
   puSF_stack_10->SetBinError(308,0.2209896);
   puSF_stack_10->SetBinError(309,0.1615258);
   puSF_stack_10->SetBinError(310,0.3019556);
   puSF_stack_10->SetBinError(311,0.2676674);
   puSF_stack_10->SetEntries(5000000);

   ci = TColor::GetColor("#0000cc");
   puSF_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_10->SetLineColor(ci);
   puSF_stack_10->GetXaxis()->SetRange(1,500);
   puSF_stack_10->GetXaxis()->SetLabelFont(42);
   puSF_stack_10->GetXaxis()->SetTitleOffset(1);
   puSF_stack_10->GetXaxis()->SetTitleFont(42);
   puSF_stack_10->GetYaxis()->SetLabelFont(42);
   puSF_stack_10->GetYaxis()->SetTitleFont(42);
   puSF_stack_10->GetZaxis()->SetLabelFont(42);
   puSF_stack_10->GetZaxis()->SetTitleOffset(1);
   puSF_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_10,"");
   
   TH1D *puSF_stack_11 = new TH1D("puSF_stack_11","",500,-5,5);
   puSF_stack_11->SetBinContent(251,0.06162979);
   puSF_stack_11->SetBinContent(252,0.2749637);
   puSF_stack_11->SetBinContent(253,0.2465192);
   puSF_stack_11->SetBinContent(254,0.4614333);
   puSF_stack_11->SetBinContent(255,0.7190143);
   puSF_stack_11->SetBinContent(257,1.12988);
   puSF_stack_11->SetBinContent(260,1.695609);
   puSF_stack_11->SetBinContent(265,2.563167);
   puSF_stack_11->SetBinContent(271,3.489195);
   puSF_stack_11->SetBinContent(279,4.669642);
   puSF_stack_11->SetBinContent(281,0.2591612);
   puSF_stack_11->SetBinContent(288,33.99752);
   puSF_stack_11->SetBinContent(290,28.56778);
   puSF_stack_11->SetBinContent(292,16.6353);
   puSF_stack_11->SetBinContent(293,13.12557);
   puSF_stack_11->SetBinContent(294,18.6043);
   puSF_stack_11->SetBinContent(296,20.23986);
   puSF_stack_11->SetBinContent(298,21.71107);
   puSF_stack_11->SetBinContent(299,22.67976);
   puSF_stack_11->SetBinContent(302,23.95345);
   puSF_stack_11->SetBinContent(303,8.476467);
   puSF_stack_11->SetBinContent(304,17.77466);
   puSF_stack_11->SetBinContent(305,14.15273);
   puSF_stack_11->SetBinContent(306,25.81814);
   puSF_stack_11->SetBinContent(307,15.06453);
   puSF_stack_11->SetBinContent(308,10.03301);
   puSF_stack_11->SetBinContent(309,50.4669);
   puSF_stack_11->SetBinContent(310,21.15324);
   puSF_stack_11->SetBinContent(311,23.48885);
   puSF_stack_11->SetBinContent(312,54.59768);
   puSF_stack_11->SetBinContent(313,45.84467);
   puSF_stack_11->SetBinContent(314,207.8394);
   puSF_stack_11->SetBinContent(315,0.1248398);
   puSF_stack_11->SetBinContent(317,14.86384);
   puSF_stack_11->SetBinContent(322,15.65713);
   puSF_stack_11->SetBinContent(324,14.77851);
   puSF_stack_11->SetBinContent(325,18.70543);
   puSF_stack_11->SetBinContent(327,15.31105);
   puSF_stack_11->SetBinContent(332,0.09639532);
   puSF_stack_11->SetBinContent(379,0.0711113);
   puSF_stack_11->SetBinContent(420,0.09007432);
   puSF_stack_11->SetBinContent(444,0.02528402);
   puSF_stack_11->SetBinError(251,0.009868665);
   puSF_stack_11->SetBinError(252,0.02084494);
   puSF_stack_11->SetBinError(253,0.01973733);
   puSF_stack_11->SetBinError(254,0.02700334);
   puSF_stack_11->SetBinError(255,0.03370791);
   puSF_stack_11->SetBinError(257,0.0422551);
   puSF_stack_11->SetBinError(260,0.05176378);
   puSF_stack_11->SetBinError(265,0.06364313);
   puSF_stack_11->SetBinError(271,0.07425499);
   puSF_stack_11->SetBinError(279,0.08590231);
   puSF_stack_11->SetBinError(281,0.02023709);
   puSF_stack_11->SetBinError(288,0.2317857);
   puSF_stack_11->SetBinError(290,0.2124718);
   puSF_stack_11->SetBinError(292,0.1621356);
   puSF_stack_11->SetBinError(293,0.1440198);
   puSF_stack_11->SetBinError(294,0.1714627);
   puSF_stack_11->SetBinError(296,0.1788409);
   puSF_stack_11->SetBinError(298,0.1852267);
   puSF_stack_11->SetBinError(299,0.1893138);
   puSF_stack_11->SetBinError(302,0.1945571);
   puSF_stack_11->SetBinError(303,0.1157365);
   puSF_stack_11->SetBinError(304,0.167596);
   puSF_stack_11->SetBinError(305,0.1495489);
   puSF_stack_11->SetBinError(306,0.201988);
   puSF_stack_11->SetBinError(307,0.1542911);
   puSF_stack_11->SetBinError(308,0.1259154);
   puSF_stack_11->SetBinError(309,0.2824011);
   puSF_stack_11->SetBinError(310,0.1828317);
   puSF_stack_11->SetBinError(311,0.1926611);
   puSF_stack_11->SetBinError(312,0.2937312);
   puSF_stack_11->SetBinError(313,0.2691581);
   puSF_stack_11->SetBinError(314,0.5730955);
   puSF_stack_11->SetBinError(315,0.01404558);
   puSF_stack_11->SetBinError(317,0.1532599);
   puSF_stack_11->SetBinError(322,0.1572965);
   puSF_stack_11->SetBinError(324,0.1528194);
   puSF_stack_11->SetBinError(325,0.1719281);
   puSF_stack_11->SetBinError(327,0.1555484);
   puSF_stack_11->SetBinError(332,0.01234216);
   puSF_stack_11->SetBinError(379,0.01060065);
   puSF_stack_11->SetBinError(420,0.01193063);
   puSF_stack_11->SetBinError(444,0.006321005);
   puSF_stack_11->SetEntries(499616);

   ci = TColor::GetColor("#cc0000");
   puSF_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_11->SetLineColor(ci);
   puSF_stack_11->GetXaxis()->SetRange(1,500);
   puSF_stack_11->GetXaxis()->SetLabelFont(42);
   puSF_stack_11->GetXaxis()->SetTitleOffset(1);
   puSF_stack_11->GetXaxis()->SetTitleFont(42);
   puSF_stack_11->GetYaxis()->SetLabelFont(42);
   puSF_stack_11->GetYaxis()->SetTitleFont(42);
   puSF_stack_11->GetZaxis()->SetLabelFont(42);
   puSF_stack_11->GetZaxis()->SetTitleOffset(1);
   puSF_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_11,"");
   
   TH1D *puSF_stack_12 = new TH1D("puSF_stack_12","",500,-5,5);
   puSF_stack_12->SetBinContent(251,0.007473804);
   puSF_stack_12->SetBinContent(252,0.03778423);
   puSF_stack_12->SetBinContent(253,0.03819944);
   puSF_stack_12->SetBinContent(254,0.05086339);
   puSF_stack_12->SetBinContent(255,0.08947804);
   puSF_stack_12->SetBinContent(257,0.1324524);
   puSF_stack_12->SetBinContent(260,0.2227609);
   puSF_stack_12->SetBinContent(265,0.3180519);
   puSF_stack_12->SetBinContent(271,0.4430305);
   puSF_stack_12->SetBinContent(279,0.5987347);
   puSF_stack_12->SetBinContent(281,0.03404733);
   puSF_stack_12->SetBinContent(288,4.464352);
   puSF_stack_12->SetBinContent(290,3.7969);
   puSF_stack_12->SetBinContent(292,2.175915);
   puSF_stack_12->SetBinContent(293,1.702366);
   puSF_stack_12->SetBinContent(294,2.415077);
   puSF_stack_12->SetBinContent(296,2.649879);
   puSF_stack_12->SetBinContent(298,2.828004);
   puSF_stack_12->SetBinContent(299,2.92807);
   puSF_stack_12->SetBinContent(302,3.185501);
   puSF_stack_12->SetBinContent(303,1.100933);
   puSF_stack_12->SetBinContent(304,2.336394);
   puSF_stack_12->SetBinContent(305,1.8616);
   puSF_stack_12->SetBinContent(306,3.44314);
   puSF_stack_12->SetBinContent(307,1.930525);
   puSF_stack_12->SetBinContent(308,1.291722);
   puSF_stack_12->SetBinContent(309,6.511344);
   puSF_stack_12->SetBinContent(310,2.698666);
   puSF_stack_12->SetBinContent(311,3.080868);
   puSF_stack_12->SetBinContent(312,7.102605);
   puSF_stack_12->SetBinContent(313,5.953507);
   puSF_stack_12->SetBinContent(314,27.0533);
   puSF_stack_12->SetBinContent(315,0.01432479);
   puSF_stack_12->SetBinContent(317,1.985956);
   puSF_stack_12->SetBinContent(322,2.011906);
   puSF_stack_12->SetBinContent(324,1.947549);
   puSF_stack_12->SetBinContent(325,2.486285);
   puSF_stack_12->SetBinContent(327,2.025193);
   puSF_stack_12->SetBinContent(332,0.01411718);
   puSF_stack_12->SetBinContent(379,0.008511832);
   puSF_stack_12->SetBinContent(420,0.01141831);
   puSF_stack_12->SetBinContent(444,0.003114085);
   puSF_stack_12->SetBinError(251,0.001245634);
   puSF_stack_12->SetBinError(252,0.002800753);
   puSF_stack_12->SetBinError(253,0.0028161);
   puSF_stack_12->SetBinError(254,0.003249543);
   puSF_stack_12->SetBinError(255,0.004310005);
   puSF_stack_12->SetBinError(257,0.005243841);
   puSF_stack_12->SetBinError(260,0.006800472);
   puSF_stack_12->SetBinError(265,0.008125846);
   puSF_stack_12->SetBinError(271,0.009590393);
   puSF_stack_12->SetBinError(279,0.01114902);
   puSF_stack_12->SetBinError(281,0.00265865);
   puSF_stack_12->SetBinError(288,0.0304438);
   puSF_stack_12->SetBinError(290,0.02807593);
   puSF_stack_12->SetBinError(292,0.02125399);
   puSF_stack_12->SetBinError(293,0.01879949);
   puSF_stack_12->SetBinError(294,0.0223916);
   puSF_stack_12->SetBinError(296,0.02345485);
   puSF_stack_12->SetBinError(298,0.02423035);
   puSF_stack_12->SetBinError(299,0.0246553);
   puSF_stack_12->SetBinError(302,0.0257163);
   puSF_stack_12->SetBinError(303,0.0151182);
   puSF_stack_12->SetBinError(304,0.02202382);
   puSF_stack_12->SetBinError(305,0.01965906);
   puSF_stack_12->SetBinError(306,0.02673603);
   puSF_stack_12->SetBinError(307,0.02001969);
   puSF_stack_12->SetBinError(308,0.01637586);
   puSF_stack_12->SetBinError(309,0.03676672);
   puSF_stack_12->SetBinError(310,0.02366978);
   puSF_stack_12->SetBinError(311,0.02529043);
   puSF_stack_12->SetBinError(312,0.03839975);
   puSF_stack_12->SetBinError(313,0.03515653);
   puSF_stack_12->SetBinError(314,0.07494277);
   puSF_stack_12->SetBinError(315,0.001724502);
   puSF_stack_12->SetBinError(317,0.02030506);
   puSF_stack_12->SetBinError(322,0.0204373);
   puSF_stack_12->SetBinError(324,0.02010776);
   puSF_stack_12->SetBinError(325,0.02271931);
   puSF_stack_12->SetBinError(327,0.02050467);
   puSF_stack_12->SetBinError(332,0.00171196);
   puSF_stack_12->SetBinError(379,0.001329325);
   puSF_stack_12->SetBinError(420,0.001539645);
   puSF_stack_12->SetBinError(444,0.0008040532);
   puSF_stack_12->SetEntries(496094);

   ci = TColor::GetColor("#00cc00");
   puSF_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   puSF_stack_12->SetLineColor(ci);
   puSF_stack_12->GetXaxis()->SetRange(1,500);
   puSF_stack_12->GetXaxis()->SetLabelFont(42);
   puSF_stack_12->GetXaxis()->SetTitleOffset(1);
   puSF_stack_12->GetXaxis()->SetTitleFont(42);
   puSF_stack_12->GetYaxis()->SetLabelFont(42);
   puSF_stack_12->GetYaxis()->SetTitleFont(42);
   puSF_stack_12->GetZaxis()->SetLabelFont(42);
   puSF_stack_12->GetZaxis()->SetTitleOffset(1);
   puSF_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(puSF_stack_12,"");
   st->Draw("hist");
   
   TH1D *puSF__9 = new TH1D("puSF__9","",200,-2,2);
   puSF__9->SetEntries(199);

   ci = TColor::GetColor("#000099");
   puSF__9->SetLineColor(ci);
   puSF__9->SetLineWidth(2);
   puSF__9->SetMarkerStyle(20);
   puSF__9->SetMarkerSize(1.2);
   puSF__9->GetXaxis()->SetRange(1,200);
   puSF__9->GetXaxis()->SetLabelFont(42);
   puSF__9->GetXaxis()->SetTitleOffset(1);
   puSF__9->GetXaxis()->SetTitleFont(42);
   puSF__9->GetYaxis()->SetLabelFont(42);
   puSF__9->GetYaxis()->SetTitleFont(42);
   puSF__9->GetZaxis()->SetLabelFont(42);
   puSF__9->GetZaxis()->SetTitleOffset(1);
   puSF__9->GetZaxis()->SetTitleFont(42);
   puSF__9->Draw("same E");
   
   Double_t Graph_from_puSF_fx1009[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_puSF_fy1009[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1.007525e+08, 4.707991e+08, 4.110033e+08, 6.75665e+08, 1.092042e+09, 206571.8, 1.758888e+09,
   0, 334298.4, 2.669915e+09, 0, 516313.9, 0, 0, 3.87707e+09, 765559.6, 0, 3495.766, 0, 0, 5.43046e+09, 0, 0,
   0, 644316.5, 1523684, 0, 0, 7.400051e+09, 0, 4.07815e+08, 0, 0, 0, 0, 2717060, 0, 5.383072e+10, 0,
   4.51983e+10, 0, 2.66358e+10, 2.080538e+10, 2.926526e+10, 2163087, 3.221403e+10, 0, 3.40454e+10, 3.536493e+10, 5421110, 0, 3.856003e+10, 1.361237e+10, 2.794551e+10, 2.282359e+10,
   4.165235e+10, 2.360231e+10, 1.58544e+10, 7.973239e+10, 3.313636e+10, 3.681243e+10, 8.652125e+10, 7.241679e+10, 3.287262e+11, 1.941368e+08, 0, 2.392857e+10, 0, 0, 0, 0,
   2.481897e+10, 0, 2.320914e+10, 2.974341e+10, 0, 2.453228e+10, 0, 0, 0, 0, 1.504804e+08, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 9.211967e+07, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 1.105212e+08, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.380182e+07, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   Double_t Graph_from_puSF_fex1009[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_puSF_fey1009[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1192057, 2575541, 2406843, 3085782, 3923086, 1157.339, 4978542,
   0, 1471.839, 6134415, 0, 1829.226, 0, 0, 7392166, 2228.177, 0, 149.9952, 0, 0, 8746111, 0, 0,
   0, 2043.583, 3141.967, 0, 0, 1.021308e+07, 0, 2391680, 0, 0, 0, 0, 4196.192, 0, 2.754347e+07, 0,
   2.523885e+07, 0, 1.937348e+07, 1.712351e+07, 2.030864e+07, 3743.898, 2.130503e+07, 0, 2.190463e+07, 2.232371e+07, 5926.156, 0, 2.331233e+07, 1.380207e+07, 1.983084e+07, 1.791079e+07,
   2.422576e+07, 1.823565e+07, 1.493833e+07, 3.351843e+07, 2.15988e+07, 2.27685e+07, 3.491836e+07, 3.194587e+07, 6.806487e+07, 1654490, 0, 1.836429e+07, 0, 0, 0, 0,
   1.87034e+07, 0, 1.808467e+07, 2.047382e+07, 0, 1.859508e+07, 0, 0, 0, 0, 1455431, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1138685, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 1247156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785881.6, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_puSF_fx1009,Graph_from_puSF_fy1009,Graph_from_puSF_fex1009,Graph_from_puSF_fey1009);
   gre->SetName("Graph_from_puSF");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_puSF1009 = new TH1F("Graph_Graph_from_puSF1009","",500,-6,6);
   Graph_Graph_from_puSF1009->SetMinimum(0);
   Graph_Graph_from_puSF1009->SetMaximum(3.616737e+11);
   Graph_Graph_from_puSF1009->SetDirectory(nullptr);
   Graph_Graph_from_puSF1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_puSF1009->SetLineColor(ci);
   Graph_Graph_from_puSF1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_puSF1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("puSF","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("puSF","ggZHcc","F");

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
   entry=leg->AddEntry("puSF","ZHcc","F");

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
   entry=leg->AddEntry("puSF","ggZHbb","F");

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
   entry=leg->AddEntry("puSF","ZHbb","F");

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
   entry=leg->AddEntry("puSF","ZZ","F");

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
   entry=leg->AddEntry("puSF","WZ","F");

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
   entry=leg->AddEntry("puSF","WW","F");

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
   entry=leg->AddEntry("puSF","W + jets","F");

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
   entry=leg->AddEntry("puSF","Z + jets","F");

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
   entry=leg->AddEntry("puSF","t#bar{t}","F");

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
   entry=leg->AddEntry("puSF","Single top","F");

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
   entry=leg->AddEntry("puSF","QCD","F");

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
   entry=leg->AddEntry("Graph_from_puSF","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   puSF__17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.612902,-0.2774193,2.209678,1.658065);
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
   
   TH1D *data_mc_ratio__10 = new TH1D("data_mc_ratio__10","",200,-2,2);
   data_mc_ratio__10->SetMinimum(0.4);
   data_mc_ratio__10->SetMaximum(1.6);
   data_mc_ratio__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__10->SetLineColor(ci);
   data_mc_ratio__10->SetLineWidth(2);
   data_mc_ratio__10->SetMarkerStyle(20);
   data_mc_ratio__10->SetMarkerSize(1.2);
   data_mc_ratio__10->GetXaxis()->SetTitle("PU Scale Factor");
   data_mc_ratio__10->GetXaxis()->SetRange(1,200);
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
   data_mc_ratio__10->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__10->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__10->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_mc_statistical_error_fy1010[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1010[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_mc_statistical_error_fey1010[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01183154, 0.005470572, 0.005856018, 0.00456703, 0.00359243, 0.0056026, 0.002830505,
   0, 0.004402772, 0.002297607, 0, 0.003542856, 0, 0, 0.001906637, 0.00291052, 0, 0.04290768, 0, 0, 0.001610565, 0, 0,
   0, 0.003171707, 0.002062086, 0, 0, 0.001380136, 0, 0.005864621, 0, 0, 0, 0, 0.001544387, 0, 0.0005116683, 0,
   0.0005584027, 0, 0.0007273472, 0.0008230329, 0.0006939505, 0.001730813, 0.0006613589, 0, 0.0006433948, 0.0006312387, 0.001093163, 0, 0.0006045724, 0.001013936, 0.0007096254, 0.0007847491,
   0.000581618, 0.0007726212, 0.0009422196, 0.0004203866, 0.0006518155, 0.0006185003, 0.0004035813, 0.000441139, 0.0002070564, 0.008522288, 0, 0.0007674629, 0, 0, 0, 0,
   0.0007535928, 0, 0.0007792048, 0.000688348, 0, 0.0007579842, 0, 0, 0, 0, 0.009671897, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01236093, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0.01128431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01794176, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.9485108);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(1.051489);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   puSF__17->cd();
   puSF__17->Modified();
   puSF__17->cd();
   puSF__17->SetSelected(puSF__17);
}
