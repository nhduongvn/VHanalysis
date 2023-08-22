void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Tue Aug 22 09:22:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(0,0,1,1);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-150.1702,6.314516,150320);
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
   st->SetMaximum(128831.4);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0.3);
   st_stack_212->SetMaximum(135273);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetLabelSize(0.035);
   st_stack_212->GetXaxis()->SetTitleSize(0.035);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetLabelSize(0.05);
   st_stack_212->GetYaxis()->SetTitleSize(0.057);
   st_stack_212->GetYaxis()->SetTitleOffset(1.2);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetLabelSize(0.035);
   st_stack_212->GetZaxis()->SetTitleSize(0.035);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,40912.94);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,41194.71);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,53954);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,26545.94);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,21746.19);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,23648.97);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,16254.32);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,17884.11);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,22303.02);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,22278.15);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,22972.41);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,24340.13);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,28225.75);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,24725.94);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,25456.26);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,36049.93);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,17742.23);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,15776.06);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,11728.16);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,11066.97);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,9636.296);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,8474.44);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,8537.79);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,5562.257);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,4434.791);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,4896.549);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,3681.11);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(30,1770.379);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(31,2220.461);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,2552.872);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,2789.033);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,20881.58);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,2318.274);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,1871.387);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,3083.83);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,1470.127);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,1691.258);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,2450.697);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,2250.222);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,2380.778);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,2478.17);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,2802.568);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,2300.832);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,2247.377);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,16633.59);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,1820.318);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,1732.789);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,1669.154);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,1377.795);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,1522.373);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,1346.378);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,1504.497);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,945.2008);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,767.6723);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,792.4095);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,626.0073);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(30,252.3028);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(31,607.2349);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.1231355);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,113.1031);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,153.5962);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,133.3276);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,148.642);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,147.7623);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,144.4815);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,145.1221);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,133.9621);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,137.9791);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,141.4387);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,146.7488);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,131.669);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,150.2587);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,131.2219);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,107.5643);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,114.63);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,93.21718);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,81.18456);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,79.94493);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,68.34558);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,64.96036);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,48.14944);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,44.1192);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,43.34285);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,28.73498);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,34.17494);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,22.18839);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(30,17.31861);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(31,12.64303);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.08787723);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,4.549805);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,5.257022);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,4.832787);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,5.273425);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,5.156141);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,5.113829);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,5.102417);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,4.905039);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,4.950085);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,4.997211);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,5.223504);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,4.818502);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,5.359626);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,4.750801);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,4.336716);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,4.583403);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,4.00263);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,3.769382);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,3.817866);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,3.453239);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,3.461673);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,2.909984);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,2.754849);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,2.840602);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,2.221779);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,3.354792);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,1.969968);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(30,1.735332);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(31,1.519723);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(2,2.342841);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(3,2101.051);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(4,3111.158);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(5,3229.63);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(6,3350.056);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(7,3309.983);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(8,3190.94);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(9,3067.362);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(10,2973.124);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(11,2947.018);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(12,2904.809);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(13,2901.141);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(14,2864.067);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(15,2796.961);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(16,2697.722);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(17,2506.313);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(18,2292.879);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(19,2058.946);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(20,1851.996);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(21,1640.155);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(22,1436.874);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(23,1253.079);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(24,1093.205);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(25,922.8585);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(26,817.1319);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(27,705.6126);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(28,569.0813);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(29,456.2278);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(30,300.1935);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(31,224.487);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(2,0.4236015);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(3,12.26998);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(4,15.24959);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(5,15.23874);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(6,15.44754);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(7,15.47782);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(8,15.41611);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(9,15.08661);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(10,14.53059);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(11,14.39661);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(12,14.44502);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(13,14.30725);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(14,14.34102);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(15,14.15251);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(16,14.15705);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(17,13.69207);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(18,13.42681);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(19,12.14703);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(20,11.82841);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(21,10.99241);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(22,10.15567);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(23,9.315049);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(24,8.778821);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(25,7.995581);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(26,7.692643);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(27,8.30235);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(28,7.016281);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(29,6.03881);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(30,4.643055);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(31,3.981546);
   VbbHcc_both_Z_dR_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(2,0.1965732);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(3,421.2255);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(4,608.4489);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(5,577.0108);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(6,510.8509);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(7,399.6224);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(8,337.5679);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(9,301.645);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(10,266.4096);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(11,298.3808);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(12,301.5871);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(13,320.6791);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(14,354.4765);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(15,322.6019);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(16,332.3932);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(17,292.4654);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(18,267.167);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(19,259.8245);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(20,238.9548);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(21,170.2471);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(22,159.9554);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(23,131.1659);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(24,116.1845);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(25,103.5484);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(26,106.7417);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(27,82.40264);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(28,76.15486);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(29,68.48747);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(30,51.40513);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(31,26.01699);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(2,0.1140209);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(3,8.412677);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(4,12.59509);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(5,15.74375);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(6,20.16424);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(7,14.47769);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(8,11.55016);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(9,12.12159);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(10,10.23315);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(11,16.32551);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(12,11.40269);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(13,16.06302);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(14,15.51888);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(15,11.77468);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(16,14.06968);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(17,10.67094);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(18,9.990973);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(19,14.50436);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(20,12.93361);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(21,7.292485);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(22,7.528676);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(23,7.454171);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(24,8.30213);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(25,6.339014);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(26,10.70234);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(27,4.873237);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(28,4.70115);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(29,6.12256);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(30,7.241213);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(31,2.425306);
   VbbHcc_both_Z_dR_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(2,0.0002518302);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(3,83.69694);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(4,71.84936);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(5,39.40652);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(6,46.71723);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(7,30.75934);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(8,38.93888);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(9,38.55576);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(10,23.94438);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(11,33.59235);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(12,26.34028);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(13,29.755);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(14,32.71847);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(15,36.67696);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(16,32.0439);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(17,28.41924);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(18,25.18504);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(19,17.27248);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(20,16.86804);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(21,17.89766);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(22,11.77283);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(23,13.9037);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(24,8.974092);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(25,15.42029);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(26,15.3093);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(27,6.540361);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(28,8.127899);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(29,8.269198);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(30,6.798586);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(31,3.678103);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(2,0.0002518302);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(3,7.944977);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(4,6.26197);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(5,4.008891);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(6,9.492496);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(7,2.922415);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(8,5.6776);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(9,6.727231);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(10,3.914573);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(11,5.205011);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(12,3.467102);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(13,4.396053);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(14,4.52185);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(15,6.867041);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(16,5.162375);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(17,3.98362);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(18,3.132328);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(19,1.884574);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(20,3.264355);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(21,2.964175);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(22,1.478597);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(23,3.123925);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(24,1.59223);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(25,7.880018);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(26,4.09269);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(27,1.428567);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(28,1.588642);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(29,1.409633);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(30,1.231656);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(31,1.425979);
   VbbHcc_both_Z_dR_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(3,0.07803031);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(5,0.2950387);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(7,0.1195687);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(9,0.7327901);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(11,0.1173155);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(12,0.2295285);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(13,0.1234178);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(14,0.4684864);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(17,0.3752659);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(22,0.2579188);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(25,0.1297649);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(28,0.1294336);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(3,0.07803031);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(4,0.6225638);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(5,0.2950387);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(7,0.1195687);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(9,0.5254005);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(11,0.1173155);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(12,0.1623026);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(13,0.1234178);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(14,0.3312753);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(17,0.3752659);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(22,0.1824914);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(25,0.1297649);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(28,0.1294336);
   VbbHcc_both_Z_dR_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(3,0.5662994);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(4,1.07994);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(5,0.5529325);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(6,0.1823739);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(7,0.09813325);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(8,0.0778465);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(9,0.9125297);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(10,0.1786943);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(11,0.1593737);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(13,0.2604592);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(14,0.7960053);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(15,0.3988554);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(16,0.1887101);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(17,0.658047);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(19,0.08558222);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(21,0.09227263);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(22,0.0686903);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(24,0.2458232);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(25,0.0797212);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(3,0.2322378);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(4,0.6554732);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(5,0.3306556);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(6,0.1290231);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(7,0.09813325);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(8,0.0778465);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(9,0.5407398);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(10,0.1263656);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(11,0.1127139);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(13,0.1507859);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(14,0.3727975);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(15,0.199824);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(16,0.1335244);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(17,0.4092644);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(18,0.09132081);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(19,0.08558222);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(21,0.09227263);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(22,0.0686903);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(24,0.1421161);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(25,0.0797212);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(29,0.08656424);
   VbbHcc_both_Z_dR_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(3,9.670194);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(4,16.93126);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(5,19.52176);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(6,8.740422);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(7,4.761071);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(8,4.532187);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(9,4.342272);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(10,2.226887);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(11,3.265533);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(12,3.457816);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(13,5.280342);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(14,6.576971);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(15,9.382057);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(16,5.873529);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(17,4.544867);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(18,5.813244);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(19,4.818248);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(20,4.392377);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(21,2.71108);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(22,2.286113);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(23,2.876866);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(24,1.121141);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(25,0.8827327);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(26,1.814057);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(27,1.324937);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(28,3.042223);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(29,1.149396);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(30,1.655253);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(31,0.5376222);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(3,1.626945);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(4,2.114828);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(5,2.311541);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(6,1.49384);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(7,1.145877);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(8,1.12284);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(9,1.059589);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(10,0.7315304);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(11,0.8635822);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(12,0.917364);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(13,1.181433);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(14,1.338881);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(15,1.66839);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(16,1.276655);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(17,1.053965);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(18,1.21938);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(19,1.133114);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(20,1.144644);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(21,0.8722869);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(22,0.7277789);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(23,0.9488041);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(24,0.5644072);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(25,0.5566044);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(26,0.6949543);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(27,0.5440202);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(28,0.9347502);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(29,0.5205039);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(30,0.6316775);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(31,0.3847571);
   VbbHcc_both_Z_dR_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(2,0.001188163);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(3,8.16503);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(4,15.34701);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(5,14.7163);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(6,11.35546);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(7,7.33306);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(8,4.528487);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(9,3.207051);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(10,3.15629);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(11,3.628956);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(12,4.387388);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(13,5.313651);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(14,6.377744);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(15,6.81565);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(16,6.990596);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(17,6.72612);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(18,6.006658);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(19,5.02662);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(20,3.779395);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(21,2.639761);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(22,1.973383);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(23,1.5564);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(24,1.128769);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(25,1.067791);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(26,1.298829);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(27,1.341543);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(28,1.596026);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(29,1.383117);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(30,0.7905976);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(31,0.412375);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(2,0.001188163);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(3,0.1387719);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(4,0.1976019);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(5,0.1854166);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(6,0.1657171);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(7,0.1359565);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(8,0.09956042);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(9,0.08252956);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(10,0.0826082);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(11,0.09399222);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(12,0.1072185);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(13,0.1129139);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(14,0.1292934);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(15,0.1278742);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(16,0.1385674);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(17,0.1333806);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(18,0.120603);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(19,0.1140908);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(20,0.09405568);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(21,0.08073106);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(22,0.0671126);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(23,0.1327547);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(24,0.05474061);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(25,0.04781362);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(26,0.05354848);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(27,0.05628547);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(28,0.06517991);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(29,0.05658981);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(30,0.04370099);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(31,0.02949931);
   VbbHcc_both_Z_dR_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(3,2.299224);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(4,4.693153);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(5,5.56583);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(6,4.949971);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(7,3.65113);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(8,2.531826);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(9,1.901955);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(10,1.734469);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(11,1.700112);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(12,1.843944);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(13,2.04138);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(14,2.075116);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(15,2.110278);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(16,2.061172);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(17,1.984695);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(18,1.82305);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(19,1.544279);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(20,1.333233);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(21,1.103885);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(22,0.9349584);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(23,0.6935092);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(24,0.6278822);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(25,0.6286591);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(26,0.6599243);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(27,0.7156474);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(28,0.5946188);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(29,0.4840211);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(30,0.2969167);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(31,0.1548085);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(3,0.03318799);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(4,0.04657206);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(5,0.05015234);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(6,0.04686852);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(7,0.04012199);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(8,0.03343363);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(9,0.02903269);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(10,0.02784037);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(11,0.02758154);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(12,0.02870305);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(13,0.03014439);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(14,0.03041746);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(15,0.03074716);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(16,0.03036332);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(17,0.02979117);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(18,0.02851046);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(19,0.02627148);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(20,0.02435734);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(21,0.02224238);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(22,0.02047496);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(23,0.01757427);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(24,0.01668289);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(25,0.01675405);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(26,0.01704424);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(27,0.01785297);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(28,0.01636058);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(29,0.01489465);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(30,0.01166198);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(31,0.00842669);
   VbbHcc_both_Z_dR_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(3,0.05936722);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(4,0.06674432);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(5,0.06803986);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(6,0.04543015);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(7,0.01348564);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(8,0.01140368);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(9,0.009104527);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(10,0.00542032);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(11,0.01270311);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(12,0.01044107);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(13,0.01252245);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(14,0.008437023);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(15,0.01631891);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(16,0.008719596);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(17,0.008576591);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(18,0.004116352);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(19,0.004243564);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(20,0.002009449);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(22,0.003770382);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(23,0.01469442);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(25,0.003260446);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(27,0.003394154);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(28,0.003274426);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(29,0.01209951);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(30,0.002200582);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(3,0.01111992);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(4,0.01203993);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(5,0.01178309);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(6,0.009740488);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(7,0.005073263);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(8,0.004722838);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(9,0.004211856);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(10,0.003163741);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(11,0.005199649);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(12,0.004035716);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(13,0.005238595);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(14,0.004248394);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(15,0.005899304);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(16,0.004040535);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(17,0.004332622);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(18,0.002911577);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(19,0.003001649);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(20,0.001669739);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(22,0.002667107);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(23,0.005711196);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(25,0.00232838);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(26,0.002438184);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(27,0.00251105);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(28,0.002354108);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(29,0.0054311);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(30,0.002200582);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(31,0.001291342);
   VbbHcc_both_Z_dR_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(3,0.01534248);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(4,0.02840499);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(5,0.03184644);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(6,0.02111475);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(7,0.01263012);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(8,0.007552342);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(9,0.005781309);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(10,0.005663586);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(11,0.006439801);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(12,0.006215749);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(13,0.006354884);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(14,0.004397931);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(15,0.004178512);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(16,0.003888426);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(17,0.00475463);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(18,0.004706449);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(19,0.00462791);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(20,0.0045616);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(21,0.003677399);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(22,0.001952908);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(23,0.003361333);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(24,0.001571135);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(25,0.002583373);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(26,0.001581862);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(27,0.002595038);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(28,0.003834666);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(29,0.001578304);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(30,0.0007470728);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(31,0.0008908769);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(3,0.002107143);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(4,0.002868295);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(5,0.003004861);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(6,0.002456596);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(7,0.001931081);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(8,0.001406762);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(9,0.001324965);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(10,0.001245426);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(11,0.001414359);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(12,0.001307451);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(13,0.001330319);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(14,0.001096373);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(15,0.001037033);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(16,0.00102196);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(17,0.001158976);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(18,0.001123493);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(19,0.001120047);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(20,0.001137005);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(21,0.001038981);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(22,0.0007011082);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(23,0.0009801819);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(24,0.0006506513);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(25,0.0007607892);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(26,0.0006623784);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(27,0.0008612709);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(28,0.001078854);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(29,0.0006623959);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(30,0.0004428868);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(31,0.0004583107);
   VbbHcc_both_Z_dR_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_all__582 = new TH1D("VbbHcc_both_Z_dR_all__582","",30,0,6);
   VbbHcc_both_Z_dR_all__582->SetBinContent(2,27);
   VbbHcc_both_Z_dR_all__582->SetBinContent(3,34641);
   VbbHcc_both_Z_dR_all__582->SetBinContent(4,38882);
   VbbHcc_both_Z_dR_all__582->SetBinContent(5,29432);
   VbbHcc_both_Z_dR_all__582->SetBinContent(6,26011);
   VbbHcc_both_Z_dR_all__582->SetBinContent(7,23521);
   VbbHcc_both_Z_dR_all__582->SetBinContent(8,21939);
   VbbHcc_both_Z_dR_all__582->SetBinContent(9,21006);
   VbbHcc_both_Z_dR_all__582->SetBinContent(10,20307);
   VbbHcc_both_Z_dR_all__582->SetBinContent(11,20288);
   VbbHcc_both_Z_dR_all__582->SetBinContent(12,20304);
   VbbHcc_both_Z_dR_all__582->SetBinContent(13,20841);
   VbbHcc_both_Z_dR_all__582->SetBinContent(14,21239);
   VbbHcc_both_Z_dR_all__582->SetBinContent(15,21805);
   VbbHcc_both_Z_dR_all__582->SetBinContent(16,21465);
   VbbHcc_both_Z_dR_all__582->SetBinContent(17,20063);
   VbbHcc_both_Z_dR_all__582->SetBinContent(18,18392);
   VbbHcc_both_Z_dR_all__582->SetBinContent(19,16748);
   VbbHcc_both_Z_dR_all__582->SetBinContent(20,14823);
   VbbHcc_both_Z_dR_all__582->SetBinContent(21,12851);
   VbbHcc_both_Z_dR_all__582->SetBinContent(22,10942);
   VbbHcc_both_Z_dR_all__582->SetBinContent(23,9109);
   VbbHcc_both_Z_dR_all__582->SetBinContent(24,7951);
   VbbHcc_both_Z_dR_all__582->SetBinContent(25,6806);
   VbbHcc_both_Z_dR_all__582->SetBinContent(26,5938);
   VbbHcc_both_Z_dR_all__582->SetBinContent(27,5409);
   VbbHcc_both_Z_dR_all__582->SetBinContent(28,4933);
   VbbHcc_both_Z_dR_all__582->SetBinContent(29,4705);
   VbbHcc_both_Z_dR_all__582->SetBinContent(30,3231);
   VbbHcc_both_Z_dR_all__582->SetBinContent(31,2340);
   VbbHcc_both_Z_dR_all__582->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all__582->SetLineColor(ci);
   VbbHcc_both_Z_dR_all__582->SetLineWidth(2);
   VbbHcc_both_Z_dR_all__582->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_all__582->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fx1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fy1423[30] = {
   0,
   2.66399,
   43652.87,
   45178.53,
   57974.13,
   30627.5,
   25650.31,
   27372.59,
   19818.11,
   21288.86,
   25728.88,
   25662.26,
   26383.77,
   27739.36,
   31550.98,
   27934.44,
   28405.33,
   38763.53,
   20182.97,
   17974.58,
   13642.96,
   12749.44,
   11104.55,
   9744.078,
   9626.531,
   6548.561,
   5261.47,
   5589.458,
   4239.399,
   2148.841};
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fex1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fey1423[30] = {
   0,
   0.4473956,
   2552.932,
   2789.116,
   20881.59,
   2318.439,
   1871.517,
   3083.9,
   1470.279,
   1691.363,
   2450.804,
   2250.306,
   2380.885,
   2478.269,
   2802.642,
   2300.93,
   2247.452,
   16633.6,
   1820.422,
   1732.886,
   1669.213,
   1377.859,
   1522.428,
   1346.436,
   1504.555,
   945.3061,
   767.7374,
   792.4637,
   626.0712,
   252.4592};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_all_fx1423,Graph_from_VbbHcc_both_Z_dR_all_fy1423,Graph_from_VbbHcc_both_Z_dR_all_fex1423,Graph_from_VbbHcc_both_Z_dR_all_fey1423);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_all1423 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_all1423","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMaximum(86741.29);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_all1423);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__583 = new TH1D("data_mc_ratio__583","",30,0,6);
   data_mc_ratio__583->SetBinContent(2,10.13517);
   data_mc_ratio__583->SetBinContent(3,0.7935561);
   data_mc_ratio__583->SetBinContent(4,0.86063);
   data_mc_ratio__583->SetBinContent(5,0.5076748);
   data_mc_ratio__583->SetBinContent(6,0.8492695);
   data_mc_ratio__583->SetBinContent(7,0.9169871);
   data_mc_ratio__583->SetBinContent(8,0.8014953);
   data_mc_ratio__583->SetBinContent(9,1.059939);
   data_mc_ratio__583->SetBinContent(10,0.9538794);
   data_mc_ratio__583->SetBinContent(11,0.7885302);
   data_mc_ratio__583->SetBinContent(12,0.7912008);
   data_mc_ratio__583->SetBinContent(13,0.7899173);
   data_mc_ratio__583->SetBinContent(14,0.7656628);
   data_mc_ratio__583->SetBinContent(15,0.6911038);
   data_mc_ratio__583->SetBinContent(16,0.7684062);
   data_mc_ratio__583->SetBinContent(17,0.7063112);
   data_mc_ratio__583->SetBinContent(18,0.4744666);
   data_mc_ratio__583->SetBinContent(19,0.8298084);
   data_mc_ratio__583->SetBinContent(20,0.8246648);
   data_mc_ratio__583->SetBinContent(21,0.9419511);
   data_mc_ratio__583->SetBinContent(22,0.8582336);
   data_mc_ratio__583->SetBinContent(23,0.8202944);
   data_mc_ratio__583->SetBinContent(24,0.8159828);
   data_mc_ratio__583->SetBinContent(25,0.7070044);
   data_mc_ratio__583->SetBinContent(26,0.9067641);
   data_mc_ratio__583->SetBinContent(27,1.02804);
   data_mc_ratio__583->SetBinContent(28,0.8825543);
   data_mc_ratio__583->SetBinContent(29,1.109827);
   data_mc_ratio__583->SetBinContent(30,1.503601);
   data_mc_ratio__583->SetBinContent(31,0.9403657);
   data_mc_ratio__583->SetBinError(2,1.950515);
   data_mc_ratio__583->SetBinError(3,0.004263659);
   data_mc_ratio__583->SetBinError(4,0.004364577);
   data_mc_ratio__583->SetBinError(5,0.002959209);
   data_mc_ratio__583->SetBinError(6,0.005265832);
   data_mc_ratio__583->SetBinError(7,0.005979093);
   data_mc_ratio__583->SetBinError(8,0.005411187);
   data_mc_ratio__583->SetBinError(9,0.007313232);
   data_mc_ratio__583->SetBinError(10,0.006693767);
   data_mc_ratio__583->SetBinError(11,0.005536033);
   data_mc_ratio__583->SetBinError(12,0.005552594);
   data_mc_ratio__583->SetBinError(13,0.005471701);
   data_mc_ratio__583->SetBinError(14,0.005253764);
   data_mc_ratio__583->SetBinError(15,0.004680209);
   data_mc_ratio__583->SetBinError(16,0.005244757);
   data_mc_ratio__583->SetBinError(17,0.004986527);
   data_mc_ratio__583->SetBinError(18,0.003498575);
   data_mc_ratio__583->SetBinError(19,0.006412042);
   data_mc_ratio__583->SetBinError(20,0.006773442);
   data_mc_ratio__583->SetBinError(21,0.008309213);
   data_mc_ratio__583->SetBinError(22,0.008204596);
   data_mc_ratio__583->SetBinError(23,0.008594772);
   data_mc_ratio__583->SetBinError(24,0.009151033);
   data_mc_ratio__583->SetBinError(25,0.008569908);
   data_mc_ratio__583->SetBinError(26,0.01176723);
   data_mc_ratio__583->SetBinError(27,0.01397821);
   data_mc_ratio__583->SetBinError(28,0.01256568);
   data_mc_ratio__583->SetBinError(29,0.01617989);
   data_mc_ratio__583->SetBinError(30,0.02645235);
   data_mc_ratio__583->SetBinError(31,0.2303046);
   data_mc_ratio__583->SetMinimum(0.4);
   data_mc_ratio__583->SetMaximum(1.6);
   data_mc_ratio__583->SetEntries(163.3429);
   data_mc_ratio__583->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__583->SetLineColor(ci);
   data_mc_ratio__583->SetLineWidth(2);
   data_mc_ratio__583->SetMarkerStyle(20);
   data_mc_ratio__583->SetMarkerSize(1.2);
   data_mc_ratio__583->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__583->GetXaxis()->SetRange(1,30);
   data_mc_ratio__583->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__583->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__583->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__583->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__583->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__583->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__583->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__583->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__583->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__583->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__583->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__583->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__583->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__583->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1424[30] = {
   0,
   0.1679419,
   0.05848258,
   0.06173542,
   0.3601881,
   0.07569796,
   0.07296276,
   0.1126638,
   0.07418867,
   0.0794483,
   0.09525498,
   0.08768932,
   0.09024052,
   0.08934123,
   0.08882902,
   0.08236891,
   0.07912078,
   0.4291044,
   0.09019594,
   0.0964076,
   0.1223498,
   0.1080721,
   0.1370994,
   0.1381799,
   0.1562925,
   0.1443533,
   0.1459169,
   0.1417783,
   0.1476792,
   0.1174862};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1424,Graph_from_mc_statistical_error_fy1424,Graph_from_mc_statistical_error_fex1424,Graph_from_mc_statistical_error_fey1424);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1424 = new TH1F("Graph_Graph_from_mc_statistical_error1424","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1424->SetMinimum(0.4850747);
   Graph_Graph_from_mc_statistical_error1424->SetMaximum(1.514925);
   Graph_Graph_from_mc_statistical_error1424->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1424->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1424);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
