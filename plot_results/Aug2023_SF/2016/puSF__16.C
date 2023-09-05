#ifdef __CLING__
#pragma cling optimize(0)
#endif
void puSF__16()
{
//=========Macro generated from canvas: puSF__16/puSF__16
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *puSF__16 = new TCanvas("puSF__16", "puSF__16",0,0,600,600);
   puSF__16->SetHighLightColor(2);
   puSF__16->Range(0,0,1,1);
   puSF__16->SetFillColor(0);
   puSF__16->SetFillStyle(4000);
   puSF__16->SetBorderMode(0);
   puSF__16->SetBorderSize(2);
   puSF__16->SetFrameFillStyle(1000);
   puSF__16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-7.520243e+08,2.209678,7.512722e+11);
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
   st->SetMaximum(6.760698e+11);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",500,-5,5);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(6.760698e+11);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetRange(151,350);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/0.02");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *puSF_stack_1 = new TH1D("puSF_stack_1","",500,-5,5);
   puSF_stack_1->SetBinContent(251,9.060435e+07);
   puSF_stack_1->SetBinContent(252,1.951279e+08);
   puSF_stack_1->SetBinContent(253,2.298608e+08);
   puSF_stack_1->SetBinContent(254,3.885001e+08);
   puSF_stack_1->SetBinContent(256,6.616967e+08);
   puSF_stack_1->SetBinContent(259,1.054286e+09);
   puSF_stack_1->SetBinContent(262,1.638839e+09);
   puSF_stack_1->SetBinContent(266,2.425238e+09);
   puSF_stack_1->SetBinContent(268,1.034812e+07);
   puSF_stack_1->SetBinContent(271,3.467061e+09);
   puSF_stack_1->SetBinContent(275,2.043414e+09);
   puSF_stack_1->SetBinContent(276,4.836464e+09);
   puSF_stack_1->SetBinContent(281,6.508669e+09);
   puSF_stack_1->SetBinContent(286,8.646559e+09);
   puSF_stack_1->SetBinContent(288,3.869735e+09);
   puSF_stack_1->SetBinContent(290,9.685263e+08);
   puSF_stack_1->SetBinContent(292,1.108529e+10);
   puSF_stack_1->SetBinContent(295,6.845144e+09);
   puSF_stack_1->SetBinContent(296,1.399243e+10);
   puSF_stack_1->SetBinContent(298,1.188797e+08);
   puSF_stack_1->SetBinContent(299,1.125354e+10);
   puSF_stack_1->SetBinContent(300,1.722804e+10);
   puSF_stack_1->SetBinContent(303,3.041589e+11);
   puSF_stack_1->SetBinContent(304,1.257842e+11);
   puSF_stack_1->SetBinContent(305,1.956362e+11);
   puSF_stack_1->SetBinContent(306,3.317737e+10);
   puSF_stack_1->SetBinContent(307,2.433518e+10);
   puSF_stack_1->SetBinContent(308,6.137495e+10);
   puSF_stack_1->SetBinContent(309,3.267148e+10);
   puSF_stack_1->SetBinContent(310,1.142826e+11);
   puSF_stack_1->SetBinContent(311,9.009349e+10);
   puSF_stack_1->SetBinError(251,1321782);
   puSF_stack_1->SetBinError(252,1939112);
   puSF_stack_1->SetBinError(253,2105960);
   puSF_stack_1->SetBinError(254,2736796);
   puSF_stack_1->SetBinError(256,3572283);
   puSF_stack_1->SetBinError(259,4507703);
   puSF_stack_1->SetBinError(262,5621580);
   puSF_stack_1->SetBinError(266,6839224);
   puSF_stack_1->SetBinError(268,446106.7);
   puSF_stack_1->SetBinError(271,8176387);
   puSF_stack_1->SetBinError(275,6276610);
   puSF_stack_1->SetBinError(276,9656742);
   puSF_stack_1->SetBinError(281,1.120205e+07);
   puSF_stack_1->SetBinError(286,1.29147e+07);
   puSF_stack_1->SetBinError(288,8636914);
   puSF_stack_1->SetBinError(290,4321763);
   puSF_stack_1->SetBinError(292,1.461931e+07);
   puSF_stack_1->SetBinError(295,1.148796e+07);
   puSF_stack_1->SetBinError(296,1.642572e+07);
   puSF_stack_1->SetBinError(298,1514795);
   puSF_stack_1->SetBinError(299,1.473223e+07);
   puSF_stack_1->SetBinError(300,1.822711e+07);
   puSF_stack_1->SetBinError(303,7.658589e+07);
   puSF_stack_1->SetBinError(304,4.925176e+07);
   puSF_stack_1->SetBinError(305,6.142259e+07);
   puSF_stack_1->SetBinError(306,2.529495e+07);
   puSF_stack_1->SetBinError(307,2.166367e+07);
   puSF_stack_1->SetBinError(308,3.440367e+07);
   puSF_stack_1->SetBinError(309,2.510057e+07);
   puSF_stack_1->SetBinError(310,4.694468e+07);
   puSF_stack_1->SetBinError(311,4.168282e+07);
   puSF_stack_1->SetEntries(2.561203e+08);

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
   puSF_stack_2->SetBinContent(251,914.4804);
   puSF_stack_2->SetBinContent(252,1958.344);
   puSF_stack_2->SetBinContent(253,2286.565);
   puSF_stack_2->SetBinContent(254,3921.38);
   puSF_stack_2->SetBinContent(256,6613.957);
   puSF_stack_2->SetBinContent(259,10723.68);
   puSF_stack_2->SetBinContent(262,16490.42);
   puSF_stack_2->SetBinContent(266,24402.95);
   puSF_stack_2->SetBinContent(268,103.4864);
   puSF_stack_2->SetBinContent(271,34980.35);
   puSF_stack_2->SetBinContent(275,20619.35);
   puSF_stack_2->SetBinContent(276,48623.03);
   puSF_stack_2->SetBinContent(281,65894.27);
   puSF_stack_2->SetBinContent(286,86716.52);
   puSF_stack_2->SetBinContent(288,38952.92);
   puSF_stack_2->SetBinContent(290,9703.122);
   puSF_stack_2->SetBinContent(292,111617.5);
   puSF_stack_2->SetBinContent(295,69091.93);
   puSF_stack_2->SetBinContent(296,141114.4);
   puSF_stack_2->SetBinContent(298,1207.909);
   puSF_stack_2->SetBinContent(299,112960.9);
   puSF_stack_2->SetBinContent(300,173049.4);
   puSF_stack_2->SetBinContent(303,3062888);
   puSF_stack_2->SetBinContent(304,1265285);
   puSF_stack_2->SetBinContent(305,1969621);
   puSF_stack_2->SetBinContent(306,333606.8);
   puSF_stack_2->SetBinContent(307,244444);
   puSF_stack_2->SetBinContent(308,617045.8);
   puSF_stack_2->SetBinContent(309,329207.7);
   puSF_stack_2->SetBinContent(310,1150977);
   puSF_stack_2->SetBinContent(311,906069.5);
   puSF_stack_2->SetBinError(251,9.605214);
   puSF_stack_2->SetBinError(252,13.82135);
   puSF_stack_2->SetBinError(253,15.02252);
   puSF_stack_2->SetBinError(254,19.82274);
   puSF_stack_2->SetBinError(256,25.51922);
   puSF_stack_2->SetBinError(259,32.67632);
   puSF_stack_2->SetBinError(262,40.39393);
   puSF_stack_2->SetBinError(266,49.17591);
   puSF_stack_2->SetBinError(268,3.096025);
   puSF_stack_2->SetBinError(271,58.83872);
   puSF_stack_2->SetBinError(275,45.19967);
   puSF_stack_2->SetBinError(276,69.30466);
   puSF_stack_2->SetBinError(281,80.83135);
   puSF_stack_2->SetBinError(286,92.71519);
   puSF_stack_2->SetBinError(288,62.08804);
   puSF_stack_2->SetBinError(290,30.94362);
   puSF_stack_2->SetBinError(292,104.9914);
   puSF_stack_2->SetBinError(295,82.64411);
   puSF_stack_2->SetBinError(296,118.219);
   puSF_stack_2->SetBinError(298,10.95674);
   puSF_stack_2->SetBinError(299,105.7067);
   puSF_stack_2->SetBinError(300,130.7258);
   puSF_stack_2->SetBinError(303,550.4676);
   puSF_stack_2->SetBinError(304,353.7938);
   puSF_stack_2->SetBinError(305,441.429);
   puSF_stack_2->SetBinError(306,181.641);
   puSF_stack_2->SetBinError(307,155.4893);
   puSF_stack_2->SetBinError(308,247.0436);
   puSF_stack_2->SetBinError(309,180.6402);
   puSF_stack_2->SetBinError(310,337.4668);
   puSF_stack_2->SetBinError(311,299.3583);
   puSF_stack_2->SetEntries(1.87656e+08);

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
   puSF_stack_3->SetBinContent(251,2570.568);
   puSF_stack_3->SetBinContent(252,5498.33);
   puSF_stack_3->SetBinContent(253,6350.073);
   puSF_stack_3->SetBinContent(254,10862.11);
   puSF_stack_3->SetBinContent(256,18415.33);
   puSF_stack_3->SetBinContent(259,29594.71);
   puSF_stack_3->SetBinContent(262,45748.47);
   puSF_stack_3->SetBinContent(266,67839.56);
   puSF_stack_3->SetBinContent(268,299.9134);
   puSF_stack_3->SetBinContent(271,96986.47);
   puSF_stack_3->SetBinContent(275,57089.27);
   puSF_stack_3->SetBinContent(276,135222.5);
   puSF_stack_3->SetBinContent(281,182784.1);
   puSF_stack_3->SetBinContent(286,240847.7);
   puSF_stack_3->SetBinContent(288,108306.8);
   puSF_stack_3->SetBinContent(290,27022.06);
   puSF_stack_3->SetBinContent(292,310066);
   puSF_stack_3->SetBinContent(295,191979.5);
   puSF_stack_3->SetBinContent(296,391715.2);
   puSF_stack_3->SetBinContent(298,3328.351);
   puSF_stack_3->SetBinContent(299,313913);
   puSF_stack_3->SetBinContent(300,480476.8);
   puSF_stack_3->SetBinContent(303,8499331);
   puSF_stack_3->SetBinContent(304,3512912);
   puSF_stack_3->SetBinContent(305,5463936);
   puSF_stack_3->SetBinContent(306,925932.9);
   puSF_stack_3->SetBinContent(307,679270.1);
   puSF_stack_3->SetBinContent(308,1713284);
   puSF_stack_3->SetBinContent(309,912881.3);
   puSF_stack_3->SetBinContent(310,3193172);
   puSF_stack_3->SetBinContent(311,2515298);
   puSF_stack_3->SetBinError(251,12.08538);
   puSF_stack_3->SetBinError(252,17.6762);
   puSF_stack_3->SetBinError(253,18.99928);
   puSF_stack_3->SetBinError(254,24.84847);
   puSF_stack_3->SetBinError(256,32.33805);
   puSF_stack_3->SetBinError(259,41.00852);
   puSF_stack_3->SetBinError(262,50.98161);
   puSF_stack_3->SetBinError(266,62.07547);
   puSF_stack_3->SetBinError(268,4.125898);
   puSF_stack_3->SetBinError(271,74.22252);
   puSF_stack_3->SetBinError(275,56.95166);
   puSF_stack_3->SetBinError(276,87.64735);
   puSF_stack_3->SetBinError(281,101.8982);
   puSF_stack_3->SetBinError(286,116.9584);
   puSF_stack_3->SetBinError(288,78.43543);
   puSF_stack_3->SetBinError(290,39.17582);
   puSF_stack_3->SetBinError(292,132.7115);
   puSF_stack_3->SetBinError(295,104.4355);
   puSF_stack_3->SetBinError(296,149.1726);
   puSF_stack_3->SetBinError(298,13.74968);
   puSF_stack_3->SetBinError(299,133.5251);
   puSF_stack_3->SetBinError(300,165.1957);
   puSF_stack_3->SetBinError(303,694.8257);
   puSF_stack_3->SetBinError(304,446.7048);
   puSF_stack_3->SetBinError(305,557.1037);
   puSF_stack_3->SetBinError(306,229.3317);
   puSF_stack_3->SetBinError(307,196.4265);
   puSF_stack_3->SetBinError(308,311.9678);
   puSF_stack_3->SetBinError(309,227.7197);
   puSF_stack_3->SetBinError(310,425.8801);
   puSF_stack_3->SetBinError(311,377.9974);
   puSF_stack_3->SetEntries(5.5215e+08);

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
   puSF_stack_4->SetBinContent(251,3622.84);
   puSF_stack_4->SetBinContent(252,7509.656);
   puSF_stack_4->SetBinContent(253,8865.438);
   puSF_stack_4->SetBinContent(254,14919.61);
   puSF_stack_4->SetBinContent(256,25524.41);
   puSF_stack_4->SetBinContent(259,40979.69);
   puSF_stack_4->SetBinContent(262,62592.15);
   puSF_stack_4->SetBinContent(266,92890.68);
   puSF_stack_4->SetBinContent(268,468.8903);
   puSF_stack_4->SetBinContent(271,133040.1);
   puSF_stack_4->SetBinContent(275,78750.88);
   puSF_stack_4->SetBinContent(276,185815.7);
   puSF_stack_4->SetBinContent(281,251476.2);
   puSF_stack_4->SetBinContent(286,331352.9);
   puSF_stack_4->SetBinContent(288,149193.4);
   puSF_stack_4->SetBinContent(290,36885.49);
   puSF_stack_4->SetBinContent(292,427265.6);
   puSF_stack_4->SetBinContent(295,263357.5);
   puSF_stack_4->SetBinContent(296,539675.2);
   puSF_stack_4->SetBinContent(298,4496.484);
   puSF_stack_4->SetBinContent(299,431586);
   puSF_stack_4->SetBinContent(300,658677.1);
   puSF_stack_4->SetBinContent(303,1.169481e+07);
   puSF_stack_4->SetBinContent(304,4843306);
   puSF_stack_4->SetBinContent(305,7515941);
   puSF_stack_4->SetBinContent(306,1274461);
   puSF_stack_4->SetBinContent(307,933654.4);
   puSF_stack_4->SetBinContent(308,2353067);
   puSF_stack_4->SetBinContent(309,1256292);
   puSF_stack_4->SetBinContent(310,4394492);
   puSF_stack_4->SetBinContent(311,3461225);
   puSF_stack_4->SetBinError(251,92.77435);
   puSF_stack_4->SetBinError(252,133.1058);
   puSF_stack_4->SetBinError(253,144.4653);
   puSF_stack_4->SetBinError(254,187.4783);
   puSF_stack_4->SetBinError(256,245.4526);
   puSF_stack_4->SetBinError(259,310.7809);
   puSF_stack_4->SetBinError(262,383.772);
   puSF_stack_4->SetBinError(266,467.3247);
   puSF_stack_4->SetBinError(268,33.26939);
   puSF_stack_4->SetBinError(271,559.599);
   puSF_stack_4->SetBinError(275,430.609);
   puSF_stack_4->SetBinError(276,661.1852);
   puSF_stack_4->SetBinError(281,769.3197);
   puSF_stack_4->SetBinError(286,883.0197);
   puSF_stack_4->SetBinError(288,592.7151);
   puSF_stack_4->SetBinError(290,294.365);
   puSF_stack_4->SetBinError(292,1002.894);
   puSF_stack_4->SetBinError(295,786.986);
   puSF_stack_4->SetBinError(296,1127.17);
   puSF_stack_4->SetBinError(298,102.9313);
   puSF_stack_4->SetBinError(299,1007.858);
   puSF_stack_4->SetBinError(300,1245.007);
   puSF_stack_4->SetBinError(303,5246.01);
   puSF_stack_4->SetBinError(304,3376.713);
   puSF_stack_4->SetBinError(305,4205.635);
   puSF_stack_4->SetBinError(306,1731.947);
   puSF_stack_4->SetBinError(307,1482.441);
   puSF_stack_4->SetBinError(308,2352.864);
   puSF_stack_4->SetBinError(309,1719.34);
   puSF_stack_4->SetBinError(310,3215.817);
   puSF_stack_4->SetBinError(311,2853.825);
   puSF_stack_4->SetEntries(4.770593e+07);

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
   puSF_stack_5->SetBinContent(251,13786.43);
   puSF_stack_5->SetBinContent(252,30407.8);
   puSF_stack_5->SetBinContent(253,35377.3);
   puSF_stack_5->SetBinContent(254,60476.43);
   puSF_stack_5->SetBinContent(256,102706.1);
   puSF_stack_5->SetBinContent(259,163239.7);
   puSF_stack_5->SetBinContent(262,255681.1);
   puSF_stack_5->SetBinContent(266,378799.7);
   puSF_stack_5->SetBinContent(268,1609.323);
   puSF_stack_5->SetBinContent(271,538285.6);
   puSF_stack_5->SetBinContent(275,317127.4);
   puSF_stack_5->SetBinContent(276,751169.7);
   puSF_stack_5->SetBinContent(281,1018911);
   puSF_stack_5->SetBinContent(286,1343463);
   puSF_stack_5->SetBinContent(288,600198);
   puSF_stack_5->SetBinContent(290,149945.3);
   puSF_stack_5->SetBinContent(292,1731532);
   puSF_stack_5->SetBinContent(295,1066086);
   puSF_stack_5->SetBinContent(296,2189049);
   puSF_stack_5->SetBinContent(298,18908.39);
   puSF_stack_5->SetBinContent(299,1752708);
   puSF_stack_5->SetBinContent(300,2681128);
   puSF_stack_5->SetBinContent(303,4.738782e+07);
   puSF_stack_5->SetBinContent(304,1.957825e+07);
   puSF_stack_5->SetBinContent(305,3.046444e+07);
   puSF_stack_5->SetBinContent(306,5158931);
   puSF_stack_5->SetBinContent(307,3787571);
   puSF_stack_5->SetBinContent(308,9552199);
   puSF_stack_5->SetBinContent(309,5096300);
   puSF_stack_5->SetBinContent(310,1.780342e+07);
   puSF_stack_5->SetBinContent(311,1.402059e+07);
   puSF_stack_5->SetBinError(251,225.3655);
   puSF_stack_5->SetBinError(252,335.678);
   puSF_stack_5->SetBinError(253,361.3622);
   puSF_stack_5->SetBinError(254,475.2287);
   puSF_stack_5->SetBinError(256,618.9436);
   puSF_stack_5->SetBinError(259,778.8797);
   puSF_stack_5->SetBinError(262,977.6988);
   puSF_stack_5->SetBinError(266,1189.124);
   puSF_stack_5->SetBinError(268,76.42138);
   puSF_stack_5->SetBinError(271,1416.483);
   puSF_stack_5->SetBinError(275,1086.312);
   puSF_stack_5->SetBinError(276,1672.195);
   puSF_stack_5->SetBinError(281,1950.848);
   puSF_stack_5->SetBinError(286,2239.639);
   puSF_stack_5->SetBinError(288,1494.581);
   puSF_stack_5->SetBinError(290,746.6571);
   puSF_stack_5->SetBinError(292,2541.784);
   puSF_stack_5->SetBinError(295,1992.72);
   puSF_stack_5->SetBinError(296,2859.065);
   puSF_stack_5->SetBinError(298,267.9659);
   puSF_stack_5->SetBinError(299,2557.722);
   puSF_stack_5->SetBinError(300,3163.935);
   puSF_stack_5->SetBinError(303,13296.84);
   puSF_stack_5->SetBinError(304,8547.541);
   puSF_stack_5->SetBinError(305,10661.34);
   puSF_stack_5->SetBinError(306,4386.976);
   puSF_stack_5->SetBinError(307,3759.897);
   puSF_stack_5->SetBinError(308,5970.986);
   puSF_stack_5->SetBinError(309,4362.307);
   puSF_stack_5->SetBinError(310,8150.502);
   puSF_stack_5->SetBinError(311,7231.888);
   puSF_stack_5->SetEntries(1.558885e+08);

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
   puSF_stack_6->SetBinContent(251,359.841);
   puSF_stack_6->SetBinContent(252,780.1482);
   puSF_stack_6->SetBinContent(253,878.1034);
   puSF_stack_6->SetBinContent(254,1541.888);
   puSF_stack_6->SetBinContent(256,2592.118);
   puSF_stack_6->SetBinContent(259,4200.787);
   puSF_stack_6->SetBinContent(262,6417.343);
   puSF_stack_6->SetBinContent(266,9593.027);
   puSF_stack_6->SetBinContent(268,45.55119);
   puSF_stack_6->SetBinContent(271,13670.73);
   puSF_stack_6->SetBinContent(275,8059.067);
   puSF_stack_6->SetBinContent(276,18996.59);
   puSF_stack_6->SetBinContent(281,25848.08);
   puSF_stack_6->SetBinContent(286,34002.02);
   puSF_stack_6->SetBinContent(288,15282.49);
   puSF_stack_6->SetBinContent(290,3826.838);
   puSF_stack_6->SetBinContent(292,43795.25);
   puSF_stack_6->SetBinContent(295,27062.11);
   puSF_stack_6->SetBinContent(296,55539);
   puSF_stack_6->SetBinContent(298,469.0832);
   puSF_stack_6->SetBinContent(299,44299.41);
   puSF_stack_6->SetBinContent(300,67869.93);
   puSF_stack_6->SetBinContent(303,1200321);
   puSF_stack_6->SetBinContent(304,495929.4);
   puSF_stack_6->SetBinContent(305,771782.5);
   puSF_stack_6->SetBinContent(306,130844.4);
   puSF_stack_6->SetBinContent(307,96064.64);
   puSF_stack_6->SetBinContent(308,242123.1);
   puSF_stack_6->SetBinContent(309,128869.8);
   puSF_stack_6->SetBinContent(310,450785.3);
   puSF_stack_6->SetBinContent(311,354970);
   puSF_stack_6->SetBinError(251,6.95353);
   puSF_stack_6->SetBinError(252,10.23855);
   puSF_stack_6->SetBinError(253,10.86233);
   puSF_stack_6->SetBinError(254,14.39383);
   puSF_stack_6->SetBinError(256,18.66283);
   puSF_stack_6->SetBinError(259,23.7583);
   puSF_stack_6->SetBinError(262,29.36484);
   puSF_stack_6->SetBinError(266,35.90276);
   puSF_stack_6->SetBinError(268,2.474001);
   puSF_stack_6->SetBinError(271,42.85938);
   puSF_stack_6->SetBinError(275,32.90731);
   puSF_stack_6->SetBinError(276,50.52286);
   puSF_stack_6->SetBinError(281,58.93377);
   puSF_stack_6->SetBinError(286,67.5931);
   puSF_stack_6->SetBinError(288,45.31554);
   puSF_stack_6->SetBinError(290,22.67619);
   puSF_stack_6->SetBinError(292,76.71204);
   puSF_stack_6->SetBinError(295,60.30188);
   puSF_stack_6->SetBinError(296,86.38713);
   puSF_stack_6->SetBinError(298,7.939168);
   puSF_stack_6->SetBinError(299,77.15232);
   puSF_stack_6->SetBinError(300,95.49678);
   puSF_stack_6->SetBinError(303,401.6046);
   puSF_stack_6->SetBinError(304,258.1428);
   puSF_stack_6->SetBinError(305,322.0308);
   puSF_stack_6->SetBinError(306,132.5951);
   puSF_stack_6->SetBinError(307,113.614);
   puSF_stack_6->SetBinError(308,180.3716);
   puSF_stack_6->SetBinError(309,131.5908);
   puSF_stack_6->SetBinError(310,246.1132);
   puSF_stack_6->SetBinError(311,218.3966);
   puSF_stack_6->SetEntries(3.168e+07);

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
   puSF_stack_7->SetBinContent(251,143.6302);
   puSF_stack_7->SetBinContent(252,310.3809);
   puSF_stack_7->SetBinContent(253,346.0431);
   puSF_stack_7->SetBinContent(254,610.8374);
   puSF_stack_7->SetBinContent(256,1034.966);
   puSF_stack_7->SetBinContent(259,1669.47);
   puSF_stack_7->SetBinContent(262,2599.085);
   puSF_stack_7->SetBinContent(266,3817.38);
   puSF_stack_7->SetBinContent(268,16.3588);
   puSF_stack_7->SetBinContent(271,5428.503);
   puSF_stack_7->SetBinContent(275,3212.104);
   puSF_stack_7->SetBinContent(276,7526.355);
   puSF_stack_7->SetBinContent(281,10214.43);
   puSF_stack_7->SetBinContent(286,13464.92);
   puSF_stack_7->SetBinContent(288,6057.88);
   puSF_stack_7->SetBinContent(290,1510.571);
   puSF_stack_7->SetBinContent(292,17341.31);
   puSF_stack_7->SetBinContent(295,10790.15);
   puSF_stack_7->SetBinContent(296,21975.42);
   puSF_stack_7->SetBinContent(298,185.0725);
   puSF_stack_7->SetBinContent(299,17693.56);
   puSF_stack_7->SetBinContent(300,26919.05);
   puSF_stack_7->SetBinContent(303,476161.1);
   puSF_stack_7->SetBinContent(304,196814.2);
   puSF_stack_7->SetBinContent(305,306458.5);
   puSF_stack_7->SetBinContent(306,51917.69);
   puSF_stack_7->SetBinContent(307,38066.48);
   puSF_stack_7->SetBinContent(308,95883.37);
   puSF_stack_7->SetBinContent(309,51014.14);
   puSF_stack_7->SetBinContent(310,178836.9);
   puSF_stack_7->SetBinContent(311,141080.3);
   puSF_stack_7->SetBinError(251,3.957792);
   puSF_stack_7->SetBinError(252,5.818051);
   puSF_stack_7->SetBinError(253,6.143206);
   puSF_stack_7->SetBinError(254,8.16193);
   puSF_stack_7->SetBinError(256,10.62413);
   puSF_stack_7->SetBinError(259,13.49333);
   puSF_stack_7->SetBinError(262,16.83605);
   puSF_stack_7->SetBinError(266,20.40388);
   puSF_stack_7->SetBinError(268,1.33569);
   puSF_stack_7->SetBinError(271,24.33157);
   puSF_stack_7->SetBinError(275,18.71651);
   puSF_stack_7->SetBinError(276,28.64985);
   puSF_stack_7->SetBinError(281,33.37622);
   puSF_stack_7->SetBinError(286,38.32057);
   puSF_stack_7->SetBinError(288,25.70339);
   puSF_stack_7->SetBinError(290,12.83514);
   puSF_stack_7->SetBinError(292,43.48815);
   puSF_stack_7->SetBinError(295,34.30393);
   puSF_stack_7->SetBinError(296,48.95518);
   puSF_stack_7->SetBinError(298,4.492634);
   puSF_stack_7->SetBinError(299,43.92762);
   puSF_stack_7->SetBinError(300,54.18261);
   puSF_stack_7->SetBinError(303,227.8804);
   puSF_stack_7->SetBinError(304,146.507);
   puSF_stack_7->SetBinError(305,182.8167);
   puSF_stack_7->SetBinError(306,75.24675);
   puSF_stack_7->SetBinError(307,64.43197);
   puSF_stack_7->SetBinError(308,102.259);
   puSF_stack_7->SetBinError(309,74.58909);
   puSF_stack_7->SetBinError(310,139.6557);
   puSF_stack_7->SetBinError(311,124.0404);
   puSF_stack_7->SetEntries(1.5488e+07);

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
   puSF_stack_8->SetBinContent(251,53.50557);
   puSF_stack_8->SetBinContent(252,118.6851);
   puSF_stack_8->SetBinContent(253,127.1973);
   puSF_stack_8->SetBinContent(254,217.4272);
   puSF_stack_8->SetBinContent(256,338.7876);
   puSF_stack_8->SetBinContent(259,582.4811);
   puSF_stack_8->SetBinContent(262,914.2157);
   puSF_stack_8->SetBinContent(266,1352.232);
   puSF_stack_8->SetBinContent(268,6.566593);
   puSF_stack_8->SetBinContent(271,1852.995);
   puSF_stack_8->SetBinContent(275,1101.242);
   puSF_stack_8->SetBinContent(276,2667.253);
   puSF_stack_8->SetBinContent(281,3582.685);
   puSF_stack_8->SetBinContent(286,4721.38);
   puSF_stack_8->SetBinContent(288,2130.251);
   puSF_stack_8->SetBinContent(290,538.7038);
   puSF_stack_8->SetBinContent(292,6043.455);
   puSF_stack_8->SetBinContent(295,3796.707);
   puSF_stack_8->SetBinContent(296,7654.702);
   puSF_stack_8->SetBinContent(298,64.4499);
   puSF_stack_8->SetBinContent(299,6120.551);
   puSF_stack_8->SetBinContent(300,9491.159);
   puSF_stack_8->SetBinContent(303,167063.6);
   puSF_stack_8->SetBinContent(304,68819.35);
   puSF_stack_8->SetBinContent(305,107097.5);
   puSF_stack_8->SetBinContent(306,18170.98);
   puSF_stack_8->SetBinContent(307,13426.98);
   puSF_stack_8->SetBinContent(308,33745.48);
   puSF_stack_8->SetBinContent(309,17917.8);
   puSF_stack_8->SetBinContent(310,62644.33);
   puSF_stack_8->SetBinContent(311,49360.35);
   puSF_stack_8->SetBinError(251,3.607345);
   puSF_stack_8->SetBinError(252,5.372622);
   puSF_stack_8->SetBinError(253,5.561951);
   puSF_stack_8->SetBinError(254,7.271853);
   puSF_stack_8->SetBinError(256,9.0772);
   puSF_stack_8->SetBinError(259,11.90225);
   puSF_stack_8->SetBinError(262,14.9112);
   puSF_stack_8->SetBinError(266,18.13484);
   puSF_stack_8->SetBinError(268,1.263741);
   puSF_stack_8->SetBinError(271,21.22879);
   puSF_stack_8->SetBinError(275,16.36551);
   puSF_stack_8->SetBinError(276,25.46949);
   puSF_stack_8->SetBinError(281,29.51838);
   puSF_stack_8->SetBinError(286,33.88618);
   puSF_stack_8->SetBinError(288,22.76164);
   puSF_stack_8->SetBinError(290,11.44625);
   puSF_stack_8->SetBinError(292,38.33812);
   puSF_stack_8->SetBinError(295,30.38727);
   puSF_stack_8->SetBinError(296,43.14717);
   puSF_stack_8->SetBinError(298,3.959126);
   puSF_stack_8->SetBinError(299,38.58188);
   puSF_stack_8->SetBinError(300,48.04496);
   puSF_stack_8->SetBinError(303,201.5715);
   puSF_stack_8->SetBinError(304,129.3729);
   puSF_stack_8->SetBinError(305,161.3904);
   puSF_stack_8->SetBinError(306,66.47791);
   puSF_stack_8->SetBinError(307,57.14488);
   puSF_stack_8->SetBinError(308,90.59328);
   puSF_stack_8->SetBinError(309,66.01316);
   puSF_stack_8->SetBinError(310,123.4324);
   puSF_stack_8->SetBinError(311,109.5664);
   puSF_stack_8->SetEntries(2433000);

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
   puSF_stack_9->SetBinContent(251,1.120063);
   puSF_stack_9->SetBinContent(252,2.557384);
   puSF_stack_9->SetBinContent(253,2.921543);
   puSF_stack_9->SetBinContent(254,4.723022);
   puSF_stack_9->SetBinContent(256,8.448748);
   puSF_stack_9->SetBinContent(259,13.24902);
   puSF_stack_9->SetBinContent(262,20.83289);
   puSF_stack_9->SetBinContent(266,30.90931);
   puSF_stack_9->SetBinContent(268,0.1462151);
   puSF_stack_9->SetBinContent(271,44.10729);
   puSF_stack_9->SetBinContent(275,25.72558);
   puSF_stack_9->SetBinContent(276,61.83656);
   puSF_stack_9->SetBinContent(281,82.73842);
   puSF_stack_9->SetBinContent(286,109.4406);
   puSF_stack_9->SetBinContent(288,49.2731);
   puSF_stack_9->SetBinContent(290,12.18689);
   puSF_stack_9->SetBinContent(292,140.9306);
   puSF_stack_9->SetBinContent(295,86.95658);
   puSF_stack_9->SetBinContent(296,178.7245);
   puSF_stack_9->SetBinContent(298,1.583537);
   puSF_stack_9->SetBinContent(299,142.8714);
   puSF_stack_9->SetBinContent(300,217.9073);
   puSF_stack_9->SetBinContent(303,3864.201);
   puSF_stack_9->SetBinContent(304,1597.251);
   puSF_stack_9->SetBinContent(305,2484.991);
   puSF_stack_9->SetBinContent(306,421.3077);
   puSF_stack_9->SetBinContent(307,308.4793);
   puSF_stack_9->SetBinContent(308,779.7718);
   puSF_stack_9->SetBinContent(309,416.4674);
   puSF_stack_9->SetBinContent(310,1455.192);
   puSF_stack_9->SetBinContent(311,1143.747);
   puSF_stack_9->SetBinError(251,0.03930649);
   puSF_stack_9->SetBinError(252,0.0593938);
   puSF_stack_9->SetBinError(253,0.0634818);
   puSF_stack_9->SetBinError(254,0.08071479);
   puSF_stack_9->SetBinError(256,0.1079541);
   puSF_stack_9->SetBinError(259,0.135187);
   puSF_stack_9->SetBinError(262,0.1695188);
   puSF_stack_9->SetBinError(266,0.2064847);
   puSF_stack_9->SetBinError(268,0.01420166);
   puSF_stack_9->SetBinError(271,0.2466598);
   puSF_stack_9->SetBinError(275,0.188376);
   puSF_stack_9->SetBinError(276,0.2920558);
   puSF_stack_9->SetBinError(281,0.3378288);
   puSF_stack_9->SetBinError(286,0.388537);
   puSF_stack_9->SetBinError(288,0.2607042);
   puSF_stack_9->SetBinError(290,0.1296551);
   puSF_stack_9->SetBinError(292,0.4409058);
   puSF_stack_9->SetBinError(295,0.3463334);
   puSF_stack_9->SetBinError(296,0.4965182);
   puSF_stack_9->SetBinError(298,0.04673661);
   puSF_stack_9->SetBinError(299,0.4439314);
   puSF_stack_9->SetBinError(300,0.5482505);
   puSF_stack_9->SetBinError(303,2.308729);
   puSF_stack_9->SetBinError(304,1.484327);
   puSF_stack_9->SetBinError(305,1.851423);
   puSF_stack_9->SetBinError(306,0.7623297);
   puSF_stack_9->SetBinError(307,0.6523132);
   puSF_stack_9->SetBinError(308,1.037115);
   puSF_stack_9->SetBinError(309,0.7579379);
   puSF_stack_9->SetBinError(310,1.416783);
   puSF_stack_9->SetBinError(311,1.256053);
   puSF_stack_9->SetEntries(9939628);

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
   puSF_stack_10->SetBinContent(251,0.1536018);
   puSF_stack_10->SetBinContent(252,0.325822);
   puSF_stack_10->SetBinContent(253,0.3612686);
   puSF_stack_10->SetBinContent(254,0.6469895);
   puSF_stack_10->SetBinContent(256,1.067336);
   puSF_stack_10->SetBinContent(259,1.751562);
   puSF_stack_10->SetBinContent(262,2.703965);
   puSF_stack_10->SetBinContent(266,4.002599);
   puSF_stack_10->SetBinContent(268,0.02005059);
   puSF_stack_10->SetBinContent(271,5.683984);
   puSF_stack_10->SetBinContent(275,3.383895);
   puSF_stack_10->SetBinContent(276,8.016297);
   puSF_stack_10->SetBinContent(281,10.9333);
   puSF_stack_10->SetBinContent(286,14.34011);
   puSF_stack_10->SetBinContent(288,6.456647);
   puSF_stack_10->SetBinContent(290,1.59617);
   puSF_stack_10->SetBinContent(292,18.51529);
   puSF_stack_10->SetBinContent(295,11.41845);
   puSF_stack_10->SetBinContent(296,23.23827);
   puSF_stack_10->SetBinContent(298,0.1897645);
   puSF_stack_10->SetBinContent(299,18.58296);
   puSF_stack_10->SetBinContent(300,28.64047);
   puSF_stack_10->SetBinContent(303,504.7603);
   puSF_stack_10->SetBinContent(304,208.5164);
   puSF_stack_10->SetBinContent(305,324.4958);
   puSF_stack_10->SetBinContent(306,54.92858);
   puSF_stack_10->SetBinContent(307,40.33892);
   puSF_stack_10->SetBinContent(308,101.7116);
   puSF_stack_10->SetBinContent(309,54.33888);
   puSF_stack_10->SetBinContent(310,189.8948);
   puSF_stack_10->SetBinContent(311,149.2168);
   puSF_stack_10->SetBinError(251,0.007415966);
   puSF_stack_10->SetBinError(252,0.0108009);
   puSF_stack_10->SetBinError(253,0.01137325);
   puSF_stack_10->SetBinError(254,0.01522012);
   puSF_stack_10->SetBinError(256,0.0195488);
   puSF_stack_10->SetBinError(259,0.02504277);
   puSF_stack_10->SetBinError(262,0.03111502);
   puSF_stack_10->SetBinError(266,0.03785651);
   puSF_stack_10->SetBinError(268,0.002679372);
   puSF_stack_10->SetBinError(271,0.0451124);
   puSF_stack_10->SetBinError(275,0.03480791);
   puSF_stack_10->SetBinError(276,0.05357429);
   puSF_stack_10->SetBinError(281,0.06256697);
   puSF_stack_10->SetBinError(286,0.07165488);
   puSF_stack_10->SetBinError(288,0.04808095);
   puSF_stack_10->SetBinError(290,0.02390612);
   puSF_stack_10->SetBinError(292,0.08142068);
   puSF_stack_10->SetBinError(295,0.06394008);
   puSF_stack_10->SetBinError(296,0.09121609);
   puSF_stack_10->SetBinError(298,0.008242843);
   puSF_stack_10->SetBinError(299,0.08156934);
   puSF_stack_10->SetBinError(300,0.1012651);
   puSF_stack_10->SetBinError(303,0.4251206);
   puSF_stack_10->SetBinError(304,0.2732371);
   puSF_stack_10->SetBinError(305,0.3408585);
   puSF_stack_10->SetBinError(306,0.140239);
   puSF_stack_10->SetBinError(307,0.1201799);
   puSF_stack_10->SetBinError(308,0.1908336);
   puSF_stack_10->SetBinError(309,0.1394842);
   puSF_stack_10->SetBinError(310,0.2607511);
   puSF_stack_10->SetBinError(311,0.2311418);
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
   puSF_stack_11->SetBinContent(251,0.05743516);
   puSF_stack_11->SetBinContent(252,0.1449554);
   puSF_stack_11->SetBinContent(253,0.1613654);
   puSF_stack_11->SetBinContent(254,0.2789708);
   puSF_stack_11->SetBinContent(256,0.4239262);
   puSF_stack_11->SetBinContent(259,0.6864869);
   puSF_stack_11->SetBinContent(262,0.8998175);
   puSF_stack_11->SetBinContent(266,1.594509);
   puSF_stack_11->SetBinContent(268,0.01094003);
   puSF_stack_11->SetBinContent(271,2.152451);
   puSF_stack_11->SetBinContent(275,1.285454);
   puSF_stack_11->SetBinContent(276,3.033123);
   puSF_stack_11->SetBinContent(281,4.028666);
   puSF_stack_11->SetBinContent(286,5.267624);
   puSF_stack_11->SetBinContent(288,2.363046);
   puSF_stack_11->SetBinContent(290,0.6044366);
   puSF_stack_11->SetBinContent(292,7.138369);
   puSF_stack_11->SetBinContent(295,4.479942);
   puSF_stack_11->SetBinContent(296,9.09937);
   puSF_stack_11->SetBinContent(298,0.07111019);
   puSF_stack_11->SetBinContent(299,7.16572);
   puSF_stack_11->SetBinContent(300,10.85251);
   puSF_stack_11->SetBinContent(303,191.9729);
   puSF_stack_11->SetBinContent(304,79.37265);
   puSF_stack_11->SetBinContent(305,123.4719);
   puSF_stack_11->SetBinContent(306,20.79153);
   puSF_stack_11->SetBinContent(307,15.39536);
   puSF_stack_11->SetBinContent(308,38.44053);
   puSF_stack_11->SetBinContent(309,20.63563);
   puSF_stack_11->SetBinContent(310,72.46949);
   puSF_stack_11->SetBinContent(311,57.20542);
   puSF_stack_11->SetBinError(251,0.01253338);
   puSF_stack_11->SetBinError(252,0.01991115);
   puSF_stack_11->SetBinError(253,0.02100799);
   puSF_stack_11->SetBinError(254,0.02762222);
   puSF_stack_11->SetBinError(256,0.03405057);
   puSF_stack_11->SetBinError(259,0.04333067);
   puSF_stack_11->SetBinError(262,0.04960854);
   puSF_stack_11->SetBinError(266,0.06603783);
   puSF_stack_11->SetBinError(268,0.005470015);
   puSF_stack_11->SetBinError(271,0.07672659);
   puSF_stack_11->SetBinError(275,0.05929355);
   puSF_stack_11->SetBinError(276,0.09108027);
   puSF_stack_11->SetBinError(281,0.1049687);
   puSF_stack_11->SetBinError(286,0.1200291);
   puSF_stack_11->SetBinError(288,0.08039247);
   puSF_stack_11->SetBinError(290,0.04065881);
   puSF_stack_11->SetBinError(292,0.1397265);
   puSF_stack_11->SetBinError(295,0.1106918);
   puSF_stack_11->SetBinError(296,0.1577556);
   puSF_stack_11->SetBinError(298,0.01394586);
   puSF_stack_11->SetBinError(299,0.1399939);
   puSF_stack_11->SetBinError(300,0.1722838);
   puSF_stack_11->SetBinError(303,0.7246015);
   puSF_stack_11->SetBinError(304,0.4659236);
   puSF_stack_11->SetBinError(305,0.5811167);
   puSF_stack_11->SetBinError(306,0.2384638);
   puSF_stack_11->SetBinError(307,0.2051985);
   puSF_stack_11->SetBinError(308,0.3242455);
   puSF_stack_11->SetBinError(309,0.2375681);
   puSF_stack_11->SetBinError(310,0.4452018);
   puSF_stack_11->SetBinError(311,0.3955468);
   puSF_stack_11->SetEntries(249197);

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
   puSF_stack_12->SetBinContent(251,0.009646178);
   puSF_stack_12->SetBinContent(252,0.01643423);
   puSF_stack_12->SetBinContent(253,0.02250775);
   puSF_stack_12->SetBinContent(254,0.02679494);
   puSF_stack_12->SetBinContent(256,0.05787707);
   puSF_stack_12->SetBinContent(259,0.09360365);
   puSF_stack_12->SetBinContent(262,0.1293302);
   puSF_stack_12->SetBinContent(266,0.2097151);
   puSF_stack_12->SetBinContent(268,0.0007145317);
   puSF_stack_12->SetBinContent(271,0.2854554);
   puSF_stack_12->SetBinContent(275,0.1818483);
   puSF_stack_12->SetBinContent(276,0.4022813);
   puSF_stack_12->SetBinContent(281,0.5498321);
   puSF_stack_12->SetBinContent(286,0.7030992);
   puSF_stack_12->SetBinContent(288,0.3276128);
   puSF_stack_12->SetBinContent(290,0.07859849);
   puSF_stack_12->SetBinContent(292,0.9517562);
   puSF_stack_12->SetBinContent(295,0.541615);
   puSF_stack_12->SetBinContent(296,1.167545);
   puSF_stack_12->SetBinContent(298,0.01286157);
   puSF_stack_12->SetBinContent(299,0.9120997);
   puSF_stack_12->SetBinContent(300,1.413701);
   puSF_stack_12->SetBinContent(303,25.20618);
   puSF_stack_12->SetBinContent(304,10.43323);
   puSF_stack_12->SetBinContent(305,16.06517);
   puSF_stack_12->SetBinContent(306,2.698429);
   puSF_stack_12->SetBinContent(307,2.030342);
   puSF_stack_12->SetBinContent(308,5.01637);
   puSF_stack_12->SetBinContent(309,2.697);
   puSF_stack_12->SetBinContent(310,9.355363);
   puSF_stack_12->SetBinContent(311,7.340741);
   puSF_stack_12->SetBinError(251,0.001856408);
   puSF_stack_12->SetBinError(252,0.002423095);
   puSF_stack_12->SetBinError(253,0.00283571);
   puSF_stack_12->SetBinError(254,0.003094013);
   puSF_stack_12->SetBinError(256,0.004547252);
   puSF_stack_12->SetBinError(259,0.005782853);
   puSF_stack_12->SetBinError(262,0.006797446);
   puSF_stack_12->SetBinError(266,0.008655867);
   puSF_stack_12->SetBinError(268,0.0005052502);
   puSF_stack_12->SetBinError(271,0.01009869);
   puSF_stack_12->SetBinError(275,0.008060285);
   puSF_stack_12->SetBinError(276,0.01198839);
   puSF_stack_12->SetBinError(281,0.01401557);
   puSF_stack_12->SetBinError(286,0.01584908);
   puSF_stack_12->SetBinError(288,0.01081873);
   puSF_stack_12->SetBinError(290,0.005299109);
   puSF_stack_12->SetBinError(292,0.0184399);
   puSF_stack_12->SetBinError(295,0.01391045);
   puSF_stack_12->SetBinError(296,0.02042361);
   puSF_stack_12->SetBinError(298,0.002143595);
   puSF_stack_12->SetBinError(299,0.01805165);
   puSF_stack_12->SetBinError(300,0.0224737);
   puSF_stack_12->SetBinError(303,0.09489629);
   puSF_stack_12->SetBinError(304,0.06105275);
   puSF_stack_12->SetBinError(305,0.07575974);
   puSF_stack_12->SetBinError(306,0.03104926);
   puSF_stack_12->SetBinError(307,0.02693273);
   puSF_stack_12->SetBinError(308,0.04233412);
   puSF_stack_12->SetBinError(309,0.03104104);
   puSF_stack_12->SetBinError(310,0.05781308);
   puSF_stack_12->SetBinError(311,0.05121129);
   puSF_stack_12->SetEntries(248940);

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
   
   TH1D *puSF__7 = new TH1D("puSF__7","",200,-2,2);
   puSF__7->SetEntries(199);

   ci = TColor::GetColor("#000099");
   puSF__7->SetLineColor(ci);
   puSF__7->SetLineWidth(2);
   puSF__7->SetMarkerStyle(20);
   puSF__7->SetMarkerSize(1.2);
   puSF__7->GetXaxis()->SetRange(1,200);
   puSF__7->GetXaxis()->SetLabelFont(42);
   puSF__7->GetXaxis()->SetTitleOffset(1);
   puSF__7->GetXaxis()->SetTitleFont(42);
   puSF__7->GetYaxis()->SetLabelFont(42);
   puSF__7->GetYaxis()->SetTitleFont(42);
   puSF__7->GetZaxis()->SetLabelFont(42);
   puSF__7->GetZaxis()->SetTitleOffset(1);
   puSF__7->GetZaxis()->SetTitleFont(42);
   puSF__7->Draw("same E");
   
   Double_t Graph_from_puSF_fx1007[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_puSF_fy1007[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 9.06258e+07, 1.951745e+08, 2.299151e+08, 3.885927e+08, 0, 6.618539e+08, 0,
   0, 1.054537e+09, 0, 0, 1.639229e+09, 0, 0, 0, 2.425817e+09, 0, 1.035067e+07, 0, 0, 3.467886e+09, 0, 0,
   0, 2.0439e+09, 4.837614e+09, 0, 0, 0, 0, 6.510228e+09, 0, 0, 0, 0, 8.648614e+09, 0, 3.870656e+09, 0,
   9.687557e+08, 0, 1.108794e+10, 0, 0, 6.846776e+09, 1.399578e+10, 0, 1.189084e+08, 1.125622e+10, 1.723213e+10, 0, 0, 3.042314e+11, 1.258142e+11, 1.956828e+11,
   3.318526e+10, 2.434097e+10, 6.138956e+10, 3.267927e+10, 1.143099e+11, 9.011494e+10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0 };
   Double_t Graph_from_puSF_fex1007[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_puSF_fey1007[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1321782, 1939112, 2105960, 2736796, 0, 3572283, 0,
   0, 4507703, 0, 0, 5621580, 0, 0, 0, 6839224, 0, 446106.7, 0, 0, 8176387, 0, 0,
   0, 6276610, 9656742, 0, 0, 0, 0, 1.120205e+07, 0, 0, 0, 0, 1.29147e+07, 0, 8636914, 0,
   4321763, 0, 1.461931e+07, 0, 0, 1.148796e+07, 1.642572e+07, 0, 1514795, 1.473223e+07, 1.822711e+07, 0, 0, 7.658589e+07, 4.925176e+07, 6.142259e+07,
   2.529495e+07, 2.166367e+07, 3.440367e+07, 2.510057e+07, 4.694468e+07, 4.168283e+07, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_puSF_fx1007,Graph_from_puSF_fy1007,Graph_from_puSF_fex1007,Graph_from_puSF_fey1007);
   gre->SetName("Graph_from_puSF");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_puSF1007 = new TH1F("Graph_Graph_from_puSF1007","",500,-6,6);
   Graph_Graph_from_puSF1007->SetMinimum(0);
   Graph_Graph_from_puSF1007->SetMaximum(3.347388e+11);
   Graph_Graph_from_puSF1007->SetDirectory(nullptr);
   Graph_Graph_from_puSF1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_puSF1007->SetLineColor(ci);
   Graph_Graph_from_puSF1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_puSF1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_puSF1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_puSF1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_puSF1007);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("puSF","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   puSF__16->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",200,-2,2);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("PU Scale Factor");
   data_mc_ratio__8->GetXaxis()->SetRange(1,200);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1008[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1008[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1008[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01458505, 0.009935277, 0.00915973, 0.007042839, 0, 0.005397389, 0,
   0, 0.004274581, 0, 0, 0.003429404, 0, 0, 0, 0.002819349, 0, 0.04309931, 0, 0, 0.002357744, 0, 0,
   0, 0.003070899, 0.001996178, 0, 0, 0, 0, 0.001720684, 0, 0, 0, 0, 0.001493268, 0, 0.002231383, 0,
   0.004461148, 0, 0.001318487, 0, 0, 0.001677865, 0.001173619, 0, 0.01273918, 0.001308808, 0.00105774, 0, 0, 0.0002517357, 0.0003914643, 0.0003138886,
   0.0007622343, 0.0008900083, 0.0005604157, 0.0007680885, 0.0004106792, 0.0004625518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.9482808);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.051719);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   puSF__16->cd();
   puSF__16->Modified();
   puSF__16->cd();
   puSF__16->SetSelected(puSF__16);
}
