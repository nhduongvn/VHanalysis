void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(0,0,1,1);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.885544,1.052419,12.95176);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6.549158e+10);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0.001349875);
   st_stack_58->SetMaximum(2.33362e+11);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetLabelSize(0.035);
   st_stack_58->GetXaxis()->SetTitleSize(0.035);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetLabelSize(0.05);
   st_stack_58->GetYaxis()->SetTitleSize(0.057);
   st_stack_58->GetYaxis()->SetTitleOffset(1.2);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetLabelSize(0.035);
   st_stack_58->GetZaxis()->SetTitleSize(0.035);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,66489.23);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,46495.33);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,27614.76);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,15086);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,28993.45);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,4351.742);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1232.771);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1600.208);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,910.5192);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,739.0937);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,588.7349);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,185.9569);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,177.5835);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,197.6985);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,217.7149);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,87.00646);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,15.88488);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,20.4862);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,15.9743);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,16722.59);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,2939.266);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2095.478);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1485.373);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,20618.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,759.7334);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,216.3407);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,512.7038);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,315.5352);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,354.5807);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,265.8892);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,51.69362);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,49.56875);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,69.89113);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,61.42913);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,29.70181);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,8.212354);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,9.530364);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,8.026554);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,287.753);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,219.3621);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,137.0022);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,78.34283);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,44.63538);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,28.55596);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,18.25454);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,10.55946);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,4.823786);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,5.825578);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.205375);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.024134);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.903285);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.103998);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.077896);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.148954);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.866754);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.3418576);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,-0.04366862);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.0318223);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.974526);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.082677);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.937869);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.705374);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.767551);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.276158);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.826241);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.531264);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8109116);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.030555);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.61753);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.6144462);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.6154601);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3674661);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.3357911);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4505503);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4888514);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2069331);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.04366862);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0318223);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,5975.983);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,4964.73);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2833.078);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1667.272);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,972.1904);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,571.0532);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,327.6593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,203.3825);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,139.7563);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,96.87889);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,71.46616);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,52.95725);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,38.97959);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,28.76303);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,21.43737);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,17.20586);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,13.51081);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,8.30893);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,4.832193);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.955113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5051876);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.3178221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,19.9313);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,18.0395);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,13.65364);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,10.51363);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,8.046929);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.167679);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.68274);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.681983);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.055919);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.546334);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.179135);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.88334);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.623355);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.368131);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.199512);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.09862);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9540285);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7384359);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5583424);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3578054);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1891566);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1622571);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,781.6872);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,601.1452);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,336.9104);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,221.9984);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,133.9629);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,65.70851);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,32.72994);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,20.0597);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,16.22613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,12.04831);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,7.569362);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,7.147889);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.466053);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,4.577593);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.41706);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.277541);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.033128);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.515481);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.654947);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.09412286);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.07443236);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,16.1286);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,16.00655);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,10.876);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,10.09972);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,7.475689);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,4.0957);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.210583);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.829746);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.560419);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.361997);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.037513);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.151108);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8379744);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.7794832);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4442728);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.5792246);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.2715701);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.4429759);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.3710944);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.09412286);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.07443236);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,99.4754);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,48.88835);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,36.4111);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,17.04126);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,11.23512);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,8.692237);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.788579);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,3.676444);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.41506);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,2.056975);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.4741923);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.3330773);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,0.4014271);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,5.77623);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.430305);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.09110379);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.2538338);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.03654466);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1757119);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,9.806022);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,4.20966);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,4.30857);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.324878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.021005);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,1.682443);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,0.872386);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.429775);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3627231);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.5013766);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.245049);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1827854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.2081991);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,5.113803);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1915645);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.08071571);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.1843665);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.03654466);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1757119);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.3049337);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.232904);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.3752659);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.2355824);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.2950387);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.3049337);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.232904);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.3752659);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.2355824);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.2950387);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,2.372417);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,0.4207787);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.758348);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.4624195);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.2849003);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.2673569);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.269206);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(13,0.2711943);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.8017371);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3016379);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.6768871);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3482165);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.2849003);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.2673569);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.269206);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(13,0.2711943);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,13.5439);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,9.878992);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,6.802408);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.104485);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,4.868224);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.055743);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.301082);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.1590457);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.1600879);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2792854);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,1.807182);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.550441);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.297963);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,0.9901693);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.116291);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.5283856);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.301082);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.1590457);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.1600879);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2792854);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,13.23517);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.53806);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.422832);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.402143);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.169072);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.648881);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.626426);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2832601);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2168434);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1143735);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.07392904);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.06284793);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.04856931);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.040209);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02521567);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03920472);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01525478);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01145991);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.006259477);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.005422089);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1467891);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1356909);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1007957);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08398916);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.07209341);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0524885);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.03212932);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.02158121);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01913406);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01373435);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01096685);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01023866);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.009081149);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.008257608);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006455389);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.007959929);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.004941243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004396445);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003162901);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003133913);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,5.127839);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,4.21343);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.340183);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.532842);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,0.921251);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.5327102);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.2836477);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1585405);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.120969);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.09428246);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.06252528);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05089969);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04065653);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.032026);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03146377);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.01942489);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01486511);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01201028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.005538313);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001650737);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001219413);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0004360391);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004068213);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.04484419);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04018117);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03000729);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02431805);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.0189358);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01447688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01060765);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.00796857);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.006938977);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006177688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005051828);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004527575);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004058572);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.00357754);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003575579);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.002816797);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.00246752);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002206429);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.00150112);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008326036);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007052868);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0004360391);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004068213);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.04530156);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.03026679);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01779863);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.01597785);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.008811813);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.009098182);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.001571673);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.002051074);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.001845983);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.008558043);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.006956388);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005295782);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.004874322);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.003691283);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.00375351);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.001571673);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.002051074);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.001845983);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01826983);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01423979);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.008001305);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.00689961);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002721641);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001326438);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0009952311);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005132935);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0002779068);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.0005297123);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.0004882801);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.000695064);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.0003289748);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.001941459);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.001740815);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001301258);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001179007);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0007380172);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0005157291);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004485958);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.000299842);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0002028372);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.0003748506);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0003453418);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0004016845);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0002752623);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__158 = new TH1D("VbbHcc_tags_Sphericity__158","",25,0,1);
   VbbHcc_tags_Sphericity__158->SetBinContent(1,22683);
   VbbHcc_tags_Sphericity__158->SetBinContent(2,15773);
   VbbHcc_tags_Sphericity__158->SetBinContent(3,9004);
   VbbHcc_tags_Sphericity__158->SetBinContent(4,5520);
   VbbHcc_tags_Sphericity__158->SetBinContent(5,3395);
   VbbHcc_tags_Sphericity__158->SetBinContent(6,2139);
   VbbHcc_tags_Sphericity__158->SetBinContent(7,1326);
   VbbHcc_tags_Sphericity__158->SetBinContent(8,825);
   VbbHcc_tags_Sphericity__158->SetBinContent(9,658);
   VbbHcc_tags_Sphericity__158->SetBinContent(10,464);
   VbbHcc_tags_Sphericity__158->SetBinContent(11,316);
   VbbHcc_tags_Sphericity__158->SetBinContent(12,265);
   VbbHcc_tags_Sphericity__158->SetBinContent(13,200);
   VbbHcc_tags_Sphericity__158->SetBinContent(14,159);
   VbbHcc_tags_Sphericity__158->SetBinContent(15,117);
   VbbHcc_tags_Sphericity__158->SetBinContent(16,112);
   VbbHcc_tags_Sphericity__158->SetBinContent(17,75);
   VbbHcc_tags_Sphericity__158->SetBinContent(18,54);
   VbbHcc_tags_Sphericity__158->SetBinContent(19,20);
   VbbHcc_tags_Sphericity__158->SetBinContent(20,10);
   VbbHcc_tags_Sphericity__158->SetBinContent(21,3);
   VbbHcc_tags_Sphericity__158->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__158->SetEntries(63143);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__158->SetLineColor(ci);
   VbbHcc_tags_Sphericity__158->SetLineWidth(2);
   VbbHcc_tags_Sphericity__158->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__158->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1115[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1115[25] = {
   73668.78,
   52355.78,
   30975.51,
   17081.56,
   30164.96,
   5028.999,
   1616.417,
   1838.623,
   1073.507,
   856.3837,
   670.7471,
   248.813,
   224.6946,
   237.9916,
   243.1342,
   107.7886,
   31.57953,
   30.71249,
   21.60528,
   2.056309,
   0.6126616,
   0.3182582,
   0.0004068213,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1115[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1115[25] = {
   16722.61,
   2939.375,
   2095.561,
   1485.452,
   20618.93,
   759.7749,
   216.4123,
   512.7246,
   315.5553,
   354.5944,
   265.9011,
   51.74545,
   49.6074,
   70.09662,
   61.44367,
   29.73128,
   8.288527,
   9.571496,
   8.056539,
   0.3699923,
   0.2057512,
   0.1622577,
   0.0004068213,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1115,Graph_from_VbbHcc_tags_Sphericity_fy1115,Graph_from_VbbHcc_tags_Sphericity_fex1115,Graph_from_VbbHcc_tags_Sphericity_fey1115);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1115 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1115","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMinimum(99.43053);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMaximum(99430.53);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1115);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__159 = new TH1D("data_mc_ratio__159","",25,0,1);
   data_mc_ratio__159->SetBinContent(1,0.3079052);
   data_mc_ratio__159->SetBinContent(2,0.3012657);
   data_mc_ratio__159->SetBinContent(3,0.2906813);
   data_mc_ratio__159->SetBinContent(4,0.3231555);
   data_mc_ratio__159->SetBinContent(5,0.1125478);
   data_mc_ratio__159->SetBinContent(6,0.4253331);
   data_mc_ratio__159->SetBinContent(7,0.8203328);
   data_mc_ratio__159->SetBinContent(8,0.4487053);
   data_mc_ratio__159->SetBinContent(9,0.6129443);
   data_mc_ratio__159->SetBinContent(10,0.5418132);
   data_mc_ratio__159->SetBinContent(11,0.4711165);
   data_mc_ratio__159->SetBinContent(12,1.065057);
   data_mc_ratio__159->SetBinContent(13,0.8900971);
   data_mc_ratio__159->SetBinContent(14,0.6680908);
   data_mc_ratio__159->SetBinContent(15,0.4812158);
   data_mc_ratio__159->SetBinContent(16,1.039071);
   data_mc_ratio__159->SetBinContent(17,2.374956);
   data_mc_ratio__159->SetBinContent(18,1.758243);
   data_mc_ratio__159->SetBinContent(19,0.9256998);
   data_mc_ratio__159->SetBinContent(20,4.863082);
   data_mc_ratio__159->SetBinContent(21,4.896667);
   data_mc_ratio__159->SetBinContent(22,3.142103);
   data_mc_ratio__159->SetBinError(1,0.002044404);
   data_mc_ratio__159->SetBinError(2,0.002398791);
   data_mc_ratio__159->SetBinError(3,0.003063369);
   data_mc_ratio__159->SetBinError(4,0.004349527);
   data_mc_ratio__159->SetBinError(5,0.0019316);
   data_mc_ratio__159->SetBinError(6,0.009196526);
   data_mc_ratio__159->SetBinError(7,0.02252778);
   data_mc_ratio__159->SetBinError(8,0.01562191);
   data_mc_ratio__159->SetBinError(9,0.02389506);
   data_mc_ratio__159->SetBinError(10,0.02515305);
   data_mc_ratio__159->SetBinError(11,0.02650237);
   data_mc_ratio__159->SetBinError(12,0.06542592);
   data_mc_ratio__159->SetBinError(13,0.06293937);
   data_mc_ratio__159->SetBinError(14,0.05298305);
   data_mc_ratio__159->SetBinError(15,0.04448841);
   data_mc_ratio__159->SetBinError(16,0.09818302);
   data_mc_ratio__159->SetBinError(17,0.2742363);
   data_mc_ratio__159->SetBinError(18,0.2392665);
   data_mc_ratio__159->SetBinError(19,0.2069928);
   data_mc_ratio__159->SetBinError(20,1.537842);
   data_mc_ratio__159->SetBinError(21,2.827092);
   data_mc_ratio__159->SetBinError(22,3.142103);
   data_mc_ratio__159->SetMinimum(0.4);
   data_mc_ratio__159->SetMaximum(1.6);
   data_mc_ratio__159->SetEntries(25.8893);
   data_mc_ratio__159->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__159->SetLineColor(ci);
   data_mc_ratio__159->SetLineWidth(2);
   data_mc_ratio__159->SetMarkerStyle(20);
   data_mc_ratio__159->SetMarkerSize(1.2);
   data_mc_ratio__159->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__159->GetXaxis()->SetRange(1,25);
   data_mc_ratio__159->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__159->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__159->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__159->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__159->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__159->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1116[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1116[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1116[25] = {
   0.2269973,
   0.05614231,
   0.0676522,
   0.0869623,
   0.683539,
   0.1510788,
   0.133884,
   0.2788634,
   0.293948,
   0.4140603,
   0.3964252,
   0.2079692,
   0.220777,
   0.294534,
   0.2527151,
   0.2758297,
   0.2624652,
   0.3116484,
   0.3728968,
   0.1799303,
   0.3358317,
   0.5098303,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1116,Graph_from_mc_statistical_error_fy1116,Graph_from_mc_statistical_error_fex1116,Graph_from_mc_statistical_error_fey1116);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1116 = new TH1F("Graph_Graph_from_mc_statistical_error1116","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1116->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1116->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1116->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1116->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1116);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
