void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Thu Aug 10 10:40:46 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(0,0,1,1);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetFillStyle(4000);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetFrameFillStyle(1000);
   Z_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.820303,315.7258,10.66775);
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
   st->SetMaximum(6.58777e+08);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",40,0,400);
   st_stack_3->SetMinimum(0.001560216);
   st_stack_3->SetMaximum(2.084204e+09);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetRange(1,30);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetLabelSize(0.035);
   st_stack_3->GetXaxis()->SetTitleSize(0.035);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/10.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetLabelSize(0.035);
   st_stack_3->GetZaxis()->SetTitleSize(0.035);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,43.96496);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,466.1995);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,4065.346);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,6640.3);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,7643.987);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,6869.037);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,8553.524);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,4280.468);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,5797.545);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,4973.367);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,4791.967);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,6970.999);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,4148.573);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,5039.482);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,4486.32);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,4702.262);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,5064.35);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,2725.817);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,3038.064);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,4993.074);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,4416.405);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,2096.159);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,4016.549);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1850.455);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,2306.267);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,2848.311);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,3428.446);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,2372.008);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,3634.641);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,2672.683);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1213.479);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,2989.336);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1697.569);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2228.187);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,3655.014);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1712.054);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2203.358);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,2584.129);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,97077.71);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,35.28249);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,113.9841);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,889.2852);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,1333.742);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,2409.115);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,1126.856);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,1776.744);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,834.3789);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,1057.054);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,1927.977);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,993.9798);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,1435.437);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,909.9822);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,1181.055);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,1021.023);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,1046.615);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,1460.875);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,473.2464);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,766.0926);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,1281.494);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,1059.579);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,706.2324);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,1058.406);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,525.3515);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,771.1535);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,822.0796);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,961.2006);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,682.762);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,1109.615);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,791.8178);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,187.0813);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,957.8015);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,581.9181);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,464.782);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,1022.779);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,443.2858);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,669.2826);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,696.4976);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,4748.108);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(10038);

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
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,3.692112);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,9.689265);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,15.34393);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,21.26993);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,20.9751);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,24.49658);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,25.65261);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,28.92783);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,29.84336);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,26.82312);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,33.31016);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,26.25095);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,27.39188);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,26.4385);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,30.70523);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,24.8459);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,24.3373);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,24.51321);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,23.51753);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,19.48352);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,21.38706);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,20.01581);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,16.47396);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,15.65153);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,19.38781);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,17.06076);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,17.74417);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,18.43296);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,15.73501);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,16.47237);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,14.09441);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,15.34494);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,11.03409);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,16.63068);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,15.04883);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,14.39527);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,14.01762);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,583.2713);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.8860154);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,1.406876);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.611791);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,2.061655);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,2.095352);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,2.188132);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,2.301436);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,2.557304);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,2.621998);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,2.251432);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,2.791026);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,2.324011);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,2.476675);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,2.394163);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,2.606699);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,2.337948);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,2.374093);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,2.424556);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,2.245811);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.830843);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,2.156844);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,2.211869);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.738868);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.818576);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,2.123389);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.840293);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.951061);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,2.057236);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.69757);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.836184);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.652976);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.729713);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.438166);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.849911);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.827187);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.768946);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.794491);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,11.28823);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(14154);

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
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(2,0.09363874);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.987126);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,53.92535);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,187.1531);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,312.7665);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,393.462);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,455.3106);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,502.9042);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,562.239);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,590.2525);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,641.6533);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,649.2974);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,662.6885);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,633.4717);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,614.4527);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,580.2714);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,550.2625);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,540.0147);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,511.2692);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,488.3987);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,476.2659);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,467.0844);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,429.7216);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,434.9835);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,421.2159);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,397.3012);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,387.1467);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,379.2054);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,376.9233);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,368.0454);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,346.4386);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,345.7204);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,342.552);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,323.0846);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,322.5518);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,310.9781);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,305.8597);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,303.4884);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,298.3245);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,12219.84);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(2,0.06646339);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.4241661);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,2.245474);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,4.418928);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,5.42905);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,6.054346);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,6.572007);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,6.76531);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,7.115654);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,7.589981);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,8.433339);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,7.793863);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,8.551879);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,7.660161);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,8.733177);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,7.324121);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,7.085848);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,7.104262);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,6.860549);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,6.796834);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,6.582231);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,6.890455);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,6.117457);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,7.177673);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,6.280076);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,5.988032);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,6.131931);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,6.02083);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,5.933427);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,5.81035);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,5.536404);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,6.531827);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,6.620713);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,5.427383);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,5.700841);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,5.451942);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,6.294664);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,5.233396);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,6.372486);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,34.80887);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(352917);

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
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(3,0.1381218);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,5.908494);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,20.10727);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,36.69594);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,73.7349);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,104.7148);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,185.4613);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,233.9328);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,167.6335);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,109.3978);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,66.22277);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,71.04365);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,61.77869);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,58.7208);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,48.35158);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,48.59075);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,47.56531);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,43.94423);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,43.66429);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,40.74038);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,46.17935);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,40.93361);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,40.29623);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,51.97302);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,59.16322);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,36.77723);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,38.40151);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,51.14882);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,35.68195);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,53.59924);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,41.22393);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,31.11997);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,45.83509);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,25.75211);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,36.03353);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,41.9254);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,27.72369);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,34.86394);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,1563.77);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(3,0.1381218);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,1.698711);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,3.01504);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,3.785765);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,7.813266);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,8.419348);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,13.12552);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,9.156523);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,10.49951);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,8.717695);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,4.88837);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,7.540697);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,4.920854);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,6.207034);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,4.123512);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,4.044546);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,4.042052);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,4.021392);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,3.969865);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,3.897556);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,4.672914);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,5.869745);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,4.247169);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,7.326627);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,9.560269);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,5.071954);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,5.529111);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,10.88982);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,5.501658);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,7.819244);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,4.638951);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,3.422727);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,12.41046);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.89963);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.575788);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,6.686848);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,3.307212);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,3.68817);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,31.74566);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(18490);

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
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,1.732692);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,8.760511);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,19.16032);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,13.86622);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,11.40866);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,20.65572);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,7.72105);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,10.43385);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,12.66965);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,7.068216);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,8.09976);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,3.310966);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,4.729892);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,5.020176);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,9.534452);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,6.820576);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,3.906723);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,2.681494);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,7.007315);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,3.288454);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,2.43494);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,11.38569);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,4.312918);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,3.285991);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,2.837513);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,2.17146);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,6.119073);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,1.520108);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,7.225779);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,2.054138);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.829385);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,2.288902);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,1.693706);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,3.737657);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.467717);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,2.389868);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,4.97578);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,130.1277);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.8164113);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,2.557278);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,4.942161);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,4.190161);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,3.39873);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,9.49366);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,1.3429);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,2.523057);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,4.092521);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.308167);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,2.483716);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.7963718);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,0.9697336);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.078181);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,3.401371);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,3.291115);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.9891675);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,0.6692106);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,2.586748);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.9433696);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.6459343);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,4.808575);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.145318);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.8986377);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.6900658);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.5581341);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,2.533756);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.5177196);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,3.276019);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.7080672);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.6416615);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.7096119);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.4602093);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,2.323267);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.5362286);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.7451305);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,2.807169);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,9.662456);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2375);

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
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.5029805);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.3743199);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.6599753);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.4921557);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.5029805);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.3743199);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.6599753);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.4921557);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(4);

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
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(6,0.4786962);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.6010888);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,1.16403);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,2.188903);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.830859);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.3805224);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.3805224);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.8576021);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(22,0.6738216);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(27,0.5144501);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(34,0.4019721);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(35,0.3767055);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(39,0.3670258);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.719421);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(6,0.4786962);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.6010888);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.7818852);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,1.00363);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.9207479);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3805224);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.5144501);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.3805224);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.6105078);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(22,0.4804391);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(27,0.5144501);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(34,0.4019721);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(35,0.3767055);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(39,0.3670258);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,1.117505);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(32);

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
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.6931937);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.7198074);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.686752);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,5.311442);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,5.32178);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,4.889661);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.9068116);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2619032);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.389861);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.9744263);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,1.253476);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,1.346086);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.7120158);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,0.3253838);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,1.010258);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.2830566);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.2619032);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.7661823);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,1.283213);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,1.595738);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.7044551);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.3608173);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,1.068258);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,1.013221);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.3915493);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,1.058976);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.4018369);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.294318);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,1.014956);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.4520614);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.811974);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.5115007);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.6821442);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,32.76619);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.4983307);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.3724867);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.7688259);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,1.348708);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.372815);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,1.277374);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.52358);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2619032);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.7008315);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.5704587);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.6274357);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.6794961);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.5035744);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.3253838);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.5501731);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.2830566);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.2619032);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.5478849);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.6426545);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.7471671);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.5048124);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.2873991);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.6235703);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.5912722);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.3915493);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.614639);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.4018369);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.294318);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.592175);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.3446262);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.5741824);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.3667984);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.4362376);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,3.252107);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(230);

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
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(3,0.002748817);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.03406174);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1538896);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2949421);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.4998309);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,1.207736);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,2.930365);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,4.057939);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,3.133227);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,2.774233);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,3.044015);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,2.363835);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.372651);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.9784229);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.6314246);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.5831228);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.558634);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.5991877);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.5266955);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.5435806);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.566275);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.5924535);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.5881985);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.5918856);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.5809707);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.5963845);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.6141774);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.6064419);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.5951549);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.6645383);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.5741807);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.6553061);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.7640316);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.5876805);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.7131375);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.7435378);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.7861221);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.6298111);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,31.70202);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(3,0.002748817);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.009749549);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.02083957);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.02868734);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.03807834);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.0617715);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.1140639);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.110764);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.09487971);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.08861688);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.09364484);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.08168544);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.06155245);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.05329881);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.0411256);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.03992151);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.039702);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.04119163);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.04283505);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.03855669);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.03970237);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.0482564);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.0411103);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.04350402);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.04119514);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.04007612);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.05646034);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.04193822);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.04048174);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.04280137);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.03990033);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.04271677);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.05009603);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.04028055);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.04691996);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.05458007);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.04687611);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.05068084);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.3313592);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(27254);

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
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.00069456);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01845891);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.05694573);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.1420604);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.2864492);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.6602301);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,1.410818);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.811927);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,1.392095);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,1.360329);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,1.354818);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,1.103198);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.7476046);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.5517327);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.4727621);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.4024296);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.4292082);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.3908328);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.3654708);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.3872776);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.3881265);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.3379289);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.3808667);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.363283);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.3804761);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.3546942);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.3786245);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.3578638);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.3659439);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.3664738);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.3580415);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.3419951);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.3336108);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.3235231);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.3262153);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.3152154);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.3432189);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.301264);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,11.46709);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.00069456);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.00349639);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.006069273);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.009574251);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.01354511);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.02061495);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.03019198);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.03416693);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.02991319);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.02959);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.02957735);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.0266778);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.02192379);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01886131);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01741471);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.01614278);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.0166711);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.01581724);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.01538579);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.01581241);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.01580415);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.01473948);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.01564354);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.01531995);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.01569067);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.01513572);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.01561484);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.01518054);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.01540734);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.01542799);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.0151692);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.01483632);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.01465609);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.01445424);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.014496);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.01428735);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.0148805);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.01397572);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.08600863);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(48968);

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
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(5,0.002982215);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.003060115);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.002576493);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.02015542);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.04227575);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02059645);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.005636807);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002767952);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(22,0.002842044);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(23,0.003415932);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.00272295);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(31,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.002662043);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.002923899);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(39,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.04520864);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(5,0.002982215);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003060115);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.002576493);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.007746208);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.01149931);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.007927478);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.003985965);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002767952);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(22,0.002842044);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(23,0.003415932);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.00272295);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(31,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.002662043);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.002923899);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(39,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.01152052);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(64);

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
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0003228833);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.002895977);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.00514839);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.01190957);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.0174805);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.01245846);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.004308738);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.003865319);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0007344024);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.001436644);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.001001077);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0004352311);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0003219266);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.001176183);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(20,0.0008376686);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.0006828328);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0003186975);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0003240891);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.0009724085);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.0002481348);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.00104255);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.000644648);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(30,0.001386222);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.000280877);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.000448301);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0004049829);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.001448201);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.0006832426);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0006557134);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.02595739);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0003228833);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.001036332);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.00138731);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.002041574);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.002505811);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.002110476);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.00122552);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.001116691);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0004825955);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0007200453);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0005783682);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0004352311);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0003219266);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.000694219);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(20,0.0005481769);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.000500533);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0003186975);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0003240891);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0005895384);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.0002481348);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0006060335);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0004558418);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(30,0.0007018024);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.000280877);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0003363027);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0004049829);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0007262251);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0004838517);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0004639812);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.002975027);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(298);

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
   
   TH1D *VbbHcc_tags_Z_mass__7 = new TH1D("VbbHcc_tags_Z_mass__7","",40,0,400);
   VbbHcc_tags_Z_mass__7->SetBinContent(3,35);
   VbbHcc_tags_Z_mass__7->SetBinContent(4,1099);
   VbbHcc_tags_Z_mass__7->SetBinContent(5,4319);
   VbbHcc_tags_Z_mass__7->SetBinContent(6,7409);
   VbbHcc_tags_Z_mass__7->SetBinContent(7,8863);
   VbbHcc_tags_Z_mass__7->SetBinContent(15,6421);
   VbbHcc_tags_Z_mass__7->SetBinContent(16,6002);
   VbbHcc_tags_Z_mass__7->SetBinContent(17,5738);
   VbbHcc_tags_Z_mass__7->SetBinContent(18,5565);
   VbbHcc_tags_Z_mass__7->SetBinContent(19,5198);
   VbbHcc_tags_Z_mass__7->SetBinContent(20,4865);
   VbbHcc_tags_Z_mass__7->SetBinContent(21,4733);
   VbbHcc_tags_Z_mass__7->SetBinContent(22,4470);
   VbbHcc_tags_Z_mass__7->SetBinContent(23,4461);
   VbbHcc_tags_Z_mass__7->SetBinContent(24,4298);
   VbbHcc_tags_Z_mass__7->SetBinContent(25,4084);
   VbbHcc_tags_Z_mass__7->SetBinContent(26,3975);
   VbbHcc_tags_Z_mass__7->SetBinContent(27,3729);
   VbbHcc_tags_Z_mass__7->SetBinContent(28,3735);
   VbbHcc_tags_Z_mass__7->SetBinContent(29,3703);
   VbbHcc_tags_Z_mass__7->SetBinContent(30,3561);
   VbbHcc_tags_Z_mass__7->SetBinContent(31,3523);
   VbbHcc_tags_Z_mass__7->SetBinContent(32,3345);
   VbbHcc_tags_Z_mass__7->SetBinContent(33,3329);
   VbbHcc_tags_Z_mass__7->SetBinContent(34,3264);
   VbbHcc_tags_Z_mass__7->SetBinContent(35,3161);
   VbbHcc_tags_Z_mass__7->SetBinContent(36,3231);
   VbbHcc_tags_Z_mass__7->SetBinContent(37,3120);
   VbbHcc_tags_Z_mass__7->SetBinContent(38,3029);
   VbbHcc_tags_Z_mass__7->SetBinContent(39,3056);
   VbbHcc_tags_Z_mass__7->SetBinContent(40,2973);
   VbbHcc_tags_Z_mass__7->SetBinContent(41,129936);
   VbbHcc_tags_Z_mass__7->SetEntries(313684);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__7->SetLineColor(ci);
   VbbHcc_tags_Z_mass__7->SetLineWidth(2);
   VbbHcc_tags_Z_mass__7->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__7->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1005[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1005[40] = {
   0,
   0.09363874,
   46.09365,
   531.5107,
   4291.27,
   7025.879,
   8148.933,
   7466.172,
   9298.916,
   5123.096,
   6604.621,
   5772.492,
   5546.423,
   7751.376,
   4877.344,
   5748.546,
   5148.852,
   5343.056,
   5684.914,
   3311.275,
   3598.217,
   5542.496,
   4953.661,
   2592.993,
   4525.484,
   2346.985,
   2783.852,
   3295.773,
   3867.347,
   2825.925,
   4059.677,
   3097.775,
   1620.285,
   3380.625,
   2086.616,
   2590.582,
   4024.248,
   2077.926,
   2553.537,
   2937.242};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1005[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1005[40] = {
   0,
   0.06646339,
   35.28531,
   114.0252,
   889.3061,
   1333.769,
   2409.14,
   1126.915,
   1776.832,
   834.4654,
   1057.141,
   1928.022,
   994.0259,
   1435.488,
   910.0315,
   1181.107,
   1021.062,
   1046.655,
   1460.904,
   473.3205,
   766.1372,
   1281.522,
   1059.614,
   706.2874,
   1058.453,
   525.4448,
   771.239,
   822.1212,
   961.2375,
   682.8824,
   1109.646,
   791.8846,
   187.2635,
   957.8322,
   582.0792,
   464.8285,
   1022.805,
   443.3851,
   669.3142,
   696.5445};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1005,Graph_from_VbbHcc_tags_Z_mass_fy1005,Graph_from_VbbHcc_tags_Z_mass_fex1005,Graph_from_VbbHcc_tags_Z_mass_fey1005);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1005 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1005","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMinimum(12.18332);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMaximum(12183.32);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",40,0,400);
   data_mc_ratio__8->SetBinContent(3,0.7593237);
   data_mc_ratio__8->SetBinContent(4,2.067691);
   data_mc_ratio__8->SetBinContent(5,1.006462);
   data_mc_ratio__8->SetBinContent(6,1.05453);
   data_mc_ratio__8->SetBinContent(7,1.087627);
   data_mc_ratio__8->SetBinContent(8,1.22459);
   data_mc_ratio__8->SetBinContent(9,0.9637683);
   data_mc_ratio__8->SetBinContent(10,1.626751);
   data_mc_ratio__8->SetBinContent(11,1.17221);
   data_mc_ratio__8->SetBinContent(12,1.293202);
   data_mc_ratio__8->SetBinContent(13,1.27163);
   data_mc_ratio__8->SetBinContent(14,0.8664268);
   data_mc_ratio__8->SetBinContent(15,1.316495);
   data_mc_ratio__8->SetBinContent(16,1.04409);
   data_mc_ratio__8->SetBinContent(17,1.114423);
   data_mc_ratio__8->SetBinContent(18,1.041539);
   data_mc_ratio__8->SetBinContent(19,0.9143498);
   data_mc_ratio__8->SetBinContent(20,1.469222);
   data_mc_ratio__8->SetBinContent(21,1.315374);
   data_mc_ratio__8->SetBinContent(22,0.8064959);
   data_mc_ratio__8->SetBinContent(23,0.9005461);
   data_mc_ratio__8->SetBinContent(24,1.657544);
   data_mc_ratio__8->SetBinContent(25,0.9024449);
   data_mc_ratio__8->SetBinContent(26,1.693663);
   data_mc_ratio__8->SetBinContent(27,1.339511);
   data_mc_ratio__8->SetBinContent(28,1.13327);
   data_mc_ratio__8->SetBinContent(29,0.957504);
   data_mc_ratio__8->SetBinContent(30,1.260118);
   data_mc_ratio__8->SetBinContent(31,0.8678031);
   data_mc_ratio__8->SetBinContent(32,1.079807);
   data_mc_ratio__8->SetBinContent(33,2.054577);
   data_mc_ratio__8->SetBinContent(34,0.9655018);
   data_mc_ratio__8->SetBinContent(35,1.514893);
   data_mc_ratio__8->SetBinContent(36,1.24721);
   data_mc_ratio__8->SetBinContent(37,0.7753002);
   data_mc_ratio__8->SetBinContent(38,1.457703);
   data_mc_ratio__8->SetBinContent(39,1.196771);
   data_mc_ratio__8->SetBinContent(40,1.012174);
   data_mc_ratio__8->SetBinContent(41,1.163739);
   data_mc_ratio__8->SetBinError(3,0.1283491);
   data_mc_ratio__8->SetBinError(4,0.0623716);
   data_mc_ratio__8->SetBinError(5,0.0153146);
   data_mc_ratio__8->SetBinError(6,0.01225121);
   data_mc_ratio__8->SetBinError(7,0.01155286);
   data_mc_ratio__8->SetBinError(8,0.01280697);
   data_mc_ratio__8->SetBinError(9,0.01018052);
   data_mc_ratio__8->SetBinError(10,0.01781945);
   data_mc_ratio__8->SetBinError(11,0.01332228);
   data_mc_ratio__8->SetBinError(12,0.01496758);
   data_mc_ratio__8->SetBinError(13,0.01514168);
   data_mc_ratio__8->SetBinError(14,0.01057247);
   data_mc_ratio__8->SetBinError(15,0.01642926);
   data_mc_ratio__8->SetBinError(16,0.0134769);
   data_mc_ratio__8->SetBinError(17,0.01471194);
   data_mc_ratio__8->SetBinError(18,0.01396185);
   data_mc_ratio__8->SetBinError(19,0.01268219);
   data_mc_ratio__8->SetBinError(20,0.02106426);
   data_mc_ratio__8->SetBinError(21,0.01911969);
   data_mc_ratio__8->SetBinError(22,0.01206281);
   data_mc_ratio__8->SetBinError(23,0.0134831);
   data_mc_ratio__8->SetBinError(24,0.02528319);
   data_mc_ratio__8->SetBinError(25,0.0141214);
   data_mc_ratio__8->SetBinError(26,0.02686324);
   data_mc_ratio__8->SetBinError(27,0.02193563);
   data_mc_ratio__8->SetBinError(28,0.01854334);
   data_mc_ratio__8->SetBinError(29,0.01573489);
   data_mc_ratio__8->SetBinError(30,0.02111666);
   data_mc_ratio__8->SetBinError(31,0.01462059);
   data_mc_ratio__8->SetBinError(32,0.01867017);
   data_mc_ratio__8->SetBinError(33,0.03560947);
   data_mc_ratio__8->SetBinError(34,0.01689966);
   data_mc_ratio__8->SetBinError(35,0.02694447);
   data_mc_ratio__8->SetBinError(36,0.02194174);
   data_mc_ratio__8->SetBinError(37,0.0138801);
   data_mc_ratio__8->SetBinError(38,0.02648619);
   data_mc_ratio__8->SetBinError(39,0.02164883);
   data_mc_ratio__8->SetBinError(40,0.01856341);
   data_mc_ratio__8->SetBinError(41,0.04959612);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(648.8109);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,30);
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
   data_mc_ratio__8->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1006[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1006[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1006[40] = {
   0,
   0.7097852,
   0.7655134,
   0.2145304,
   0.2072361,
   0.1898366,
   0.2956387,
   0.1509361,
   0.1910795,
   0.162883,
   0.1600608,
   0.3340017,
   0.1792193,
   0.1851913,
   0.1865834,
   0.2054618,
   0.1983086,
   0.1958908,
   0.2569791,
   0.1429421,
   0.2129213,
   0.2312175,
   0.2139052,
   0.2723831,
   0.2338872,
   0.2238808,
   0.2770402,
   0.2494471,
   0.2485522,
   0.2416491,
   0.2733335,
   0.2556301,
   0.1155744,
   0.2833299,
   0.2789584,
   0.1794302,
   0.2541604,
   0.2133787,
   0.2621126,
   0.2371423};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,440);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.08138386);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.918616);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
