void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Tue Aug 22 09:20:01 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(0,0,1,1);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetFillStyle(4000);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetFrameFillStyle(1000);
   Z_mass_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-15.83347,315.7258,15827.64);
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
   st->SetMaximum(13565.04);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",40,0,400);
   st_stack_1->SetMinimum(0.01);
   st_stack_1->SetMaximum(14243.29);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetRange(1,30);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetLabelSize(0.035);
   st_stack_1->GetXaxis()->SetTitleSize(0.035);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/10.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetLabelSize(0.035);
   st_stack_1->GetZaxis()->SetTitleSize(0.035);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,4.778935);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,1008.274);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,2398.476);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,3819.661);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,5596.249);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,3365.91);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,3748.02);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,2051.493);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,3183.166);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,3406.748);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,1528.962);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,5796.813);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,3053.246);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,1685.136);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,1545.244);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,2489.153);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,1699.618);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,2862.013);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,2377.914);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,2951.646);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,2222.595);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,1173.431);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,2085.033);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,2541.488);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,1152.553);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,1201.094);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,1159.843);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,2575.823);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,1715.91);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,1160.183);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,689.3363);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,1536.054);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1665.014);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,1077.982);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1346.332);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1273.292);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,1697.733);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1150.737);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,49253.58);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,4.778935);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,427.7708);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,600.0973);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,811.2022);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,1368.522);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,646.2277);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,716.1129);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,425.2193);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,687.6236);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,1098.538);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,350.1235);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,2017.979);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,706.9877);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,435.7555);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,400.7136);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,626.6732);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,457.6248);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,1049.225);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,946.9986);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,1191.809);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,1191.501);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,337.3845);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,554.6183);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,1038.51);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,360.3822);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,396.317);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,370.5376);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,1208.226);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,516.0226);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,386.9087);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,241.5224);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,503.4493);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,536.9653);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,382.7766);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,482.0807);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,429.2027);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,548.9446);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,425.2424);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,3160.192);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_2 = new TH1D("VbbHcc_tags_Z_mass_stack_2","",40,0,400);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(3,0.03524783);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,1.507439);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,5.70205);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,6.341897);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,6.925125);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,9.949596);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,8.046376);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,10.74539);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,11.80662);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,13.53608);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,12.03468);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,11.61858);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,12.43225);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,10.67139);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,14.73753);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,10.90696);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,12.78261);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,10.41222);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,8.623807);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,9.447545);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,8.343416);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,11.13684);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,8.476142);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,8.840375);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,5.927679);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,8.000139);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,6.501109);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,8.864109);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,5.36015);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,5.790393);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,7.51887);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,5.251025);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,4.913022);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,5.487031);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,5.614117);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,5.225202);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,4.763015);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,3.829064);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,225.2714);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(3,0.03524783);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.4344505);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,0.9474252);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,0.8424923);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,0.8700248);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.175438);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,0.9887194);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,1.195521);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.263476);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,1.400829);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,1.324396);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,1.200219);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.279997);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.198711);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.469432);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,1.216686);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.390331);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,1.20594);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.064599);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.159341);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.061085);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.314687);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.125848);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.111104);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,0.8107038);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.063382);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,0.8721221);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.217466);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,0.7401549);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,0.8973688);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.067687);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,0.8339247);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,0.8107442);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,0.7973929);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,0.8081343);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,0.8627683);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,0.8150992);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,0.6406202);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,5.800846);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_3 = new TH1D("VbbHcc_tags_Z_mass_stack_3","",40,0,400);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.380034);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,24.92722);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,83.45261);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,129.0094);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,162.7399);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,185.6973);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,209.9411);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,230.5535);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,245.635);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,266.2843);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,267.0139);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,263.1043);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,261.8206);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,243.3959);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,233.4349);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,221.9506);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,212.2916);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,203.7912);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,185.4935);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,187.811);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,179.4112);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,172.9047);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,168.9155);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,157.8396);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,156.5854);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,149.5664);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,150.6647);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,142.9726);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,136.3656);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,134.8672);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,132.1188);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,130.2699);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,122.4068);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,122.0928);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,119.1496);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,114.489);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,111.3415);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,111.3275);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,4411.703);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.2583626);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.138973);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,2.075261);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,2.576471);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,2.904621);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,3.120784);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,3.311674);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,3.481914);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,3.593463);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,3.74431);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,3.759324);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,3.727092);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,3.727373);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,3.58902);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,3.518786);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,3.420748);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,3.344367);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,3.28714);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,3.129449);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,3.14931);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,3.061458);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,3.024042);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,2.986686);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,2.888719);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,2.876645);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,2.799658);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,2.823124);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,2.74763);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,2.679285);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,2.676661);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,2.644828);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,2.617688);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,2.549895);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,2.537518);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,2.510065);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,2.472295);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,2.433096);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,2.432278);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,15.45007);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_4 = new TH1D("VbbHcc_tags_Z_mass_stack_4","",40,0,400);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(3,0.3748585);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,2.027946);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,9.754104);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,17.94147);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,35.22179);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,46.91852);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,81.32721);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,107.8165);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,68.45755);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,38.73055);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,41.48379);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,27.60503);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,29.10799);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,22.28438);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,21.80278);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,20.04583);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,22.61904);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,21.96129);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,22.81548);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,26.71911);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,18.47497);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,17.66259);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,19.01398);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,17.65431);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,19.19475);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,19.89866);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,13.50497);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,19.86426);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,16.7637);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,16.60233);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,19.08641);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,17.15038);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,17.44782);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,18.30655);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,13.55187);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,13.43232);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,12.56323);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,10.04684);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,577.3445);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(3,0.2651282);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,0.5912934);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,1.933241);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,3.087059);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,4.257953);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,3.811432);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,4.537068);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,7.115932);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,5.784194);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,3.393583);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,5.015862);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,3.363756);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,3.627365);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,2.84512);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,2.321764);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,2.243816);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,3.186624);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,2.554936);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,3.190633);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,4.248154);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,2.685702);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,2.095353);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,3.169118);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,2.621785);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,2.67717);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,3.004636);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,2.6915);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,3.506935);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,3.095203);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,2.627505);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,3.030489);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,2.780222);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,2.767367);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.79171);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,2.007265);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,2.152025);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,2.079791);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,1.259314);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,13.50936);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_5 = new TH1D("VbbHcc_tags_Z_mass_stack_5","",40,0,400);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(3,0.9836775);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,0.9536487);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,8.316996);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,4.529803);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,6.070693);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,6.639756);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,6.345677);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,3.014664);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,3.481555);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,3.70474);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,2.809088);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,3.200503);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,2.138716);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,3.192213);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,3.534406);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,3.474018);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,1.978764);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,1.471457);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,2.282088);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,3.139104);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,0.9425006);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,1.850823);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,1.34883);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,2.133516);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,0.859669);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,1.960246);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,1.315415);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,1.29122);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,1.187628);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,1.734472);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,2.724995);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,2.16914);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,1.595336);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,0.7556166);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,0.4764417);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,0.526708);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,1.02665);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,0.744892);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,59.65566);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(3,0.9323334);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.725641);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,5.642763);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,1.214155);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,1.386963);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,1.560953);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,1.758954);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,0.4767185);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,0.5318491);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,0.8619001);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,0.9306867);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,0.9230785);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.4708462);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,0.9820135);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.194692);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,1.200119);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.4570629);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.3235436);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,0.9563944);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,1.012048);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.2389905);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.8715946);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,0.3144383);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,0.9431051);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.246592);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.9379634);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.3159387);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,0.3554699);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.28085);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.4314911);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,1.127785);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.8639895);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.8746849);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.2423169);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.1740431);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.2149716);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.3014715);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.2558656);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,6.21145);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.07803031);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.1142782);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.1294336);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(17,0.1335451);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(20,0.1234178);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(21,0.1195687);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.1173155);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(27,0.1152503);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.2541386);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.07803031);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.1142782);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.1294336);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(17,0.1335451);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(20,0.1234178);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(21,0.1195687);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.1173155);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(27,0.1152503);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.1797436);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.174883);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.4073372);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.8362103);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.09442741);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.0975785);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.1669327);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(14,0.1788816);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.09408829);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(17,0.0686903);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(18,0.2912804);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.08729333);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(20,0.08117422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(21,0.09614847);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(26,0.09774741);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(28,0.09096269);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(38,0.1906492);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.014145);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.124142);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.1824763);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.2794784);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.09442741);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.0975785);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.1181499);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(14,0.1274835);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.09408829);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(17,0.0686903);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(18,0.1687809);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.08729333);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(20,0.08117422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(21,0.09614847);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(26,0.09774741);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(28,0.09096269);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(38,0.1348784);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.3068993);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_8 = new TH1D("VbbHcc_tags_Z_mass_stack_8","",40,0,400);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.3706116);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.035123);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,1.129595);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,2.887061);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,1.673822);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.3617095);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2051823);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,0.1985803);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.4523275);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.21474);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,0.4975552);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.4379092);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,0.7034696);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.1904895);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.216231);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,1.114116);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.4171681);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.4039977);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,0.2221891);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.2007208);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.2080684);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.4183299);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,0.2025333);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.8191934);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.4085302);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,0.4345984);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.2381917);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.6708791);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.5521644);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.8207831);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.4025464);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.4204503);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.1900542);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.3832442);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,12.72887);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.2620641);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.4641706);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.462064);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,0.7782995);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.5685923);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.2560496);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2051823);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.1985803);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.3209356);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.21474);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.2926535);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.3096505);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.4106064);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.1904895);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.216231);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.504754);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.2963859);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.2864435);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.2221891);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.2007208);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.2080684);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.2981359);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.2025333);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.4115846);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.2929713);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.3074538);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.2381917);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.3933627);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.3261199);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.4114014);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.2848729);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.2987971);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.1900542);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.2712784);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,1.641469);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_9 = new TH1D("VbbHcc_tags_Z_mass_stack_9","",40,0,400);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.02367988);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.06542451);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.1740697);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.2355437);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.6292622);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,1.352147);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,1.681181);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,1.257253);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.136798);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,1.23511);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,0.9535789);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,0.6645737);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.4172733);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.3749928);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.29638);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.2732642);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.2831625);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.2528946);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.2608891);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.2763401);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.2831004);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.2663049);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.2997571);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.2996115);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.2858321);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.303605);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.302627);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.2833019);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.3013073);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.308876);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.2883039);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.3120915);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.3233129);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.3261264);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.3096295);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.2655234);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.2986606);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,11.92639);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.004970744);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.008306237);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.01367856);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.01617737);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.02614831);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.03840136);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.04340953);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.03713144);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.03551594);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.03713418);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.03222427);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.02681024);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.02125721);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.01982998);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.01766985);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.01705364);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.01738441);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.01643327);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.01670961);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.01710169);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.01745202);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.01695528);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.01801355);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.0178542);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.01742344);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.01802209);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.01799288);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.01769959);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.01794778);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.01825973);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.01762146);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.01867874);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.01896001);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.01865125);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.01822473);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.01722411);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.01773759);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.1155236);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_10 = new TH1D("VbbHcc_tags_Z_mass_stack_10","",40,0,400);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0003509075);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.008612091);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.02345916);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.060243);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1218487);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.2759578);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.6093007);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,0.7890488);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.6061756);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.591081);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.5989437);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.4809041);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.3258376);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.2368685);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.2071917);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.1726648);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.1888839);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.1698983);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.1557959);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.1687979);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.1666586);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.1474272);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.1650336);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.1539216);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.1657334);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.1486663);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.1668726);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.1563907);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.1532102);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.1552195);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.1470211);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.143419);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.1426041);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.1354834);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.1372696);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.1318675);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.1470838);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.1284332);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,4.986041);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0003509075);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.001729509);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.002805914);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.004489617);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.006390957);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.009573584);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.01426763);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.01628426);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.01425224);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.01412742);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.01429329);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.01278039);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01045231);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.008905009);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.008365055);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.007599265);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.007964515);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.007517909);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.007247563);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.007503176);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.007453102);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.00698167);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.007400689);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.007142);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.00743104);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.006999578);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.00744404);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.007211042);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.007139008);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.007165765);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.006969084);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.006867496);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.006858379);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.006670666);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.006740582);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.006579154);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.006939583);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.00652373);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.04098054);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.004663401);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01108999);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.01205206);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.002243723);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.002186526);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.00631191);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.002082123);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002007648);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.00193606);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002251171);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002155655);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(29,0.001737613);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.02375307);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003303923);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.004980256);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.004957107);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.002243723);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002186526);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.003647766);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.002082123);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002007648);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.00193606);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002251171);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002155655);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(29,0.001737613);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.007184898);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_12 = new TH1D("VbbHcc_tags_Z_mass_stack_12","",40,0,400);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.0002924782);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0003074385);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.00214077);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.005723081);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.005002128);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.001733759);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.002324111);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0002572755);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0005455676);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0002473666);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0003382053);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0005901149);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.0005910036);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0002565775);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0002247097);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.000291173);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.0002291868);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0002594203);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(31,0.000541312);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.00029471);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0002818044);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0002827815);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.000547701);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0002889423);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0002958412);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.01174125);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.0002924782);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0003074385);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.0007670313);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001282707);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001163869);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.0007092751);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.0008227418);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0002572755);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0003859364);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0002473666);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0003382053);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0004180898);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.0004181243);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0002565775);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0002247097);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.000291173);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0002291868);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0002594203);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(31,0.0003828537);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.00029471);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0002818044);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0002827815);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0003887917);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0002889423);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0002958412);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.001842609);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_mass__1 = new TH1D("VbbHcc_tags_Z_mass__1","",40,0,400);
   VbbHcc_tags_Z_mass__1->SetBinContent(3,23);
   VbbHcc_tags_Z_mass__1->SetBinContent(4,411);
   VbbHcc_tags_Z_mass__1->SetBinContent(5,1490);
   VbbHcc_tags_Z_mass__1->SetBinContent(6,2434);
   VbbHcc_tags_Z_mass__1->SetBinContent(7,2798);
   VbbHcc_tags_Z_mass__1->SetBinContent(15,2004);
   VbbHcc_tags_Z_mass__1->SetBinContent(16,1877);
   VbbHcc_tags_Z_mass__1->SetBinContent(17,1907);
   VbbHcc_tags_Z_mass__1->SetBinContent(18,1742);
   VbbHcc_tags_Z_mass__1->SetBinContent(19,1672);
   VbbHcc_tags_Z_mass__1->SetBinContent(20,1586);
   VbbHcc_tags_Z_mass__1->SetBinContent(21,1559);
   VbbHcc_tags_Z_mass__1->SetBinContent(22,1470);
   VbbHcc_tags_Z_mass__1->SetBinContent(23,1347);
   VbbHcc_tags_Z_mass__1->SetBinContent(24,1331);
   VbbHcc_tags_Z_mass__1->SetBinContent(25,1264);
   VbbHcc_tags_Z_mass__1->SetBinContent(26,1255);
   VbbHcc_tags_Z_mass__1->SetBinContent(27,1306);
   VbbHcc_tags_Z_mass__1->SetBinContent(28,1121);
   VbbHcc_tags_Z_mass__1->SetBinContent(29,1140);
   VbbHcc_tags_Z_mass__1->SetBinContent(30,1117);
   VbbHcc_tags_Z_mass__1->SetBinContent(31,1007);
   VbbHcc_tags_Z_mass__1->SetBinContent(32,1053);
   VbbHcc_tags_Z_mass__1->SetBinContent(33,990);
   VbbHcc_tags_Z_mass__1->SetBinContent(34,989);
   VbbHcc_tags_Z_mass__1->SetBinContent(35,979);
   VbbHcc_tags_Z_mass__1->SetBinContent(36,941);
   VbbHcc_tags_Z_mass__1->SetBinContent(37,929);
   VbbHcc_tags_Z_mass__1->SetBinContent(38,923);
   VbbHcc_tags_Z_mass__1->SetBinContent(39,859);
   VbbHcc_tags_Z_mass__1->SetBinContent(40,841);
   VbbHcc_tags_Z_mass__1->SetBinContent(41,36434);
   VbbHcc_tags_Z_mass__1->SetEntries(94213);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__1->SetLineColor(ci);
   VbbHcc_tags_Z_mass__1->SetLineWidth(2);
   VbbHcc_tags_Z_mass__1->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__1->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1001[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1001[40] = {
   0,
   0,
   7.553103,
   1037.722,
   2505.791,
   3977.723,
   5808.187,
   3617.058,
   4057.196,
   2409.834,
   3516.182,
   3731.195,
   1854.516,
   6104.268,
   3360.414,
   1965.552,
   1820.036,
   2746.731,
   1950.545,
   3100.497,
   2597.971,
   3180.307,
   2430.627,
   1377.938,
   2283.441,
   2728.708,
   1335.911,
   1381.463,
   1332.504,
   2750.094,
   1876.432,
   1320.069,
   851.4797,
   1691.998,
   1812.384,
   1225.904,
   1485.99,
   1408.018,
   1828.03,
   1277.496};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1001[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1001[40] = {
   0,
   0,
   4.883211,
   427.7736,
   600.1313,
   811.2135,
   1368.533,
   646.2496,
   716.138,
   425.2959,
   687.6589,
   1098.551,
   350.1834,
   2017.986,
   707.0083,
   435.7823,
   400.7404,
   626.689,
   457.6506,
   1049.234,
   947.0103,
   1191.822,
   1191.509,
   337.4083,
   554.6366,
   1038.518,
   360.4047,
   396.3409,
   370.5593,
   1208.235,
   516.0395,
   386.9282,
   241.561,
   503.4654,
   536.9799,
   382.7963,
   482.0922,
   429.2162,
   548.9546,
   425.2518};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1001,Graph_from_VbbHcc_tags_Z_mass_fy1001,Graph_from_VbbHcc_tags_Z_mass_fex1001,Graph_from_VbbHcc_tags_Z_mass_fey1001);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1001 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1001","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetMaximum(8934.479);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tags_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",40,0,400);
   data_mc_ratio__2->SetBinContent(3,3.045106);
   data_mc_ratio__2->SetBinContent(4,0.3960598);
   data_mc_ratio__2->SetBinContent(5,0.5946226);
   data_mc_ratio__2->SetBinContent(6,0.6119078);
   data_mc_ratio__2->SetBinContent(7,0.4817338);
   data_mc_ratio__2->SetBinContent(8,0.7782568);
   data_mc_ratio__2->SetBinContent(9,0.68397);
   data_mc_ratio__2->SetBinContent(10,1.071028);
   data_mc_ratio__2->SetBinContent(11,0.69365);
   data_mc_ratio__2->SetBinContent(12,0.6268769);
   data_mc_ratio__2->SetBinContent(13,1.228353);
   data_mc_ratio__2->SetBinContent(14,0.3518849);
   data_mc_ratio__2->SetBinContent(15,0.5963551);
   data_mc_ratio__2->SetBinContent(16,0.9549481);
   data_mc_ratio__2->SetBinContent(17,1.047781);
   data_mc_ratio__2->SetBinContent(18,0.6342084);
   data_mc_ratio__2->SetBinContent(19,0.8571963);
   data_mc_ratio__2->SetBinContent(20,0.5115309);
   data_mc_ratio__2->SetBinContent(21,0.6000836);
   data_mc_ratio__2->SetBinContent(22,0.4622195);
   data_mc_ratio__2->SetBinContent(23,0.5541779);
   data_mc_ratio__2->SetBinContent(24,0.9659361);
   data_mc_ratio__2->SetBinContent(25,0.5535505);
   data_mc_ratio__2->SetBinContent(26,0.4599246);
   data_mc_ratio__2->SetBinContent(27,0.97761);
   data_mc_ratio__2->SetBinContent(28,0.8114585);
   data_mc_ratio__2->SetBinContent(29,0.8555322);
   data_mc_ratio__2->SetBinContent(30,0.406168);
   data_mc_ratio__2->SetBinContent(31,0.5366567);
   data_mc_ratio__2->SetBinContent(32,0.7976858);
   data_mc_ratio__2->SetBinContent(33,1.162682);
   data_mc_ratio__2->SetBinContent(34,0.5845161);
   data_mc_ratio__2->SetBinContent(35,0.5401725);
   data_mc_ratio__2->SetBinContent(36,0.7675969);
   data_mc_ratio__2->SetBinContent(37,0.6251724);
   data_mc_ratio__2->SetBinContent(38,0.6555313);
   data_mc_ratio__2->SetBinContent(39,0.4699048);
   data_mc_ratio__2->SetBinContent(40,0.658319);
   data_mc_ratio__2->SetBinContent(41,0.667797);
   data_mc_ratio__2->SetBinError(3,0.6349485);
   data_mc_ratio__2->SetBinError(4,0.01953619);
   data_mc_ratio__2->SetBinError(5,0.01540452);
   data_mc_ratio__2->SetBinError(6,0.01240297);
   data_mc_ratio__2->SetBinError(7,0.009107166);
   data_mc_ratio__2->SetBinError(8,0.01466843);
   data_mc_ratio__2->SetBinError(9,0.01298391);
   data_mc_ratio__2->SetBinError(10,0.02108176);
   data_mc_ratio__2->SetBinError(11,0.01404541);
   data_mc_ratio__2->SetBinError(12,0.01296185);
   data_mc_ratio__2->SetBinError(13,0.0257363);
   data_mc_ratio__2->SetBinError(14,0.007592478);
   data_mc_ratio__2->SetBinError(15,0.01332159);
   data_mc_ratio__2->SetBinError(16,0.02204183);
   data_mc_ratio__2->SetBinError(17,0.0239936);
   data_mc_ratio__2->SetBinError(18,0.01519525);
   data_mc_ratio__2->SetBinError(19,0.02096342);
   data_mc_ratio__2->SetBinError(20,0.01284459);
   data_mc_ratio__2->SetBinError(21,0.01519808);
   data_mc_ratio__2->SetBinError(22,0.01205562);
   data_mc_ratio__2->SetBinError(23,0.0150996);
   data_mc_ratio__2->SetBinError(24,0.02647643);
   data_mc_ratio__2->SetBinError(25,0.01556982);
   data_mc_ratio__2->SetBinError(26,0.01298269);
   data_mc_ratio__2->SetBinError(27,0.02705167);
   data_mc_ratio__2->SetBinError(28,0.02423614);
   data_mc_ratio__2->SetBinError(29,0.02533868);
   data_mc_ratio__2->SetBinError(30,0.01215288);
   data_mc_ratio__2->SetBinError(31,0.01691149);
   data_mc_ratio__2->SetBinError(32,0.02458203);
   data_mc_ratio__2->SetBinError(33,0.03695246);
   data_mc_ratio__2->SetBinError(34,0.01858653);
   data_mc_ratio__2->SetBinError(35,0.01726399);
   data_mc_ratio__2->SetBinError(36,0.02502294);
   data_mc_ratio__2->SetBinError(37,0.02051124);
   data_mc_ratio__2->SetBinError(38,0.02157708);
   data_mc_ratio__2->SetBinError(39,0.01603295);
   data_mc_ratio__2->SetBinError(40,0.02270065);
   data_mc_ratio__2->SetBinError(41,0.03883966);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(144.1392);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__2->GetXaxis()->SetRange(1,30);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1002[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1002[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1002[40] = {
   0,
   0,
   0.6465172,
   0.4122237,
   0.2394977,
   0.2039392,
   0.2356214,
   0.1786672,
   0.1765106,
   0.1764835,
   0.1955697,
   0.2944233,
   0.1888274,
   0.330586,
   0.2103932,
   0.2217099,
   0.2201827,
   0.2281581,
   0.2346271,
   0.3384082,
   0.3645191,
   0.3747506,
   0.4902063,
   0.2448647,
   0.2428951,
   0.3805898,
   0.269782,
   0.2868994,
   0.2780925,
   0.4393433,
   0.275011,
   0.2931122,
   0.2836956,
   0.2975568,
   0.2962838,
   0.3122564,
   0.3244249,
   0.3048372,
   0.3002985,
   0.3328791};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,0,440);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.2241794);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(1.775821);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
