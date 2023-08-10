void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Thu Aug 10 12:27:25 2023) by ROOT version 6.14/09
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
   topPad->Range(-45.96762,-21.16945,315.7258,21158.28);
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
   st->SetMaximum(18133.65);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",40,0,400);
   st_stack_1->SetMinimum(0.01);
   st_stack_1->SetMaximum(19040.34);
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
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,5.879633);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,1634.065);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,3810.713);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,4821.95);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,6864.326);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,4620.469);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,4614.323);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,2671.394);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,4092.649);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,4897.322);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,2075.215);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,7764.139);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,3910.927);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,1947.063);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,2006.016);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,3565.27);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,2840.841);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,3744.225);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,3437.856);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,3707.031);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,2669.322);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,1628.622);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,2483.802);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,3697.356);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,1532.742);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,1849.979);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,1574.611);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,3168.552);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,2200.72);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,1769.571);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,902.6916);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,2153.821);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1899.174);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,1345.023);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1633.29);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1611.668);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2209.822);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1824.604);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,63688.83);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,5.879633);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,605.1285);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,861.6027);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,980.8136);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,1728.1);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,830.219);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,868.3888);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,560.0142);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,862.8315);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,1636.408);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,485.1763);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,2576.094);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,861.2158);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,484.8339);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,486.6751);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,817.72);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,721.4485);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,1545.559);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,1521.944);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,1545.271);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,1472.156);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,479.6024);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,668.3278);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,1567.18);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,477.964);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,607.5357);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,478.9606);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,1520.638);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,613.4208);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,548.2418);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,288.1499);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,665.363);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,608.126);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,474.179);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,546.5313);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,545.0844);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,665.0098);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,607.4732);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,4268.501);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(9717);

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
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(3,0.04373405);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,1.991113);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,8.123866);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,9.060269);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,10.16838);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,14.15742);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,11.89855);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,15.47592);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,16.5667);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,18.48923);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,17.08583);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,16.42454);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,17.20689);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,14.43056);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,19.57775);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,15.16995);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,16.77117);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,14.62348);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,12.18588);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,12.46716);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,11.50139);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,14.72247);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,12.15409);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,12.45312);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,8.922394);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,10.88436);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,9.280379);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,11.96736);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,7.655141);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,8.460015);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,9.859543);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,7.584904);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,6.816276);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,7.8116);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,7.733313);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,7.336199);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,6.487354);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,5.233012);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,309.5797);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(3,0.04373405);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.5200067);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,1.170852);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.088541);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.135269);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.49699);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.289682);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,1.459309);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.58752);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,1.706341);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,1.635956);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,1.530582);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.598671);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.462981);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.771499);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,1.551208);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.717104);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,1.523345);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.361668);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.409684);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.285835);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.603813);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.403658);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.411381);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.03003);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.340232);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.145885);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.462082);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,0.9724264);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.127039);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.278101);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.027896);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,0.9795312);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.00345);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.086345);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.078948);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,0.9742772);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,0.7700328);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,7.022919);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(9491);

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
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.826848);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,32.25825);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,107.5936);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,168.2054);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,207.9262);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,240.016);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,268.9781);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,296.9439);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,317.0134);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,341.3966);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,343.8938);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,339.1594);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,336.1802);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,312.8136);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,299.8333);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,286.5182);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,271.0921);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,262.4256);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,240.3751);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,241.5471);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,230.2758);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,219.6289);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,218.2439);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,201.7579);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,200.7944);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,193.4694);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,191.3716);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,185.8239);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,176.0278);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,172.2811);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,172.8973);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,168.0005);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,158.1229);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,158.195);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,153.4585);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,148.0686);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,143.2591);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,142.8583);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,5604.44);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.3262099);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.415224);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,2.583522);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,3.226683);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,3.593468);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,3.878471);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,4.099953);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,4.321561);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,4.471296);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,4.637209);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,4.661528);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,4.622944);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,4.60402);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,4.43986);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,4.347806);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,4.240627);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,4.126616);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,4.063184);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,3.883284);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,3.897601);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,3.795091);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,3.709973);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,3.701306);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,3.559264);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,3.554021);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,3.477882);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,3.470187);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,3.422682);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,3.325604);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,3.293387);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,3.295608);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,3.253933);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,3.160193);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,3.155718);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,3.108177);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,3.055102);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,3.002534);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,3.005812);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,18.79552);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(225965);

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
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(3,0.4243947);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,2.939371);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,10.12399);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,22.73244);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,45.79119);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,62.36015);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,106.8178);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,141.193);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,92.33645);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,49.52215);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,50.29137);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,34.08685);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,36.53941);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,29.40494);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,27.41696);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,22.69904);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,28.0875);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,29.53863);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,30.35752);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,38.64443);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,25.32112);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,24.00363);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,23.65804);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,23.90869);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,25.33284);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,24.52041);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,16.28392);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,28.2154);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,24.26666);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,22.47476);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,25.9839);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,24.05389);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,25.41382);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,18.59425);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,18.06427);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,19.31532);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,16.41442);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,13.59136);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,751.1248);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(3,0.2978142);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,0.7883642);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,1.311776);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,4.175951);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,6.490948);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,6.118806);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,6.729087);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,10.52454);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,8.714962);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,4.724027);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,6.527677);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,4.40554);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,5.178389);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,4.288163);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,3.421058);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,1.97519);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,4.248169);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,4.341605);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,4.368785);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,7.33451);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,4.252458);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,3.324929);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,4.190869);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,4.225593);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,4.252658);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,4.217296);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,3.083096);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,5.636316);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,4.954419);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,4.1937);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,4.989858);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,4.24878);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,4.991099);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.002003);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.168989);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,4.096867);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,3.095622);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,1.575948);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,20.09453);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(14953);

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
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(3,1.23144);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,1.303051);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,9.542089);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,5.959774);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,7.654166);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,8.470349);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,7.977265);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,3.665109);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,4.189817);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,4.360909);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,3.37287);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,3.838595);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,2.662055);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,3.900817);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.362981);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,4.389241);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,2.467379);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,1.704921);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,2.843116);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,4.009935);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,1.154355);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,2.367358);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,1.463306);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,2.533494);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,1.098258);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,2.325669);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,1.487105);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,1.4722);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,1.360137);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,2.153798);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,3.589659);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,2.839149);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,1.850913);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,0.8392679);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,0.5826139);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,0.6673604);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,1.223925);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,0.817079);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,71.98446);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(3,1.043262);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,1.045673);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,6.122486);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,1.628469);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,1.951823);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,1.98384);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,2.200781);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,0.5499889);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,0.6355982);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,1.159059);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.135002);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,1.152468);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.558578);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,1.219616);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.527057);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,1.527058);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.5524237);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.3625722);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,1.103915);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,1.265523);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.2806785);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,1.088667);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,0.3406738);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.150392);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.3079846);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,1.077523);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.3639038);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,0.4073158);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.3092041);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.5409154);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,1.534674);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,1.181806);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,1.063001);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.2788136);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.1938233);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.2615091);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.3382162);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.2802163);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,7.385282);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(3420);

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
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(27,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(33,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.2687386);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(20,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(27,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(33,0.1343693);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.1900269);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(11);

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
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.5452932);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.9815278);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(14,0.2181173);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(18,0.3271759);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(21,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(31,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(38,0.2181173);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.308704);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.1542322);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.2438625);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.3271759);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.1542322);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(14,0.1542322);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(17,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(18,0.1888951);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(20,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(21,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(26,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(28,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(31,0.1090586);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(38,0.1542322);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.3777902);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(48);

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
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.459243);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,1.70245);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,3.4049);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,2.188864);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,0.9728286);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,1.216036);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,1.216036);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,1.459243);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,15.56526);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.5957334);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.6434656);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,0.9099978);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.7296215);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.4864143);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.5438277);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.4212471);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.4212471);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.5438277);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.4212471);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.4212471);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.4212471);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.5957334);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.2432072);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.3439469);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,1.945657);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(173);

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
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.03160087);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.0865589);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2321977);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.3256263);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.8738327);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,1.820485);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,2.268393);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,1.703699);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.560808);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,1.659733);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,1.2764);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,0.9191731);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.5674417);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.5152315);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.4135592);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.3723407);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.3888281);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.3572272);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.3723407);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.3778365);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.3998197);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.3778365);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.4218029);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.4163071);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.4039415);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.4204289);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.417681);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.3970718);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.4218029);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.4369163);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.3984457);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.4424122);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.4575256);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.4396642);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.4204289);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.3805844);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.4053155);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,15.99279);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.006589236);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.0109054);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.01786136);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.0211517);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.03464972);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.05001256);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.05582705);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.0483818);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.04630846);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.04775344);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.04187733);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.03553728);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.02792198);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.02660644);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.02383716);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.02261808);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.02311343);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.02215429);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.02261808);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.0227844);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.02343784);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.0227844);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.02407356);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.02391622);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.02355835);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.02403432);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.02395565);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.02335716);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.02407356);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.02450105);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.02339754);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.02465467);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.02507225);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.02457798);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.02403432);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.0228671);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.02359838);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.1482339);
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
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0003580462);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01002529);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.03222416);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.0798443);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1639852);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.3738002);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.7952206);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.024012);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.7912821);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.7719476);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.7626384);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.6230004);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.4239267);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.3125743);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.2688927);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.2262852);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.240249);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.2223467);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.2055185);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.2205565);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.2187662);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.1915547);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.216618);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.2040863);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.2141116);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.1983576);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.2144697);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.2026542);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.2058766);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.2037283);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.2022961);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.193703);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.1886904);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.1826036);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.1836777);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.1768748);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.193703);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.1693559);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,6.466673);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0003580462);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.001894602);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.003396725);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.00534677);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.007662523);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01156883);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.01687382);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.01914794);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.01683198);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.01662507);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.01652452);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.01493529);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01232012);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01057904);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.009812034);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.009001142);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.00927471);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.008922466);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.008578177);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.008886473);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.008850334);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.008281633);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.008806772);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.008548236);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.008755676);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.008427407);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.008762994);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.008518189);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.008585646);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.008540734);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.008510661);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.008327942);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.008219481);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.008085822);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.008109569);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.007957975);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.008327942);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.007786991);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.04811827);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(49090);

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
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.005470015);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01367504);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.01641004);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(29,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.03008508);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003867885);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.006115663);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.006699373);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.004737172);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(29,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.009070994);
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
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.006788051);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.002143595);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.002858127);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.0007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(31,0.0007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.0007145317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.0146479);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.0010105);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001597741);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001557286);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.000875119);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.0010105);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0005052502);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.0005052502);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(31,0.0005052502);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0005052502);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0003572658);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.002287618);
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
   VbbHcc_tags_Z_mass__1->SetBinContent(3,22);
   VbbHcc_tags_Z_mass__1->SetBinContent(4,421);
   VbbHcc_tags_Z_mass__1->SetBinContent(5,1535);
   VbbHcc_tags_Z_mass__1->SetBinContent(6,2505);
   VbbHcc_tags_Z_mass__1->SetBinContent(7,2845);
   VbbHcc_tags_Z_mass__1->SetBinContent(15,2067);
   VbbHcc_tags_Z_mass__1->SetBinContent(16,1919);
   VbbHcc_tags_Z_mass__1->SetBinContent(17,1959);
   VbbHcc_tags_Z_mass__1->SetBinContent(18,1780);
   VbbHcc_tags_Z_mass__1->SetBinContent(19,1710);
   VbbHcc_tags_Z_mass__1->SetBinContent(20,1630);
   VbbHcc_tags_Z_mass__1->SetBinContent(21,1600);
   VbbHcc_tags_Z_mass__1->SetBinContent(22,1502);
   VbbHcc_tags_Z_mass__1->SetBinContent(23,1382);
   VbbHcc_tags_Z_mass__1->SetBinContent(24,1374);
   VbbHcc_tags_Z_mass__1->SetBinContent(25,1307);
   VbbHcc_tags_Z_mass__1->SetBinContent(26,1286);
   VbbHcc_tags_Z_mass__1->SetBinContent(27,1340);
   VbbHcc_tags_Z_mass__1->SetBinContent(28,1130);
   VbbHcc_tags_Z_mass__1->SetBinContent(29,1151);
   VbbHcc_tags_Z_mass__1->SetBinContent(30,1156);
   VbbHcc_tags_Z_mass__1->SetBinContent(31,1029);
   VbbHcc_tags_Z_mass__1->SetBinContent(32,1076);
   VbbHcc_tags_Z_mass__1->SetBinContent(33,1002);
   VbbHcc_tags_Z_mass__1->SetBinContent(34,1014);
   VbbHcc_tags_Z_mass__1->SetBinContent(35,1003);
   VbbHcc_tags_Z_mass__1->SetBinContent(36,964);
   VbbHcc_tags_Z_mass__1->SetBinContent(37,946);
   VbbHcc_tags_Z_mass__1->SetBinContent(38,950);
   VbbHcc_tags_Z_mass__1->SetBinContent(39,890);
   VbbHcc_tags_Z_mass__1->SetBinContent(40,866);
   VbbHcc_tags_Z_mass__1->SetBinContent(41,37364);
   VbbHcc_tags_Z_mass__1->SetEntries(96584);

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
   9.406407,
   1672.598,
   3946.216,
   5028.225,
   7137.194,
   4948.183,
   5014.879,
   3136.374,
   4527.662,
   5314.024,
   2492.751,
   8160.144,
   4306.078,
   2308.739,
   2359.208,
   3895.503,
   3160.957,
   4053.616,
   3724.67,
   4005.51,
   2938.901,
   1890.557,
   2740.159,
   3939.231,
   1770.387,
   2082.377,
   1793.915,
   3397.867,
   2411.472,
   1976.053,
   1116.282,
   2357.621,
   2092.739,
   1532.564,
   1814.238,
   1788.357,
   2378.024,
   1988.165};
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
   5.987946,
   605.1318,
   861.6301,
   980.8297,
   1728.117,
   830.2546,
   868.4286,
   560.1328,
   862.8891,
   1636.423,
   485.2468,
   2576.103,
   861.2455,
   484.877,
   486.7124,
   817.7364,
   721.4752,
   1545.571,
   1521.956,
   1545.295,
   1472.168,
   479.6324,
   668.3528,
   1567.191,
   477.9975,
   607.5629,
   478.9846,
   1520.653,
   613.4508,
   548.2692,
   288.2192,
   665.3865,
   608.1565,
   474.1953,
   546.5506,
   545.1096,
   665.0247,
   607.4833};
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
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetMaximum(11809.87);
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
   data_mc_ratio__2->SetBinContent(3,2.338831);
   data_mc_ratio__2->SetBinContent(4,0.2517042);
   data_mc_ratio__2->SetBinContent(5,0.3889802);
   data_mc_ratio__2->SetBinContent(6,0.4981877);
   data_mc_ratio__2->SetBinContent(7,0.398616);
   data_mc_ratio__2->SetBinContent(8,0.5836486);
   data_mc_ratio__2->SetBinContent(9,0.5665142);
   data_mc_ratio__2->SetBinContent(10,0.8471565);
   data_mc_ratio__2->SetBinContent(11,0.5539283);
   data_mc_ratio__2->SetBinContent(12,0.4533287);
   data_mc_ratio__2->SetBinContent(13,0.933908);
   data_mc_ratio__2->SetBinContent(14,0.2682551);
   data_mc_ratio__2->SetBinContent(15,0.4800192);
   data_mc_ratio__2->SetBinContent(16,0.8311896);
   data_mc_ratio__2->SetBinContent(17,0.8303635);
   data_mc_ratio__2->SetBinContent(18,0.4569371);
   data_mc_ratio__2->SetBinContent(19,0.5409754);
   data_mc_ratio__2->SetBinContent(20,0.4021101);
   data_mc_ratio__2->SetBinContent(21,0.4295683);
   data_mc_ratio__2->SetBinContent(22,0.3749835);
   data_mc_ratio__2->SetBinContent(23,0.4702438);
   data_mc_ratio__2->SetBinContent(24,0.7267699);
   data_mc_ratio__2->SetBinContent(25,0.4769796);
   data_mc_ratio__2->SetBinContent(26,0.3264597);
   data_mc_ratio__2->SetBinContent(27,0.7568968);
   data_mc_ratio__2->SetBinContent(28,0.5426491);
   data_mc_ratio__2->SetBinContent(29,0.6416135);
   data_mc_ratio__2->SetBinContent(30,0.3402134);
   data_mc_ratio__2->SetBinContent(31,0.4267104);
   data_mc_ratio__2->SetBinContent(32,0.5445199);
   data_mc_ratio__2->SetBinContent(33,0.8976224);
   data_mc_ratio__2->SetBinContent(34,0.4300945);
   data_mc_ratio__2->SetBinContent(35,0.4792761);
   data_mc_ratio__2->SetBinContent(36,0.6290114);
   data_mc_ratio__2->SetBinContent(37,0.5214309);
   data_mc_ratio__2->SetBinContent(38,0.5312138);
   data_mc_ratio__2->SetBinContent(39,0.3742603);
   data_mc_ratio__2->SetBinContent(40,0.4355775);
   data_mc_ratio__2->SetBinContent(41,0.5302445);
   data_mc_ratio__2->SetBinError(3,0.4986405);
   data_mc_ratio__2->SetBinError(4,0.01226731);
   data_mc_ratio__2->SetBinError(5,0.009928265);
   data_mc_ratio__2->SetBinError(6,0.009953805);
   data_mc_ratio__2->SetBinError(7,0.007473321);
   data_mc_ratio__2->SetBinError(8,0.01086058);
   data_mc_ratio__2->SetBinError(9,0.01062858);
   data_mc_ratio__2->SetBinError(10,0.01643493);
   data_mc_ratio__2->SetBinError(11,0.01106088);
   data_mc_ratio__2->SetBinError(12,0.009236232);
   data_mc_ratio__2->SetBinError(13,0.01935587);
   data_mc_ratio__2->SetBinError(14,0.005733569);
   data_mc_ratio__2->SetBinError(15,0.01055816);
   data_mc_ratio__2->SetBinError(16,0.01897416);
   data_mc_ratio__2->SetBinError(17,0.01876079);
   data_mc_ratio__2->SetBinError(18,0.01083045);
   data_mc_ratio__2->SetBinError(19,0.01308216);
   data_mc_ratio__2->SetBinError(20,0.009959814);
   data_mc_ratio__2->SetBinError(21,0.01073921);
   data_mc_ratio__2->SetBinError(22,0.009675584);
   data_mc_ratio__2->SetBinError(23,0.01264937);
   data_mc_ratio__2->SetBinError(24,0.01960666);
   data_mc_ratio__2->SetBinError(25,0.01319356);
   data_mc_ratio__2->SetBinError(26,0.009103514);
   data_mc_ratio__2->SetBinError(27,0.02067684);
   data_mc_ratio__2->SetBinError(28,0.01614284);
   data_mc_ratio__2->SetBinError(29,0.01891193);
   data_mc_ratio__2->SetBinError(30,0.01000628);
   data_mc_ratio__2->SetBinError(31,0.01330226);
   data_mc_ratio__2->SetBinError(32,0.01659998);
   data_mc_ratio__2->SetBinError(33,0.02835697);
   data_mc_ratio__2->SetBinError(34,0.01350656);
   data_mc_ratio__2->SetBinError(35,0.01513336);
   data_mc_ratio__2->SetBinError(36,0.02025909);
   data_mc_ratio__2->SetBinError(37,0.01695318);
   data_mc_ratio__2->SetBinError(38,0.01723485);
   data_mc_ratio__2->SetBinError(39,0.01254523);
   data_mc_ratio__2->SetBinError(40,0.01480153);
   data_mc_ratio__2->SetBinError(41,0.0322376);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(147.8275);
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
   0.6365817,
   0.3617915,
   0.2183434,
   0.1950648,
   0.2421284,
   0.1677898,
   0.1731704,
   0.1785924,
   0.1905816,
   0.3079442,
   0.1946632,
   0.3156933,
   0.2000069,
   0.2100181,
   0.2063033,
   0.209918,
   0.2282458,
   0.3812822,
   0.4086151,
   0.3857924,
   0.5009244,
   0.2536989,
   0.2439102,
   0.3978419,
   0.2699961,
   0.2917641,
   0.2670052,
   0.4475317,
   0.2543886,
   0.2774568,
   0.2581956,
   0.2822279,
   0.2906031,
   0.3094131,
   0.3012562,
   0.3048102,
   0.2796543,
   0.3055497};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,0,440);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.236102);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(1.763898);
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
