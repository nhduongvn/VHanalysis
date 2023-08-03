void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Aug  3 10:20:57 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(0,0,1,1);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-70.0045,6.314516,69944.49);
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
   st->SetMaximum(59945.75);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(62943.04);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,9458.793);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,11087.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,9089.341);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,6529.693);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,7238.971);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,6266.533);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4598.617);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,5838.583);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,9337.218);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,6809.165);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,9690.252);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,9724.917);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,25597.79);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,24860.22);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,10354.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,7658.975);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,8634.198);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,6628.642);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,5225.287);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,3771.949);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,4096.074);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,3468.162);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2465.463);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,2015.049);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2005.518);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1868.178);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1243.204);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,673.1857);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,1364.53);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1047.714);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1290.503);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,1196.919);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,958.4068);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1124.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,955.3332);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,693.7573);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,915.5168);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1679.587);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,1028.946);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1700.834);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1283.58);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,14872.91);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,14861.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1262.625);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1036.462);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1166.013);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1027.044);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,910.8717);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,685.8188);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,822.6452);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,773.1589);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,614.8839);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,608.8675);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,549.9267);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,548.8298);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,393.9879);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,279.165);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,540.8688);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.04712387);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,23.4297);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,35.98763);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,31.06093);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,36.16731);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,32.4055);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,38.6065);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,45.17978);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,45.94166);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,47.30404);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,52.37901);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,55.9436);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,63.73625);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,57.79165);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,64.17708);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,50.25691);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,50.07074);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,40.38762);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,38.18974);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,30.92901);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,26.7227);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,24.23006);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,16.75805);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,14.26461);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,12.47057);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,9.693651);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,9.223236);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,6.45351);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,3.446055);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,3.086933);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.04712387);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,1.827088);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.316054);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.12213);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,2.447757);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.123806);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,2.390857);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,2.667449);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,2.608677);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,2.696138);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,2.890183);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,2.892528);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.204012);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,3.003016);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.205615);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,2.669741);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,2.831725);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,2.433543);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.303126);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.159967);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,1.988235);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.013774);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.61882);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.450814);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.40022);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.243037);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.232511);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.050395);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.6704314);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.6580171);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.504181);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,381.7138);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,596.23);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,637.3566);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,695.6976);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,737.6829);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,786.3687);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,822.6711);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,853.9734);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,930.2376);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,991.2792);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1082.768);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1127.461);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1172.786);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1209.42);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1126.758);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,1034.405);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,918.2378);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,779.5043);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,659.9058);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,529.6442);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,440.4647);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,346.7538);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,266.5353);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,216.1116);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,173.3158);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,135.7658);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,98.01568);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,62.73598);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,53.34271);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1650773);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,4.840346);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,6.083518);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,6.304004);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,6.591415);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,6.78134);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,7.000893);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,7.146909);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,7.282138);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,7.602929);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,7.85358);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,8.224112);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,8.393448);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,8.583085);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,8.718);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,8.416539);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,8.077059);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,7.600299);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,6.987907);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,6.42544);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,5.744632);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,5.248513);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,4.647724);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,4.055706);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,3.662572);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.269058);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.895973);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,2.452517);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,1.963085);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,1.820985);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,97.92044);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,146.6485);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,150.4508);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,155.547);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,108.3895);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,95.07159);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,84.04274);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,78.30389);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,98.42855);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,100.0531);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,117.7987);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,144.5971);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,127.3945);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,126.1268);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,131.7706);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,120.3985);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,104.7888);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,84.82711);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,58.97355);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,47.81097);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,51.4558);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,31.48914);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,27.57743);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,27.41303);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,23.04938);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,16.82862);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,13.69909);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,6.63172);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,6.936505);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,3.558265);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,5.050324);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,7.269425);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,9.182845);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,6.66355);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,6.458421);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,6.221827);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,4.915766);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,7.468307);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,6.973472);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,8.965442);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,9.374088);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,8.260945);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,6.380375);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,6.996487);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,6.865047);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,7.93602);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,6.312847);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,5.065571);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,4.098887);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,6.227877);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,2.600983);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,3.538913);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,4.480783);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.345451);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,1.607385);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.486953);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,1.065357);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,1.125061);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,25.51354);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,27.55663);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,9.18855);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,14.61869);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,16.61836);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,11.47825);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,10.28598);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,5.299082);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,14.05006);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,9.827662);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,9.752067);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,10.85885);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,11.28058);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,9.888849);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,5.426245);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,8.87302);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,6.302976);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,5.882692);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,5.117262);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,4.392889);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,5.805114);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,3.586932);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,2.281302);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,4.071643);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.917304);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,2.92196);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.530855);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,1.780099);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.5611526);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.630903);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,4.238462);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,1.104342);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,2.355518);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,6.910379);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,2.530563);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,2.214468);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,0.7851561);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,6.795628);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,2.256517);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,2.004733);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,2.261014);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,2.038683);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,2.228207);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,0.7786216);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,1.925791);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,0.9049914);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,1.001317);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,0.8947704);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,0.8231604);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,1.772739);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.339845);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.6424332);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,1.702105);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.4811182);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.249224);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.6361954);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.6022532);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.2782306);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.6306118);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.4459099);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.3153059);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.4958844);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.4958844);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.4294485);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.4294485);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.3506432);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.3506432);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3506432);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.2479422);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.304835);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,5.824189);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.025805);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,1.012902);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.7596768);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.266128);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,1.012902);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,0.7596768);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.519354);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,3.545159);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,2.785482);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.545159);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,1.772579);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.27903);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.012902);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.012902);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.7596768);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.8007697);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.044076);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.214427);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.7162302);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.4385996);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.5662297);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.4385996);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.3581151);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.6202735);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.8007697);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.9474835);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.8398543);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.9474835);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.669972);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.7596768);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.8007697);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.3581151);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.4385996);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.5064512);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2532256);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.4385996);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.670031);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,3.38367);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,3.417587);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,2.860372);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,2.049583);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.287248);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,0.9981422);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.078898);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.324396);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.687797);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,2.193329);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.660097);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,3.357828);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,3.72446);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,3.401436);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.957279);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.245012);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.681337);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.096664);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.7058061);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.4732292);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.3698618);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.3084873);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.3294838);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.3585559);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.3763222);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.303642);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.1502059);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.0952919);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.05193549);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.07392579);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.07429538);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.06796937);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.05753535);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.04559667);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.04015117);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.04174382);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.04624991);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.05221101);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.05951876);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.06554669);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.07364295);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.07755925);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.07411961);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.06911115);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.06021592);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.05211099);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.04208612);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03376328);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.02764635);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.02444115);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.02232136);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.02306848);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.0240647);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.02465369);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.02214537);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01557562);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01240595);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.594573);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.271657);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.511725);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.437921);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.170903);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.8495677);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.695327);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.6530352);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.6837175);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.8532994);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,0.9656629);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.081343);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.138562);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.217341);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.141464);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.015003);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.8408606);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.6799859);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.5303061);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.3914065);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.302262);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.2471168);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.2106298);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.2102151);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.2160199);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1770451);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1326802);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.08624211);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.04809656);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.01570112);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.02296217);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.02503597);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.02441718);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.02203375);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.01876839);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.01697941);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01645494);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.01683706);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.01880956);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02000971);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.02117434);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.02172733);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02246643);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.021755);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02051454);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01867196);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01679105);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.0148283);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.0127392);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01119489);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.0101223);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.009345185);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.009335982);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.009464004);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.008567813);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.007417047);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.005979815);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.004465654);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01264201);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.03002477);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01422226);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.007901256);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.01264201);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.0052411);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.004469625);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.006888155);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.004740753);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003533549);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.004469625);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002234813);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.002234813);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002234813);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.004982536);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.008719438);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.008511832);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.005397747);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.00332169);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.001660845);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.001660845);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001660845);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.001038028);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.002076057);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.001868451);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001660845);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.002076057);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001868451);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.001868451);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.001038028);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0008304226);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0002076057);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.001245634);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.0004152113);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.001017056);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001345438);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.001329325);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001058585);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0008304226);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0005871975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0005871975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0005871975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0004642204);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0006565067);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0005871975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0006565067);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.000622817);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0004642204);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0004152113);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0002076057);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0005085279);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0002935987);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003595835);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__35 = new TH1D("VbbHcc_tags_Z_dR__35","",30,0,6);
   VbbHcc_tags_Z_dR__35->SetBinContent(2,2);
   VbbHcc_tags_Z_dR__35->SetBinContent(3,3919);
   VbbHcc_tags_Z_dR__35->SetBinContent(4,4607);
   VbbHcc_tags_Z_dR__35->SetBinContent(5,3472);
   VbbHcc_tags_Z_dR__35->SetBinContent(6,3084);
   VbbHcc_tags_Z_dR__35->SetBinContent(7,2890);
   VbbHcc_tags_Z_dR__35->SetBinContent(8,2896);
   VbbHcc_tags_Z_dR__35->SetBinContent(9,2794);
   VbbHcc_tags_Z_dR__35->SetBinContent(10,2826);
   VbbHcc_tags_Z_dR__35->SetBinContent(11,2873);
   VbbHcc_tags_Z_dR__35->SetBinContent(12,2944);
   VbbHcc_tags_Z_dR__35->SetBinContent(13,3176);
   VbbHcc_tags_Z_dR__35->SetBinContent(14,3375);
   VbbHcc_tags_Z_dR__35->SetBinContent(15,3673);
   VbbHcc_tags_Z_dR__35->SetBinContent(16,3691);
   VbbHcc_tags_Z_dR__35->SetBinContent(17,3392);
   VbbHcc_tags_Z_dR__35->SetBinContent(18,3291);
   VbbHcc_tags_Z_dR__35->SetBinContent(19,2827);
   VbbHcc_tags_Z_dR__35->SetBinContent(20,2434);
   VbbHcc_tags_Z_dR__35->SetBinContent(21,1998);
   VbbHcc_tags_Z_dR__35->SetBinContent(22,1740);
   VbbHcc_tags_Z_dR__35->SetBinContent(23,1366);
   VbbHcc_tags_Z_dR__35->SetBinContent(24,1144);
   VbbHcc_tags_Z_dR__35->SetBinContent(25,948);
   VbbHcc_tags_Z_dR__35->SetBinContent(26,804);
   VbbHcc_tags_Z_dR__35->SetBinContent(27,676);
   VbbHcc_tags_Z_dR__35->SetBinContent(28,605);
   VbbHcc_tags_Z_dR__35->SetBinContent(29,505);
   VbbHcc_tags_Z_dR__35->SetBinContent(30,335);
   VbbHcc_tags_Z_dR__35->SetBinContent(31,244);
   VbbHcc_tags_Z_dR__35->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__35->SetLineColor(ci);
   VbbHcc_tags_Z_dR__35->SetLineWidth(2);
   VbbHcc_tags_Z_dR__35->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__35->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1035[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1035[30] = {
   0,
   0.5513049,
   9993.249,
   11903.48,
   9928.438,
   7438.563,
   8138.559,
   7201.212,
   5564.389,
   6825.1,
   10430.26,
   7965.766,
   10961.45,
   11078.34,
   26975.59,
   26278.13,
   11677.69,
   8878.47,
   9709.53,
   7541.941,
   5982.853,
   4382.373,
   4619.567,
   3868.379,
   2777.144,
   2275.659,
   2214.325,
   2034.481,
   1364.34,
   748.0166};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1035[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1035[30] = {
   0,
   0.1716717,
   1047.74,
   1290.537,
   1196.96,
   958.4798,
   1125.053,
   955.3871,
   693.831,
   915.5632,
   1679.636,
   1029.006,
   1700.882,
   1283.648,
   14872.91,
   14861.18,
   1262.676,
   1036.522,
   1166.068,
   1027.09,
   910.9115,
   685.8586,
   822.69,
   773.1802,
   614.9096,
   608.899,
   549.9431,
   548.8428,
   394.0002,
   279.1753};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1035,Graph_from_VbbHcc_tags_Z_dR_fy1035,Graph_from_VbbHcc_tags_Z_dR_fex1035,Graph_from_VbbHcc_tags_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1035","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMaximum(46033.35);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__36 = new TH1D("data_mc_ratio__36","",30,0,6);
   data_mc_ratio__36->SetBinContent(2,3.627757);
   data_mc_ratio__36->SetBinContent(3,0.3921648);
   data_mc_ratio__36->SetBinContent(4,0.3870296);
   data_mc_ratio__36->SetBinContent(5,0.3497025);
   data_mc_ratio__36->SetBinContent(6,0.4145962);
   data_mc_ratio__36->SetBinContent(7,0.3550997);
   data_mc_ratio__36->SetBinContent(8,0.4021545);
   data_mc_ratio__36->SetBinContent(9,0.5021217);
   data_mc_ratio__36->SetBinContent(10,0.4140599);
   data_mc_ratio__36->SetBinContent(11,0.2754487);
   data_mc_ratio__36->SetBinContent(12,0.3695815);
   data_mc_ratio__36->SetBinContent(13,0.2897428);
   data_mc_ratio__36->SetBinContent(14,0.3046484);
   data_mc_ratio__36->SetBinContent(15,0.1361601);
   data_mc_ratio__36->SetBinContent(16,0.140459);
   data_mc_ratio__36->SetBinContent(17,0.2904684);
   data_mc_ratio__36->SetBinContent(18,0.370672);
   data_mc_ratio__36->SetBinContent(19,0.2911572);
   data_mc_ratio__36->SetBinContent(20,0.3227286);
   data_mc_ratio__36->SetBinContent(21,0.3339544);
   data_mc_ratio__36->SetBinContent(22,0.3970452);
   data_mc_ratio__36->SetBinContent(23,0.2956987);
   data_mc_ratio__36->SetBinContent(24,0.2957311);
   data_mc_ratio__36->SetBinContent(25,0.3413579);
   data_mc_ratio__36->SetBinContent(26,0.3533043);
   data_mc_ratio__36->SetBinContent(27,0.305285);
   data_mc_ratio__36->SetBinContent(28,0.2973732);
   data_mc_ratio__36->SetBinContent(29,0.3701423);
   data_mc_ratio__36->SetBinContent(30,0.447851);
   data_mc_ratio__36->SetBinContent(31,0.1707963);
   data_mc_ratio__36->SetBinError(2,2.565211);
   data_mc_ratio__36->SetBinError(3,0.006264421);
   data_mc_ratio__36->SetBinError(4,0.005702103);
   data_mc_ratio__36->SetBinError(5,0.005934839);
   data_mc_ratio__36->SetBinError(6,0.007465659);
   data_mc_ratio__36->SetBinError(7,0.006605434);
   data_mc_ratio__36->SetBinError(8,0.007472978);
   data_mc_ratio__36->SetBinError(9,0.009499391);
   data_mc_ratio__36->SetBinError(10,0.007788917);
   data_mc_ratio__36->SetBinError(11,0.005138932);
   data_mc_ratio__36->SetBinError(12,0.006811478);
   data_mc_ratio__36->SetBinError(13,0.005141294);
   data_mc_ratio__36->SetBinError(14,0.005243993);
   data_mc_ratio__36->SetBinError(15,0.002246671);
   data_mc_ratio__36->SetBinError(16,0.002311945);
   data_mc_ratio__36->SetBinError(17,0.004987363);
   data_mc_ratio__36->SetBinError(18,0.006461388);
   data_mc_ratio__36->SetBinError(19,0.005476016);
   data_mc_ratio__36->SetBinError(20,0.006541497);
   data_mc_ratio__36->SetBinError(21,0.007471183);
   data_mc_ratio__36->SetBinError(22,0.00951843);
   data_mc_ratio__36->SetBinError(23,0.008000628);
   data_mc_ratio__36->SetBinError(24,0.008743473);
   data_mc_ratio__36->SetBinError(25,0.01108679);
   data_mc_ratio__36->SetBinError(26,0.01246008);
   data_mc_ratio__36->SetBinError(27,0.01174173);
   data_mc_ratio__36->SetBinError(28,0.01208994);
   data_mc_ratio__36->SetBinError(29,0.01647112);
   data_mc_ratio__36->SetBinError(30,0.02446872);
   data_mc_ratio__36->SetBinError(31,0.06558197);
   data_mc_ratio__36->SetMinimum(0.4);
   data_mc_ratio__36->SetMaximum(1.6);
   data_mc_ratio__36->SetEntries(21.40853);
   data_mc_ratio__36->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__36->SetLineColor(ci);
   data_mc_ratio__36->SetLineWidth(2);
   data_mc_ratio__36->SetMarkerStyle(20);
   data_mc_ratio__36->SetMarkerSize(1.2);
   data_mc_ratio__36->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__36->GetXaxis()->SetRange(1,30);
   data_mc_ratio__36->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__36->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__36->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__36->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__36->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__36->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1036[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1036[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1036[30] = {
   0,
   0.3113915,
   0.1048448,
   0.1084167,
   0.1205588,
   0.1288528,
   0.1382374,
   0.1326703,
   0.1246913,
   0.1341465,
   0.161035,
   0.1291786,
   0.1551695,
   0.11587,
   0.5513471,
   0.565534,
   0.1081272,
   0.1167456,
   0.1200952,
   0.1361838,
   0.1522537,
   0.1565039,
   0.1780881,
   0.1998719,
   0.221418,
   0.2675705,
   0.248357,
   0.2697705,
   0.2887845,
   0.3732208};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.3213592);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.678641);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
