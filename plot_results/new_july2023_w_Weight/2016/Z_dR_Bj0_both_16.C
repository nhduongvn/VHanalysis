void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Thu Aug 10 12:25:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(0,0,1,1);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-87.33579,6.314516,87258.45);
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
   st->SetMaximum(74784.64);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(0.01);
   st_stack_241->SetMaximum(78523.87);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,7225.542);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,31327.69);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,28303.56);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,21766.91);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,14779.76);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,12304.53);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,6494.078);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,8654.753);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,6279.485);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,7548.813);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4619.992);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5587.904);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3106.099);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,2802.767);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,2698.466);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,1741.348);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2049.341);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,2734.488);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2514.27);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,632.2494);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,400.3935);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,864.7913);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,345.7461);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,784.245);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,460.0216);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,136.21);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,117.7772);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,59.85536);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,53.13931);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,6.117422);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,50.15788);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,959.0044);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,2914.607);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,2871.228);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,3018.619);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2113.621);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,2353.422);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,960.1135);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,2221.482);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1644.576);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1769.342);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,868.6735);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1661.322);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,677.5713);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,672.7875);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,619.0602);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,482.429);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,609.8695);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,1473.069);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,717.8079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,277.6342);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,78.92626);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,387.1789);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,74.64251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,385.5541);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,273.693);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,43.74561);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,38.35092);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,27.12496);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,33.23443);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,6.117422);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,32.88087);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,32.6402);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,103.4382);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,112.4313);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,91.3867);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,77.248);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,62.32182);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,46.50948);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,40.44424);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,33.47286);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,29.5324);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,23.52869);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,23.1004);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,16.76467);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,16.77579);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,14.81558);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,14.14243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,8.541421);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,10.61556);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,5.761765);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,6.40558);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,4.430572);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,4.432801);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,4.36839);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.255675);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,2.643356);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,1.903502);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.9779059);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.316532);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.1883026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.1883026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.1433558);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.413568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.048237);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.130231);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,3.746253);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.421503);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.176823);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,2.715534);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.514594);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.324594);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.1793);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,1.874981);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,1.944643);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,1.636668);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.653593);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.491215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.500382);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.9979517);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.316855);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.9580421);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.085503);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.8210031);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.825894);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.856898);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.5354595);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.7313591);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5170743);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4694892);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.4898499);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.09443969);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.09443969);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.08305805);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,407.1702);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,1858.038);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,2250.716);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,1975.825);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,1523.297);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1145.324);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,894.033);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,719.1511);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,595.6378);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,510.1216);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,447.7193);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,388.4317);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,341.1401);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,305.3679);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,260.6369);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,235.5605);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,190.2101);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,165.3708);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,139.2494);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,117.5752);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,96.93313);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,69.82775);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,57.88086);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,42.08578);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,30.21678);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,22.21776);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,15.44409);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,8.986402);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,5.807532);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,3.452433);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,4.975645);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,5.13554);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,10.94806);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,12.06271);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,11.30922);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,9.932995);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,8.605527);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,7.604573);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,6.810044);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,6.196767);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,5.732155);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,5.378252);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,5.011732);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,4.692908);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,4.447334);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.100043);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,3.905515);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,3.508262);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.263749);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,2.999532);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,2.747823);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.489124);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.103269);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,1.930777);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.641408);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.396589);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.188306);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,0.9956553);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.7499208);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.6110273);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.469809);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.5398383);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,78.16658);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,304.4001);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,344.546);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,270.797);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,174.804);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,136.8672);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,102.3543);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,94.40518);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,74.79055);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,61.57968);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,63.14298);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,51.2647);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,47.68572);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,52.35545);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,35.27473);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,29.41294);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,25.88173);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,24.24811);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,24.25502);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,16.66337);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,14.63007);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,5.98468);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,6.488876);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,7.49856);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,4.856959);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,2.441338);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,2.038871);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,0.8340541);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,1.058526);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,0.4112435);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,2.852729);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,9.562313);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,13.7396);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,13.69222);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,10.81817);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.698728);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,7.760704);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.35222);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,7.117899);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,6.057285);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,7.334808);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,5.974303);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,5.466035);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,6.856339);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,5.220425);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,4.563672);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,3.914348);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,3.854144);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,4.470136);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,2.901929);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,2.815471);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,0.8494284);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,0.993391);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.210093);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.8304461);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.5416651);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.5110438);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.241395);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3655666);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.1682212);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,13.32379);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,41.56278);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,28.08961);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,25.88226);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,12.87213);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,11.24503);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,6.329055);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,9.07895);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,5.623759);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,5.437568);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,3.329416);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,8.339166);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,3.923536);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,2.719505);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,3.634571);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.662967);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,1.721211);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,3.15072);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,2.334825);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.464434);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,0.9312147);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,0.952028);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,3.867253);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.6165404);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,0.9475006);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,0.6213245);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.1681312);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.08470726);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.1286587);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0005133298);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.1485579);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,1.462724);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,6.853875);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,3.142024);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,6.693219);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.083954);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,1.812301);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,0.8417757);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,1.978789);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.257611);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.564268);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.6150257);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,2.192869);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,1.203345);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.6008337);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.165641);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.103812);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.3864668);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,1.165234);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,1.080834);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.4749002);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.314478);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,0.2964254);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,1.806193);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.259133);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.3176573);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.2326195);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.1075461);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.07604763);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.08809217);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.000362979);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.1485579);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.1900269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.307775);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.4359249);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,0.4359249);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.4359249);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.3446289);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.3775221);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.1541227);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.1541227);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.2179625);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.1541227);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.1541227);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.1089812);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,7.053007);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.728286);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,3.891314);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,3.4049);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.188864);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.70245);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.945657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,1.216036);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.4212471);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.309711);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.538177);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,0.9728286);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.9099978);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.6434656);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.6878937);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.5438277);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.4212471);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.49712);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,6.742587);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,7.543823);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,5.531028);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.602793);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.299743);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,1.782682);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.426423);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.314139);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.229579);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.120068);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.006398);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,0.896886);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.7416291);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.6390486);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.5004264);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.417253);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3091276);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2495201);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.1788227);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.1760503);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1469396);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.0984218);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.08178713);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.07069735);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05822135);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.02772445);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01663467);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006931113);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.001386223);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.04555592);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.09667847);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1022615);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.08756276);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.07067017);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.05646199);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.04971111);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.04446729);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.04268125);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04128524);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.03940385);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.03735092);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.03526023);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03206342);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.02976346);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.02633823);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02405006);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02070072);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.01859813);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01574446);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01562194);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01427204);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01168052);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01064778);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.009899609);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.008983749);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.006199376);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.004802016);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003099688);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.001386223);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.5947099);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,2.903203);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,3.474943);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.548603);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.696915);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.143838);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.8402027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.6844368);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.5642027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.5344134);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.4859609);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.4026943);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.3542418);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.3122496);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.279589);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2311365);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.1884265);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1575604);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1195162);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1051599);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.08398438);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.07860076);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.0663979);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.04163328);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.03230168);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.01938101);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.01507412);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.006101429);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.004665799);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001076723);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0003589076);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01460979);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.03227974);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.03531549);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03024422);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.02467865);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.0202616);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.01736534);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01567321);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01423013);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01384937);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01320663);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01202206);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01127564);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01058625);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01001732);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.009108053);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.008223606);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.007519949);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.006549449);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.006143508);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.00549023);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.005311347);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.004881671);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.003865553);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.003404896);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.002637421);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002325987);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001479814);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.00129406);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0006216462);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0003589076);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.009646178);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.003215393);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001856408);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__661 = new TH1D("VbbHcc_both_Z_dR_Bj0__661","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(1,5195);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(2,17106);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(3,15713);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(4,11677);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(5,8891);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(6,7000);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(7,5447);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(8,4568);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(9,3819);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(10,3180);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(11,2800);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(12,2587);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(13,2179);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(14,2037);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(15,1772);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(16,1548);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(17,1315);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(18,1139);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(19,977);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(20,804);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(21,661);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(22,564);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(23,406);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(24,356);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(25,315);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(26,246);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(27,145);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(28,98);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(29,61);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(30,34);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(31,41);
   VbbHcc_both_Z_dR_Bj0__661->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__661->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__661->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481[30] = {
   7759.912,
   33653.09,
   31061.43,
   24143.24,
   16577.07,
   13666.15,
   7547.765,
   9522.005,
   6992.788,
   8159.632,
   5161.133,
   6062.264,
   3518.19,
   3181.646,
   3014.342,
   2024.456,
   2276.898,
   2938.826,
   2686.484,
   774.9945,
   518.1997,
   946.2141,
   418.7622,
   837.5546,
   499.0328,
   163.7148,
   136.449,
   71.343,
   60.33392,
   9.759747};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481[30] = {
   959.0266,
   2914.654,
   2871.291,
   3018.681,
   2113.676,
   2353.46,
   960.1794,
   2221.51,
   1644.605,
   1769.364,
   868.7236,
   1661.343,
   677.6129,
   672.8395,
   619.0987,
   482.4701,
   609.8932,
   1473.079,
   717.8296,
   277.6656,
   79.02143,
   387.1865,
   74.70124,
   385.5602,
   273.6991,
   43.76945,
   38.37027,
   27.14202,
   33.24231,
   6.136163};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMinimum(3.261226);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMaximum(40224.15);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__662 = new TH1D("data_mc_ratio__662","",30,0,6);
   data_mc_ratio__662->SetBinContent(1,0.6694663);
   data_mc_ratio__662->SetBinContent(2,0.508304);
   data_mc_ratio__662->SetBinContent(3,0.5058685);
   data_mc_ratio__662->SetBinContent(4,0.4836551);
   data_mc_ratio__662->SetBinContent(5,0.5363431);
   data_mc_ratio__662->SetBinContent(6,0.5122146);
   data_mc_ratio__662->SetBinContent(7,0.7216706);
   data_mc_ratio__662->SetBinContent(8,0.4797309);
   data_mc_ratio__662->SetBinContent(9,0.5461341);
   data_mc_ratio__662->SetBinContent(10,0.3897235);
   data_mc_ratio__662->SetBinContent(11,0.5425166);
   data_mc_ratio__662->SetBinContent(12,0.4267383);
   data_mc_ratio__662->SetBinContent(13,0.6193526);
   data_mc_ratio__662->SetBinContent(14,0.6402346);
   data_mc_ratio__662->SetBinContent(15,0.5878564);
   data_mc_ratio__662->SetBinContent(16,0.76465);
   data_mc_ratio__662->SetBinContent(17,0.5775403);
   data_mc_ratio__662->SetBinContent(18,0.3875697);
   data_mc_ratio__662->SetBinContent(19,0.3636724);
   data_mc_ratio__662->SetBinContent(20,1.037427);
   data_mc_ratio__662->SetBinContent(21,1.27557);
   data_mc_ratio__662->SetBinContent(22,0.5960596);
   data_mc_ratio__662->SetBinContent(23,0.9695239);
   data_mc_ratio__662->SetBinContent(24,0.4250469);
   data_mc_ratio__662->SetBinContent(25,0.631221);
   data_mc_ratio__662->SetBinContent(26,1.502613);
   data_mc_ratio__662->SetBinContent(27,1.062668);
   data_mc_ratio__662->SetBinContent(28,1.373646);
   data_mc_ratio__662->SetBinContent(29,1.01104);
   data_mc_ratio__662->SetBinContent(30,3.483697);
   data_mc_ratio__662->SetBinContent(31,0.7342614);
   data_mc_ratio__662->SetBinError(1,0.009288294);
   data_mc_ratio__662->SetBinError(2,0.003886416);
   data_mc_ratio__662->SetBinError(3,0.0040356);
   data_mc_ratio__662->SetBinError(4,0.004475795);
   data_mc_ratio__662->SetBinError(5,0.005688102);
   data_mc_ratio__662->SetBinError(6,0.006122135);
   data_mc_ratio__662->SetBinError(7,0.009778232);
   data_mc_ratio__662->SetBinError(8,0.007097978);
   data_mc_ratio__662->SetBinError(9,0.0088374);
   data_mc_ratio__662->SetBinError(10,0.006911033);
   data_mc_ratio__662->SetBinError(11,0.0102526);
   data_mc_ratio__662->SetBinError(12,0.008390027);
   data_mc_ratio__662->SetBinError(13,0.01326812);
   data_mc_ratio__662->SetBinError(14,0.01418547);
   data_mc_ratio__662->SetBinError(15,0.01396495);
   data_mc_ratio__662->SetBinError(16,0.01943467);
   data_mc_ratio__662->SetBinError(17,0.01592646);
   data_mc_ratio__662->SetBinError(18,0.01148386);
   data_mc_ratio__662->SetBinError(19,0.01163491);
   data_mc_ratio__662->SetBinError(20,0.03658722);
   data_mc_ratio__662->SetBinError(21,0.04961393);
   data_mc_ratio__662->SetBinError(22,0.02509864);
   data_mc_ratio__662->SetBinError(23,0.04811666);
   data_mc_ratio__662->SetBinError(24,0.02252744);
   data_mc_ratio__662->SetBinError(25,0.03556528);
   data_mc_ratio__662->SetBinError(26,0.09580313);
   data_mc_ratio__662->SetBinError(27,0.08824976);
   data_mc_ratio__662->SetBinError(28,0.1387592);
   data_mc_ratio__662->SetBinError(29,0.1294504);
   data_mc_ratio__662->SetBinError(30,0.5974491);
   data_mc_ratio__662->SetBinError(31,0.4473907);
   data_mc_ratio__662->SetMinimum(0.4);
   data_mc_ratio__662->SetMaximum(1.6);
   data_mc_ratio__662->SetEntries(83.09603);
   data_mc_ratio__662->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__662->SetLineColor(ci);
   data_mc_ratio__662->SetLineWidth(2);
   data_mc_ratio__662->SetMarkerStyle(20);
   data_mc_ratio__662->SetMarkerSize(1.2);
   data_mc_ratio__662->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__662->GetXaxis()->SetRange(1,30);
   data_mc_ratio__662->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__662->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__662->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__662->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__662->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__662->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1482[30] = {
   0.1235873,
   0.08660883,
   0.09243911,
   0.1250322,
   0.127506,
   0.172211,
   0.1272137,
   0.2333028,
   0.2351859,
   0.2168436,
   0.1683203,
   0.2740466,
   0.1926027,
   0.2114753,
   0.2053844,
   0.2383209,
   0.2678615,
   0.5012474,
   0.2672004,
   0.3582807,
   0.1524922,
   0.4091955,
   0.1783858,
   0.4603404,
   0.5484591,
   0.2673519,
   0.2812058,
   0.380444,
   0.5509721,
   0.6287214};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0.2455343);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(1.754466);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
