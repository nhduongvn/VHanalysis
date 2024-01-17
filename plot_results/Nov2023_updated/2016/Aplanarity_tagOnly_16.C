#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Wed Jan 10 10:25:20 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(0,0,1,1);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7094.945,1.052419,7087860);
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
   st->SetMaximum(6378364);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(6378364);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,2321483);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,344291.8);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,86655.02);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,26990.21);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,7830.197);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,4162.226);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,2586.59);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,735.6508);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,1268.451);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,146.6259);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,228.6727);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,440.6434);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,108.1627);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,9.344625);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,44.93877);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.5025456);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,13.56949);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,43607.75);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,27274.66);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,5630.414);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2921.721);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,1112.872);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,826.1545);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,611.753);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,108.5913);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,500.3427);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,44.68614);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,62.84205);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,295.2598);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,41.77541);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,6.968396);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,23.44208);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.5025456);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,9.311903);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(180753);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,24762.85);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,3644.237);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,930.7934);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,316.3703);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,115.8403);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,57.5276);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,32.64847);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,17.07552);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,12.14749);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,8.552739);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,4.788364);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.883006);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,2.192555);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.9834294);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.7486609);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4755771);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1499827);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.4987214);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.08435107);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(20,0.4053373);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,63.60629);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,24.34392);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,12.39904);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,7.292542);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,4.279813);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,3.136072);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.439731);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.715783);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.511178);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.307304);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.9061016);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.465063);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.6203275);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3962864);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3326273);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.3009473);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.0868154);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.3549818);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.05973431);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(20,0.3178161);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(388589);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,402643.2);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,58407.7);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,15196.95);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,5438.072);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,2389.113);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,1195.205);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,643.5696);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,369.9651);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,228.0253);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,136.0895);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,89.12046);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,54.80076);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,36.34366);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,22.64985);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,15.53242);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,7.322012);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,4.910766);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.472843);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.780349);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.2920046);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.353875);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1644922);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,168.4159);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,64.0659);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,32.60577);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,19.47236);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,12.88012);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,9.104626);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,6.679262);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,5.057024);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.971309);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,3.064304);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.478366);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.957245);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.587286);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.253397);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,1.045967);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.711349);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.5878709);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.4147821);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.3481201);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1333409);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1589489);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.1163982);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(7208289);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,17927.88);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,2119.593);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,534.1263);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,170.7104);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,67.03696);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,29.5387);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,18.98921);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,8.921583);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.853478);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,10.14215);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.343214);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,1.699963);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.7940605);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.8539396);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1578672);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.3999637);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,102.1354);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,41.23747);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,20.56013);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,11.54913);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,6.122748);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,3.443397);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.805663);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,1.173877);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.6640007);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,4.302947);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.6255462);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.5143094);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2524928);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.362995);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.111718);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.3201136);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(161051);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,10511.98);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,1143.631);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,321.3155);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,105.7822);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,33.84707);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,35.02767);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,25.11633);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,6.448141);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,2.345259);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,3.239049);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,1.181527);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.285956);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.4885065);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.0002339101);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(15,0.2394103);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(20,0.1263441);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,118.4606);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,42.3284);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,26.67491);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,14.36007);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,4.095369);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,10.11401);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,9.668322);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,1.76131);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.6531921);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,1.660138);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3566718);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.5397353);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.2387513);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.0002339101);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(15,0.2394103);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(20,0.09196662);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(110437);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,92.77195);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,9.983797);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,2.514042);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.8604656);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,0.7518516);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.1429283);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.269395);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,3.631336);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,1.191558);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.5962549);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.351949);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,0.3378896);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.1429283);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.1905677);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,249.2929);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,26.94683);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,4.526425);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,2.944247);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.6770819);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.7146922);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(7,0.1287545);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1075422);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,5.390472);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.776769);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,0.7181385);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.5913401);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.276852);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.2930699);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(7,0.1287545);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1075422);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(2494);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,182.2288);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,21.76366);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,4.694887);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.579629);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(5,1.038018);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(6,0.9368669);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(8,0.288156);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,6.881211);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,2.368873);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,1.100859);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.6456386);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(5,0.5191947);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(6,0.474241);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(8,0.288156);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,81.10199);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,8.300102);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.842188);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.5704808);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2581158);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1257446);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.07221613);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.03433827);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.02310642);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01675279);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.00538293);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.005353905);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.004318442);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(15,0.002520855);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(17,0.001476063);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(20,0.001549001);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.3349716);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.1071655);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.05052889);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02797301);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01882205);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.0132494);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.009885174);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.0067482);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005620946);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.00487988);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.00269178);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002679277);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002504522);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(15,0.001783066);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(17,0.001476063);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(20,0.001549001);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(67909);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,40.32266);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,4.615031);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.086199);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3586034);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1746145);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06684835);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.05191904);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02401376);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01492201);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.009750229);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004499333);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003434505);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.002215275);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.002280565);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0006389837);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.000471394);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.000471394);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0004293356);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1333259);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.04508831);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.0218398);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01257544);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.008739438);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.00539);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004776421);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.003253119);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002562776);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002031495);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001408907);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.00118368);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0009917404);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001020741);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0004786795);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.000471394);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.000471394);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0004293356);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(107972);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,2.130199);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1964392);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.04596482);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01676548);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.002668992);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.07656969);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.02326207);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.01126965);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.006853443);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.002668992);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.9960887);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.1090449);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02800761);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.008882933);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.003417138);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.001319481);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0008095775);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.002021428);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0003829271);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(17,0.0003753755);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01947693);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.006432696);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.003260961);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001830761);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.00114096);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0006825484);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0005736672);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0008534785);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0003829271);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(17,0.0003753755);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__91 = new TH1D("VH_tagOnly_Aplanarity__91","",50,0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(1,2870264);
   VH_tagOnly_Aplanarity__91->SetBinContent(2,399981);
   VH_tagOnly_Aplanarity__91->SetBinContent(3,101404);
   VH_tagOnly_Aplanarity__91->SetBinContent(4,33342);
   VH_tagOnly_Aplanarity__91->SetBinContent(5,12885);
   VH_tagOnly_Aplanarity__91->SetBinContent(6,6151);
   VH_tagOnly_Aplanarity__91->SetBinContent(7,3260);
   VH_tagOnly_Aplanarity__91->SetBinContent(8,1797);
   VH_tagOnly_Aplanarity__91->SetBinContent(9,1087);
   VH_tagOnly_Aplanarity__91->SetBinContent(10,664);
   VH_tagOnly_Aplanarity__91->SetBinContent(11,397);
   VH_tagOnly_Aplanarity__91->SetBinContent(12,254);
   VH_tagOnly_Aplanarity__91->SetBinContent(13,180);
   VH_tagOnly_Aplanarity__91->SetBinContent(14,95);
   VH_tagOnly_Aplanarity__91->SetBinContent(15,77);
   VH_tagOnly_Aplanarity__91->SetBinContent(16,28);
   VH_tagOnly_Aplanarity__91->SetBinContent(17,20);
   VH_tagOnly_Aplanarity__91->SetBinContent(18,11);
   VH_tagOnly_Aplanarity__91->SetBinContent(19,10);
   VH_tagOnly_Aplanarity__91->SetBinContent(20,8);
   VH_tagOnly_Aplanarity__91->SetEntries(3431965);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__91->SetLineColor(ci);
   VH_tagOnly_Aplanarity__91->SetLineWidth(2);
   VH_tagOnly_Aplanarity__91->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__91->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1091[50] = { 2777977, 409678.8, 103652.9, 33027.48, 10438.94, 5481.516, 3307.437, 1138.517, 1514.861, 304.6759, 326.1161, 500.3218, 147.988, 33.83436, 61.61964, 8.700737, 18.63256,
   2.971564, 1.865171, 0.825235, 0.3543044, 0.1644922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1091[50] = { 43608.4, 27274.81, 5630.623, 2921.853, 1112.979, 826.2799, 611.8734, 108.7436, 500.3616, 45.04689, 62.90155, 295.2676, 41.8116, 7.100588, 23.46925, 0.9755059, 9.330845,
   0.5459453, 0.3532082, 0.3567172, 0.1589495, 0.1163982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1091,Graph_from_VH_tagOnly_Aplanarity_fy1091,Graph_from_VH_tagOnly_Aplanarity_fex1091,Graph_from_VH_tagOnly_Aplanarity_fey1091);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1091 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMaximum(3103744);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_16->cd();
  
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.033221);
   data_mc_ratio__92->SetBinContent(2,0.9763282);
   data_mc_ratio__92->SetBinContent(3,0.9783031);
   data_mc_ratio__92->SetBinContent(4,1.009523);
   data_mc_ratio__92->SetBinContent(5,1.234321);
   data_mc_ratio__92->SetBinContent(6,1.122135);
   data_mc_ratio__92->SetBinContent(7,0.9856575);
   data_mc_ratio__92->SetBinContent(8,1.578369);
   data_mc_ratio__92->SetBinContent(9,0.7175576);
   data_mc_ratio__92->SetBinContent(10,2.179365);
   data_mc_ratio__92->SetBinContent(11,1.217358);
   data_mc_ratio__92->SetBinContent(12,0.5076732);
   data_mc_ratio__92->SetBinContent(13,1.216315);
   data_mc_ratio__92->SetBinContent(14,2.807796);
   data_mc_ratio__92->SetBinContent(15,1.249602);
   data_mc_ratio__92->SetBinContent(16,3.218118);
   data_mc_ratio__92->SetBinContent(17,1.07339);
   data_mc_ratio__92->SetBinContent(18,3.701754);
   data_mc_ratio__92->SetBinContent(19,5.361438);
   data_mc_ratio__92->SetBinContent(20,9.694208);
   data_mc_ratio__92->SetBinError(1,0.0006098629);
   data_mc_ratio__92->SetBinError(2,0.001543747);
   data_mc_ratio__92->SetBinError(3,0.003072175);
   data_mc_ratio__92->SetBinError(4,0.005528666);
   data_mc_ratio__92->SetBinError(5,0.01087391);
   data_mc_ratio__92->SetBinError(6,0.01430778);
   data_mc_ratio__92->SetBinError(7,0.01726304);
   data_mc_ratio__92->SetBinError(8,0.03723355);
   data_mc_ratio__92->SetBinError(9,0.02176416);
   data_mc_ratio__92->SetBinError(10,0.08457578);
   data_mc_ratio__92->SetBinError(11,0.06109743);
   data_mc_ratio__92->SetBinError(12,0.03185425);
   data_mc_ratio__92->SetBinError(13,0.09065875);
   data_mc_ratio__92->SetBinError(14,0.2880738);
   data_mc_ratio__92->SetBinError(15,0.1424053);
   data_mc_ratio__92->SetBinError(16,0.6081671);
   data_mc_ratio__92->SetBinError(17,0.2400172);
   data_mc_ratio__92->SetBinError(18,1.116121);
   data_mc_ratio__92->SetBinError(19,1.695435);
   data_mc_ratio__92->SetBinError(20,3.42742);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(47.35498);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.0156979, 0.06657607, 0.05432188, 0.08846734, 0.106618, 0.1507393, 0.1849993, 0.09551336, 0.330302, 0.1478518, 0.1928808, 0.5901552, 0.2825337, 0.2098632, 0.3808729, 0.1121176, 0.5007817,
   0.1837232, 0.1893704, 0.4322613, 0.4486241, 0.7076211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1508546);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849145);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}
