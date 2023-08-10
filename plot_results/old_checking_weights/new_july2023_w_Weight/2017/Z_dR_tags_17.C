void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Aug 10 10:40:54 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
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
   topPad->Range(-0.9193524,-2.8636,6.314516,12.14853);
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
   st->SetMaximum(1.297062e+10);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0.001417137);
   st_stack_18->SetMaximum(4.439316e+10);
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
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,10461.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,12214.47);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,9888.299);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,7310.45);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,8338.552);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,7201.493);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4850.655);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,6315.114);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,9156.395);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,7397.973);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,11372.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,10462.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,34048.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,26190.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,11782.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,8037.61);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,9586.952);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,7222.474);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,5614.167);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,3988.065);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,4252.327);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,3782.882);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2970.834);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,2276.182);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2102.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1879.794);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1310.341);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,842.3707);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,1422.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1210.278);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1465.465);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,1318.788);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,1124.855);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1350.561);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,1165.105);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,737.5639);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,1063.563);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1373.944);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,1175.611);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,2193.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1442.972);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,21722.47);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,15326.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1502.614);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1091.798);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1324.852);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1166.601);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1015.665);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,697.8264);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,852.2041);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,866.6099);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,790.6759);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,717.0377);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,587.7008);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,545.0621);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,371.6058);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,402.399);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,585.5017);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9821);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.06738933);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,23.02188);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,36.05035);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,31.11388);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,35.90803);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,31.91658);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,37.32749);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,44.74571);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,45.29327);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,48.75321);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,53.09034);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,56.09285);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,61.71538);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,59.30865);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,63.92586);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,49.49027);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,50.15349);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,37.86215);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,38.5127);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,31.03773);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,26.29474);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,24.30419);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,17.59752);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,13.76375);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,12.05409);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,9.695652);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,9.647244);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,7.061559);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,3.150796);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,2.813579);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.06738933);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,2.124469);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.596743);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.393002);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,2.726015);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.410142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,2.682355);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,2.928463);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,2.950917);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,3.130182);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,3.24794);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,3.228986);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.5164);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,3.477936);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.582887);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,3.014517);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,3.17066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,2.649433);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.650448);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.479497);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,2.239575);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.272106);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.850137);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.644626);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.511615);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.43383);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.390506);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.24797);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.7298797);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.7366002);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(11223);

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
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.4850954);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,413.4834);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,647.36);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,697.3662);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,762.3032);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,807.4501);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,858.4147);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,900.3146);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,930.8242);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,1019.13);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,1085.768);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1182.809);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1229.662);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1282.66);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1318.513);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1233.656);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,1125.927);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,997.834);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,846.4226);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,716.3859);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,574.2422);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,478.2528);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,378.1009);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,292.1555);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,236.6528);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,189.8928);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,147.1284);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,105.5575);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,67.91001);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,57.2702);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1797997);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,5.499107);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,6.883363);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,7.17888);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,7.508597);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,7.7309);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,7.954396);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,8.139712);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,8.265306);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,8.664474);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,8.957725);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,9.355609);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,9.548427);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,9.780211);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,9.924329);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,9.626201);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,9.201668);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,8.641197);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,7.959544);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,7.316455);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,6.518697);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,5.964412);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,5.308156);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,4.616314);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,4.186939);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.723925);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,3.280533);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,2.766051);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,2.23515);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,2.052912);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(306587);

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
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,109.403);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,163.075);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,164.9252);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,169.5731);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,116.9878);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,108.2139);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,97.84134);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,86.79627);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,109.6956);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,109.44);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,131.258);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,164.7198);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,138.034);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,140.2272);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,147.3812);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,130.9948);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,118.5483);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,95.04289);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,65.17985);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,54.60912);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,58.27552);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,35.03837);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,30.95489);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,32.08438);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,25.44999);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,17.94108);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,15.48994);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,7.254427);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,7.222833);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,4.101357);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,5.736589);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,8.076981);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,9.940225);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,6.986928);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,7.499641);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,7.717854);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,5.631179);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,8.931973);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,8.136688);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,10.33956);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,11.5108);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,9.269171);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,7.383568);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,7.841411);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,7.041288);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,9.359803);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,7.258158);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,5.541903);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,4.951349);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,7.316543);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,2.97224);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,4.334128);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,5.529874);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.657385);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,1.776722);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.649962);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,1.172454);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,1.180735);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(17505);

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
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,25.93133);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,28.67463);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,9.891841);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,18.15801);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,16.27662);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,11.8045);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,8.824878);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,5.917142);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,17.94721);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,11.21032);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,10.20094);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,12.48151);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,11.79453);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,11.05809);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,5.819985);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,11.13951);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,6.640391);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,5.899997);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,5.308426);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,4.646187);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,5.584845);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,3.716164);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,2.73629);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,4.606101);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.700999);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,3.500369);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.092357);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,2.02144);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.6075576);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.439217);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,4.297796);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,1.242172);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,3.235769);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,5.962551);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,2.637768);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,1.800173);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,0.9385344);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,8.409866);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,2.741362);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.956185);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,2.836282);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,2.094208);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,2.448299);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,0.8800245);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,2.618542);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,0.984922);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,0.9785384);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,0.936314);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,0.946388);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,1.710381);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.30019);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.8552938);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,2.020299);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.4321384);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.563704);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.555238);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.7086269);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.3276345);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2189);

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
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.3983715);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.6075514);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,0.3402984);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,0.268632);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.3983715);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.4371252);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.3402984);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.268632);
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
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.9123112);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.9669075);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.3136654);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.4750702);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.2891015);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.2572919);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2948417);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.2655071);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.3092578);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.6199659);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.4906347);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.1954472);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.2715318);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.2751033);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,0.2861422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,0.1940007);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.2900543);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.5289842);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.5593529);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.3136654);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.34375);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.2891015);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.2572919);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.2948417);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.2655071);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.3092578);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.438445);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3539319);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.1954472);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.2715318);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.2751033);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.2861422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.1940007);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.2900543);
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
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.581818);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.202135);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,6.530178);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.372205);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,1.160296);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.8749008);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.514797);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,1.053787);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,0.8641368);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.4294781);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.75969);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.652531);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,4.159757);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,3.311937);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.8074);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,2.096257);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.377801);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.494001);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.192047);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.5985458);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.6531596);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.222705);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.3872143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2302364);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.8535516);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.8508852);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.067994);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.399134);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.8546403);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.5858982);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.5055587);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.6779833);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.5496721);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.503557);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.3037336);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.7278841);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.8602261);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.122834);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.013702);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.056484);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.7942984);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.8043191);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.8365766);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.596511);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4241608);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.3788926);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.6147536);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3872143);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2302364);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.5064996);
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
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.817627);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,3.648806);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,3.717834);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,3.134976);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,2.275688);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.458883);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.091678);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.195356);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.465024);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.822522);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,2.395672);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.893905);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,3.691645);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,4.019161);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,3.741289);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,3.224608);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.472336);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.829166);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.209795);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.7491319);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.5145538);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.4197537);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.3373074);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.348917);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.3905233);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.4032973);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.3421659);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.1688755);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.1031578);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.06050681);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.08530551);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.0859632);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.07871974);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.06746054);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.05395197);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.04583762);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.04830437);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.05402152);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.06041659);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.0688785);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.07650357);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.08611622);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.09029406);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.08635333);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.08052237);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.07059507);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.06062472);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.0496489);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03847824);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.03231644);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.02852684);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.02539559);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.02607939);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.02773113);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.02869564);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.026145);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01806882);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01437246);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(27953);

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
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.6277936);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.34579);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.602561);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.530469);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.237253);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.9061139);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.7357813);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.6980737);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.7257341);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.9093064);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.034239);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.147801);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.213665);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.30204);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.216425);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.082866);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.8995266);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.7252978);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.5660348);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.4200342);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.3211472);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.2604887);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.2218968);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.2227536);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.2293291);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1877611);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1388598);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.09081583);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.05127888);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.0167478);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.02452417);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.02678196);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.0262052);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.02353666);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.02016075);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.01813499);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01771735);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.01802936);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.02019882);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02158307);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.0226885);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.02334668);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02418787);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.02337705);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02206351);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02012667);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01803463);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01594163);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01377384);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01199354);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01076766);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.009966277);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.009975233);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.0101226);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.009166479);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.007865424);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.006355411);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.004798446);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(48968);

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
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.01927856);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01475258);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.03596882);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01650264);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.007448782);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.009467138);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.00469513);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.00200821);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.01499839);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.003149461);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.001550858);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.00397434);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002939898);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.001918637);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002008212);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.001696335);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.0004027325);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.001999969);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.001948216);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.004058264);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.001355193);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.002416403);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.001370852);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.005874906);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.005312084);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.008328396);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.005558325);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003438879);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.004280197);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002773748);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.00200821);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.005346875);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002275106);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.001550858);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.002833667);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002103791);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.001918637);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002008212);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.001696335);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.0004027325);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.001999969);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.001948216);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.002872144);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.001355193);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.002416403);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.001370852);
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
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.005715921);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.009963871);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.009754921);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.006393399);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.003676684);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.001881547);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.001938249);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001766648);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.001275775);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.002276381);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.002255793);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001696774);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.002177381);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001895624);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.001955455);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001914822);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001025269);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.0003192353);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.0008303727);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.001250773);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.0005343903);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0008495507);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0002615881);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.00127681);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.0005183379);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0004253058);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0007433987);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0002640953);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.00118049);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001577232);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.001556653);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001266194);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0009390996);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0006686648);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0006887752);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0006322152);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0005707653);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0007326421);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.0007607979);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0006184421);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0007017266);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0006516742);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.00065922);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0006875525);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0005175762);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0002545907);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0004818907);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0005634367);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0003225751);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0004273159);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0002615881);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0005320089);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0003666004);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0003046073);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0004310298);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0002640953);
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
   
   TH1D *VbbHcc_tags_Z_dR__48 = new TH1D("VbbHcc_tags_Z_dR__48","",30,0,6);
   VbbHcc_tags_Z_dR__48->SetBinContent(2,1);
   VbbHcc_tags_Z_dR__48->SetBinContent(3,3626);
   VbbHcc_tags_Z_dR__48->SetBinContent(4,4278);
   VbbHcc_tags_Z_dR__48->SetBinContent(5,3220);
   VbbHcc_tags_Z_dR__48->SetBinContent(6,2895);
   VbbHcc_tags_Z_dR__48->SetBinContent(7,2704);
   VbbHcc_tags_Z_dR__48->SetBinContent(8,2680);
   VbbHcc_tags_Z_dR__48->SetBinContent(9,2594);
   VbbHcc_tags_Z_dR__48->SetBinContent(10,2644);
   VbbHcc_tags_Z_dR__48->SetBinContent(11,2669);
   VbbHcc_tags_Z_dR__48->SetBinContent(12,2733);
   VbbHcc_tags_Z_dR__48->SetBinContent(13,2942);
   VbbHcc_tags_Z_dR__48->SetBinContent(14,3127);
   VbbHcc_tags_Z_dR__48->SetBinContent(15,3397);
   VbbHcc_tags_Z_dR__48->SetBinContent(16,3466);
   VbbHcc_tags_Z_dR__48->SetBinContent(17,3156);
   VbbHcc_tags_Z_dR__48->SetBinContent(18,3046);
   VbbHcc_tags_Z_dR__48->SetBinContent(19,2638);
   VbbHcc_tags_Z_dR__48->SetBinContent(20,2266);
   VbbHcc_tags_Z_dR__48->SetBinContent(21,1861);
   VbbHcc_tags_Z_dR__48->SetBinContent(22,1623);
   VbbHcc_tags_Z_dR__48->SetBinContent(23,1288);
   VbbHcc_tags_Z_dR__48->SetBinContent(24,1056);
   VbbHcc_tags_Z_dR__48->SetBinContent(25,878);
   VbbHcc_tags_Z_dR__48->SetBinContent(26,752);
   VbbHcc_tags_Z_dR__48->SetBinContent(27,641);
   VbbHcc_tags_Z_dR__48->SetBinContent(28,551);
   VbbHcc_tags_Z_dR__48->SetBinContent(29,470);
   VbbHcc_tags_Z_dR__48->SetBinContent(30,314);
   VbbHcc_tags_Z_dR__48->SetBinContent(31,227);
   VbbHcc_tags_Z_dR__48->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__48->SetLineColor(ci);
   VbbHcc_tags_Z_dR__48->SetLineWidth(2);
   VbbHcc_tags_Z_dR__48->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__48->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->Draw("same E");
   
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
   0.5524848,
   11039.47,
   13099.81,
   10803.81,
   8303.928,
   9316.156,
   8220.762,
   5906.334,
   7387.194,
   10355.24,
   8660.66,
   12758.7,
   11938.42,
   35549.41,
   27732.9,
   13228.16,
   9362.233,
   10753.86,
   8213.402,
   6435.048,
   4649.912,
   4820.236,
   4219.238,
   3311.588,
   2562.156,
   2329.792,
   2059.749,
   1441.024,
   922.9678};
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
   0.1920137,
   1210.304,
   1465.502,
   1318.836,
   1124.932,
   1350.617,
   1165.163,
   737.6576,
   1063.615,
   1374.029,
   1175.681,
   2193.438,
   1443.057,
   21722.47,
   15326.33,
   1502.669,
   1091.867,
   1324.917,
   1166.654,
   1015.711,
   697.8789,
   852.2612,
   866.6345,
   790.7036,
   717.0756,
   587.7206,
   545.0792,
   371.6223,
   402.4082};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1035,Graph_from_VbbHcc_tags_Z_dR_fy1035,Graph_from_VbbHcc_tags_Z_dR_fex1035,Graph_from_VbbHcc_tags_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1035","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMinimum(62.99907);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMaximum(62999.07);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
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
   
   TH1D *data_mc_ratio__49 = new TH1D("data_mc_ratio__49","",30,0,6);
   data_mc_ratio__49->SetBinContent(2,1.810005);
   data_mc_ratio__49->SetBinContent(3,0.3284577);
   data_mc_ratio__49->SetBinContent(4,0.3265695);
   data_mc_ratio__49->SetBinContent(5,0.2980431);
   data_mc_ratio__49->SetBinContent(6,0.3486302);
   data_mc_ratio__49->SetBinContent(7,0.2902485);
   data_mc_ratio__49->SetBinContent(8,0.3260038);
   data_mc_ratio__49->SetBinContent(9,0.4391895);
   data_mc_ratio__49->SetBinContent(10,0.3579167);
   data_mc_ratio__49->SetBinContent(11,0.2577438);
   data_mc_ratio__49->SetBinContent(12,0.3155649);
   data_mc_ratio__49->SetBinContent(13,0.2305878);
   data_mc_ratio__49->SetBinContent(14,0.2619274);
   data_mc_ratio__49->SetBinContent(15,0.09555714);
   data_mc_ratio__49->SetBinContent(16,0.1249779);
   data_mc_ratio__49->SetBinContent(17,0.2385819);
   data_mc_ratio__49->SetBinContent(18,0.3253497);
   data_mc_ratio__49->SetBinContent(19,0.2453072);
   data_mc_ratio__49->SetBinContent(20,0.2758906);
   data_mc_ratio__49->SetBinContent(21,0.2891975);
   data_mc_ratio__49->SetBinContent(22,0.3490389);
   data_mc_ratio__49->SetBinContent(23,0.2672069);
   data_mc_ratio__49->SetBinContent(24,0.2502822);
   data_mc_ratio__49->SetBinContent(25,0.2651296);
   data_mc_ratio__49->SetBinContent(26,0.2935029);
   data_mc_ratio__49->SetBinContent(27,0.2751318);
   data_mc_ratio__49->SetBinContent(28,0.2675083);
   data_mc_ratio__49->SetBinContent(29,0.3261569);
   data_mc_ratio__49->SetBinContent(30,0.3402069);
   data_mc_ratio__49->SetBinContent(31,0.1522805);
   data_mc_ratio__49->SetBinError(2,1.810005);
   data_mc_ratio__49->SetBinError(3,0.005454633);
   data_mc_ratio__49->SetBinError(4,0.004992928);
   data_mc_ratio__49->SetBinError(5,0.005252319);
   data_mc_ratio__49->SetBinError(6,0.006479488);
   data_mc_ratio__49->SetBinError(7,0.005581701);
   data_mc_ratio__49->SetBinError(8,0.006297314);
   data_mc_ratio__49->SetBinError(9,0.008623171);
   data_mc_ratio__49->SetBinError(10,0.006960673);
   data_mc_ratio__49->SetBinError(11,0.004989005);
   data_mc_ratio__49->SetBinError(12,0.006036272);
   data_mc_ratio__49->SetBinError(13,0.004251233);
   data_mc_ratio__49->SetBinError(14,0.004684002);
   data_mc_ratio__49->SetBinError(15,0.001639515);
   data_mc_ratio__49->SetBinError(16,0.002122848);
   data_mc_ratio__49->SetBinError(17,0.004246871);
   data_mc_ratio__49->SetBinError(18,0.005895023);
   data_mc_ratio__49->SetBinError(19,0.004776094);
   data_mc_ratio__49->SetBinError(20,0.005795713);
   data_mc_ratio__49->SetBinError(21,0.006703805);
   data_mc_ratio__49->SetBinError(22,0.008663922);
   data_mc_ratio__49->SetBinError(23,0.007445428);
   data_mc_ratio__49->SetBinError(24,0.007701902);
   data_mc_ratio__49->SetBinError(25,0.008947691);
   data_mc_ratio__49->SetBinError(26,0.01070295);
   data_mc_ratio__49->SetBinError(27,0.01086705);
   data_mc_ratio__49->SetBinError(28,0.01139624);
   data_mc_ratio__49->SetBinError(29,0.0150445);
   data_mc_ratio__49->SetBinError(30,0.01919898);
   data_mc_ratio__49->SetBinError(31,0.06066084);
   data_mc_ratio__49->SetMinimum(0.4);
   data_mc_ratio__49->SetMaximum(1.6);
   data_mc_ratio__49->SetEntries(25.59785);
   data_mc_ratio__49->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__49->SetLineColor(ci);
   data_mc_ratio__49->SetLineWidth(2);
   data_mc_ratio__49->SetMarkerStyle(20);
   data_mc_ratio__49->SetMarkerSize(1.2);
   data_mc_ratio__49->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__49->GetXaxis()->SetRange(1,30);
   data_mc_ratio__49->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__49->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__49->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__49->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__49->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__49->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__49->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__49->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__49->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__49->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__49->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__49->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__49->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__49->Draw("E1");
   
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
   0.3475457,
   0.1096342,
   0.111872,
   0.1220714,
   0.1354699,
   0.1449757,
   0.1417341,
   0.1248926,
   0.1439809,
   0.1326892,
   0.1357496,
   0.171917,
   0.120875,
   0.6110501,
   0.5526407,
   0.1135962,
   0.1166247,
   0.1232038,
   0.1420427,
   0.1578404,
   0.1500843,
   0.176809,
   0.2054007,
   0.2387687,
   0.279872,
   0.2522631,
   0.2646338,
   0.2578876,
   0.4359938};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.2667399);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.73326);
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
