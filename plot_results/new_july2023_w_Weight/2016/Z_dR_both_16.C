void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Aug 10 10:43:01 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(0,0,1,1);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.840863,6.314516,11.35418);
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
   st->SetMaximum(2.620099e+09);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0.0014905);
   st_stack_209->SetMaximum(8.603523e+09);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetLabelSize(0.035);
   st_stack_209->GetXaxis()->SetTitleSize(0.035);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetLabelSize(0.05);
   st_stack_209->GetYaxis()->SetTitleSize(0.057);
   st_stack_209->GetYaxis()->SetTitleOffset(1.2);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetLabelSize(0.035);
   st_stack_209->GetZaxis()->SetTitleSize(0.035);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,16589.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,15958.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,10929.73);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,11483.68);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,7698.764);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,8330.854);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,5605.736);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,4589.005);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,9442.581);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,6922.789);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,7019.707);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,7724.987);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,11541.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,11270.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,9047.878);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,5944.062);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,4821.748);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,6014.151);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,3835.515);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,3858.325);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,5328.759);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,894.4889);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3373.736);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,2059.729);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,2392.148);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1573.006);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1029.024);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,790.0606);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,607.2454);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,2311.177);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,2304.022);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,2015.282);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,2192.196);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1156.144);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,2026.305);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,960.3642);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,707.0036);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,2474.015);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1133.949);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1124.182);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1896.53);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,2976.658);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,2504.737);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1372.991);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,1055.804);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,884.0145);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,1046.896);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1559.885);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,849.8868);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,1772.607);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,120.2588);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1598.413);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,604.6081);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,734.0039);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,492.6403);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,313.4972);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,240.6044);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,315.5715);
   VbbHcc_both_Z_dR_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,34.45436);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,38.76202);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,33.78102);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,37.62093);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,42.43335);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,38.44255);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,40.12535);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,33.79073);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,41.60488);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,39.15951);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,41.73852);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,36.58937);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,37.52153);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,35.43168);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,29.61383);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,32.32011);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,24.48385);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,22.05223);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,20.61092);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,17.41685);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,15.37319);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,14.64571);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,11.44443);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,11.60466);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,6.130042);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,8.090839);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,4.391823);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,4.120455);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,4.155883);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.565765);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,2.651356);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,2.468416);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,2.598452);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,2.801898);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,2.530389);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,2.714928);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,2.475336);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,2.853854);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,2.691675);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,2.815327);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,2.583845);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,2.574216);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,2.498418);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,2.348811);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,2.485728);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.044027);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,1.960691);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,1.98973);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,1.837873);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,1.601273);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.661099);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.455559);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.452263);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.060415);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.224598);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.8419269);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.9094895);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.9218823);
   VbbHcc_both_Z_dR_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.5654276);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,536.7849);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,808.2623);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,832.9791);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,880.6289);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,878.8057);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,857.4408);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,825.8459);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,800.5176);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,768.9089);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,764.7316);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,743.7399);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,730.9344);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,710.8393);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,687.3139);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,627.0572);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,585.8728);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,517.3841);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,466.365);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,416.6651);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,365.406);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,319.6369);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,277.273);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,244.2709);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,211.6725);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,179.4254);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,142.9606);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,115.1169);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,76.99042);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,54.84564);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.2014113);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,6.108101);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,7.52221);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,7.63798);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,7.857174);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,7.852549);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,7.73235);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,7.563625);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,7.456537);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,7.301802);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,7.273313);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,7.180697);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,7.126798);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,7.042738);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,6.93724);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,6.623056);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,6.406627);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,6.021169);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,5.71324);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,5.404951);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,5.045796);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,4.728393);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,4.377337);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,4.116417);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,3.842013);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,3.529748);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,3.16617);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,2.818384);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.321095);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,1.928944);
   VbbHcc_both_Z_dR_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.1550957);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,114.1363);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,164.607);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,166.0456);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,148.6936);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,149.2416);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,104.2635);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,86.17392);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,82.64809);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,81.21592);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,79.03875);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,95.77558);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,99.11393);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,93.07399);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,89.73626);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,96.83806);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,67.5735);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,69.30564);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,73.20095);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,51.80136);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,47.00797);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,37.51751);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,38.71882);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,32.73988);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,22.28039);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,27.87367);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,26.53617);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,16.95366);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,12.87043);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,6.883544);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.1098637);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,4.693163);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,7.527621);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,8.290662);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,9.867071);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,12.38355);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,8.593049);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,6.907961);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,7.043055);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,6.652996);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,6.018937);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,8.983531);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,8.522744);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,7.040931);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,7.752542);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,9.047127);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,6.29891);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,6.978901);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,8.263726);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,6.389742);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,6.392786);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,5.54254);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,6.608839);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,4.605105);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,3.135988);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.446598);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,4.257469);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.751751);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.482955);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.111011);
   VbbHcc_both_Z_dR_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.0002729972);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,28.23875);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,16.60591);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,13.65083);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,9.187199);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,10.3306);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,9.768695);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,7.085668);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,8.460293);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,5.685341);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,9.8943);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,7.563193);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,10.02807);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,12.71201);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,6.007212);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,7.274771);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,9.512718);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,5.298013);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,4.592156);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,4.088688);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,4.185435);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,2.453988);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,3.908911);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,2.356779);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,2.802823);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,1.573486);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,2.20437);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,1.804624);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,1.081665);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,0.2467886);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.0002729972);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,7.556777);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,2.125348);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.343669);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,1.423804);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,2.136442);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,1.82417);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,1.337855);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,1.992769);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.359943);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,2.242579);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,1.395695);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,2.336142);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,7.408072);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,1.363715);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,1.628494);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,2.44641);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,1.310815);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,1.23208);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,1.175598);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,1.197161);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,0.5845217);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,1.324899);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.5224886);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,1.145285);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.5209874);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.5919804);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.4492707);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.3013272);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.1372481);
   VbbHcc_both_Z_dR_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,0.08576627);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,0.139529);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(10,0.1535887);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.1368996);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,0.2678449);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,0.1440206);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,0.2997942);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,0.1622891);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.1587488);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.08576627);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.139529);
   VbbHcc_both_Z_dR_stack_6->SetBinError(10,0.1535887);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.1368996);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.1893967);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.1440206);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.2121205);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.1622891);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.1587488);
   VbbHcc_both_Z_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,0.7055546);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.7001423);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.3581792);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.2376896);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.1245709);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.1145399);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.2418374);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2330157);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,0.2316062);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.4203461);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.4091289);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.4969443);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.2404927);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.3658773);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,0.1159231);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.1168895);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.1175925);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,0.2008158);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.3410012);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,0.1275401);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.1182308);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.2891677);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.2862839);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.207086);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.168074);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.1245709);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.1145399);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.1712426);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.1647843);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.1638509);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.2122846);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.2128151);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.2487912);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.1701639);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2115831);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.1159231);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.1168895);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.1175925);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.1432223);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.1968949);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.1275401);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.1182308);
   VbbHcc_both_Z_dR_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,0.8513225);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,5.232426);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,5.214351);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,3.203784);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,1.444285);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.568027);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,2.279934);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,1.318078);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,2.678633);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,2.115083);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.477588);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,2.067044);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,1.375656);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,2.077418);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.127522);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.243501);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,0.8143936);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,0.5161537);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.2880004);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,1.340443);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.2810074);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,0.7941664);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,1.066931);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.2779925);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.8390625);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,1.07143);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.2916673);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,0.4919777);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.17433);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.16816);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.9259457);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.5993554);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.6402715);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.7613172);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.5900945);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.8486422);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.7486029);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.8269016);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.7513213);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.6157235);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.7345892);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.7413619);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.7554404);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.4705032);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.3650545);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.2880004);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.6008812);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.2810074);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.4588112);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.53429);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.2779925);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.4846552);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.5368695);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.2916673);
   VbbHcc_both_Z_dR_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(2,0.001653484);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.180184);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,4.090817);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,4.174721);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,3.507122);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,2.443637);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.755744);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.221525);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.118177);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.122472);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.357591);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,1.56147);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,1.766062);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,1.964541);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,1.874671);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,1.902453);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,1.727022);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.369342);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.15499);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.8276155);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.6428569);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.4628065);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.3906494);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.4102484);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.4337225);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.4055626);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.4403703);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.3903087);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.2198487);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.133309);
   VbbHcc_both_Z_dR_stack_9->SetBinError(2,0.001653484);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.05803849);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.08007161);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.08075674);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.0735545);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.06173669);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.05210578);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.04291934);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.04161901);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.04185249);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.04570527);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.0497154);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.05211424);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.05521455);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.05432476);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.05411846);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.05177401);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.04624813);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.04200274);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.03560795);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.03174397);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.02647798);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.02470895);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.02494769);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.02595623);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.02514506);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.0264818);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.02469132);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.01850239);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01417032);
   VbbHcc_both_Z_dR_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.7898163);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.647982);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,1.994534);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,1.796745);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.336321);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,0.9481541);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.6976819);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.6316611);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.6149239);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.6837815);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.7398115);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.7512892);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.7604662);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.760838);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.7234482);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.6685655);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.5662458);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.49788);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.3994413);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.3372341);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.2543247);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.2330189);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.2236597);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.2467043);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.2567878);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.2143833);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.1741936);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1090581);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.05593915);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.01746941);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02522135);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.02779274);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.02638816);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.02272327);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.01916987);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.01641436);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01564643);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.0154341);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01628375);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01694336);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01707025);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01717806);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.01717245);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01677018);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.0160966);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01483867);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01388333);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01243969);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01146017);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.009889847);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.00948905);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.00930605);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.009761749);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.009962678);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.009119864);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.0081902);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.006478555);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.004665233);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.009018446);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.02004502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.005486175);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01495984);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002888021);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.002933425);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.008758287);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.003216674);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.003079495);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.002873204);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.002909221);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.006080649);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.005721983);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002555119);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.002248041);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.01192257);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.005213382);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.007579579);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.003895547);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006700023);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002888021);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002933425);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.005058272);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.003216674);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.003079495);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.002873204);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.002909221);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.004307006);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.004048752);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002555119);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.002248041);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.005963741);
   VbbHcc_both_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.003351696);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.006490746);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.007398681);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.007219066);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.001565908);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.001832168);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.002003058);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001904368);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.0007894508);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.002639933);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.001969138);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.0003915395);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.001468101);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.002674756);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.0007249093);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001943812);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.0006067184);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001101556);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.0003915395);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.0007488029);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.001231827);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.001118241);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.0003876622);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0008104403);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0008021071);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.0003876622);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001120257);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001580162);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.001679086);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001663608);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.000784322);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0008209578);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0008962085);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0008517478);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0005583577);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.000998795);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0008810285);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0003915395);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0007364666);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.001012032);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0005138192);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0008706469);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0004425023);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0006361975);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0003915395);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.000529498);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0007120139);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0006469971);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.0003876622);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.000573914);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0005679549);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0003876622);
   VbbHcc_both_Z_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__573 = new TH1D("VbbHcc_both_Z_dR__573","",30,0,6);
   VbbHcc_both_Z_dR__573->SetBinContent(2,6);
   VbbHcc_both_Z_dR__573->SetBinContent(3,7663);
   VbbHcc_both_Z_dR__573->SetBinContent(4,8437);
   VbbHcc_both_Z_dR__573->SetBinContent(5,6408);
   VbbHcc_both_Z_dR__573->SetBinContent(6,5686);
   VbbHcc_both_Z_dR__573->SetBinContent(7,5057);
   VbbHcc_both_Z_dR__573->SetBinContent(8,4728);
   VbbHcc_both_Z_dR__573->SetBinContent(9,4517);
   VbbHcc_both_Z_dR__573->SetBinContent(10,4521);
   VbbHcc_both_Z_dR__573->SetBinContent(11,4371);
   VbbHcc_both_Z_dR__573->SetBinContent(12,4280);
   VbbHcc_both_Z_dR__573->SetBinContent(13,4401);
   VbbHcc_both_Z_dR__573->SetBinContent(14,4376);
   VbbHcc_both_Z_dR__573->SetBinContent(15,4458);
   VbbHcc_both_Z_dR__573->SetBinContent(16,4376);
   VbbHcc_both_Z_dR__573->SetBinContent(17,4000);
   VbbHcc_both_Z_dR__573->SetBinContent(18,3680);
   VbbHcc_both_Z_dR__573->SetBinContent(19,3441);
   VbbHcc_both_Z_dR__573->SetBinContent(20,3001);
   VbbHcc_both_Z_dR__573->SetBinContent(21,2669);
   VbbHcc_both_Z_dR__573->SetBinContent(22,2191);
   VbbHcc_both_Z_dR__573->SetBinContent(23,1908);
   VbbHcc_both_Z_dR__573->SetBinContent(24,1532);
   VbbHcc_both_Z_dR__573->SetBinContent(25,1366);
   VbbHcc_both_Z_dR__573->SetBinContent(26,1231);
   VbbHcc_both_Z_dR__573->SetBinContent(27,1163);
   VbbHcc_both_Z_dR__573->SetBinContent(28,1037);
   VbbHcc_both_Z_dR__573->SetBinContent(29,998);
   VbbHcc_both_Z_dR__573->SetBinContent(30,695);
   VbbHcc_both_Z_dR__573->SetBinContent(31,484);
   VbbHcc_both_Z_dR__573->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__573->SetLineColor(ci);
   VbbHcc_both_Z_dR__573->SetLineWidth(2);
   VbbHcc_both_Z_dR__573->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__573->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1417[30] = {
   0,
   0.7224498,
   17307.84,
   16998.03,
   11987.94,
   12568.57,
   8785.065,
   9345.158,
   6569.413,
   5517.881,
   10344.79,
   7820.04,
   7913.872,
   8606.65,
   12399.97,
   12093.64,
   9813.79,
   6644.103,
   5441.091,
   6582.531,
   4330.315,
   4295.163,
   5704.742,
   1230.001,
   3665.473,
   2309.564,
   2608.881,
   1753.89,
   1168.826,
   886.5239};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1417[30] = {
   0,
   0.2294326,
   2311.204,
   2304.05,
   2015.317,
   2192.234,
   1156.242,
   2026.34,
   960.4239,
   707.0854,
   2474.037,
   1133.994,
   1124.246,
   1896.566,
   2976.685,
   2504.76,
   1373.04,
   1055.848,
   884.066,
   1046.947,
   1559.909,
   849.9289,
   1772.623,
   120.5387,
   1598.426,
   604.6315,
   734.0217,
   492.6709,
   313.5166,
   240.6227};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1417,Graph_from_VbbHcc_both_Z_dR_fy1417,Graph_from_VbbHcc_both_Z_dR_fex1417,Graph_from_VbbHcc_both_Z_dR_fey1417);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1417 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1417","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMinimum(21.58095);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMaximum(21580.95);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1417);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__574 = new TH1D("data_mc_ratio__574","",30,0,6);
   data_mc_ratio__574->SetBinContent(2,8.305075);
   data_mc_ratio__574->SetBinContent(3,0.4427473);
   data_mc_ratio__574->SetBinContent(4,0.4963515);
   data_mc_ratio__574->SetBinContent(5,0.5345371);
   data_mc_ratio__574->SetBinContent(6,0.4523982);
   data_mc_ratio__574->SetBinContent(7,0.575636);
   data_mc_ratio__574->SetBinContent(8,0.5059305);
   data_mc_ratio__574->SetBinContent(9,0.6875805);
   data_mc_ratio__574->SetBinContent(10,0.8193363);
   data_mc_ratio__574->SetBinContent(11,0.4225315);
   data_mc_ratio__574->SetBinContent(12,0.5473118);
   data_mc_ratio__574->SetBinContent(13,0.5561121);
   data_mc_ratio__574->SetBinContent(14,0.5084441);
   data_mc_ratio__574->SetBinContent(15,0.3595169);
   data_mc_ratio__574->SetBinContent(16,0.361843);
   data_mc_ratio__574->SetBinContent(17,0.4075897);
   data_mc_ratio__574->SetBinContent(18,0.5538746);
   data_mc_ratio__574->SetBinContent(19,0.6324099);
   data_mc_ratio__574->SetBinContent(20,0.4559037);
   data_mc_ratio__574->SetBinContent(21,0.6163524);
   data_mc_ratio__574->SetBinContent(22,0.5101087);
   data_mc_ratio__574->SetBinContent(23,0.3344586);
   data_mc_ratio__574->SetBinContent(24,1.245527);
   data_mc_ratio__574->SetBinContent(25,0.3726668);
   data_mc_ratio__574->SetBinContent(26,0.5330009);
   data_mc_ratio__574->SetBinContent(27,0.4457851);
   data_mc_ratio__574->SetBinContent(28,0.5912573);
   data_mc_ratio__574->SetBinContent(29,0.8538484);
   data_mc_ratio__574->SetBinContent(30,0.7839608);
   data_mc_ratio__574->SetBinContent(31,0.7182516);
   data_mc_ratio__574->SetBinError(2,3.390533);
   data_mc_ratio__574->SetBinError(3,0.00505774);
   data_mc_ratio__574->SetBinError(4,0.005403751);
   data_mc_ratio__574->SetBinError(5,0.006677541);
   data_mc_ratio__574->SetBinError(6,0.005999533);
   data_mc_ratio__574->SetBinError(7,0.008094713);
   data_mc_ratio__574->SetBinError(8,0.00735787);
   data_mc_ratio__574->SetBinError(9,0.01023054);
   data_mc_ratio__574->SetBinError(10,0.01218554);
   data_mc_ratio__574->SetBinError(11,0.006390998);
   data_mc_ratio__574->SetBinError(12,0.008365904);
   data_mc_ratio__574->SetBinError(13,0.008382752);
   data_mc_ratio__574->SetBinError(14,0.007686073);
   data_mc_ratio__574->SetBinError(15,0.005384548);
   data_mc_ratio__574->SetBinError(16,0.005469927);
   data_mc_ratio__574->SetBinError(17,0.00644456);
   data_mc_ratio__574->SetBinError(18,0.009130353);
   data_mc_ratio__574->SetBinError(19,0.01078093);
   data_mc_ratio__574->SetBinError(20,0.008322237);
   data_mc_ratio__574->SetBinError(21,0.01193039);
   data_mc_ratio__574->SetBinError(22,0.01089787);
   data_mc_ratio__574->SetBinError(23,0.007656903);
   data_mc_ratio__574->SetBinError(24,0.03182173);
   data_mc_ratio__574->SetBinError(25,0.01008313);
   data_mc_ratio__574->SetBinError(26,0.01519144);
   data_mc_ratio__574->SetBinError(27,0.01307181);
   data_mc_ratio__574->SetBinError(28,0.01836061);
   data_mc_ratio__574->SetBinError(29,0.0270281);
   data_mc_ratio__574->SetBinError(30,0.02973733);
   data_mc_ratio__574->SetBinError(31,0.3379516);
   data_mc_ratio__574->SetMinimum(0.4);
   data_mc_ratio__574->SetMaximum(1.6);
   data_mc_ratio__574->SetEntries(30.30867);
   data_mc_ratio__574->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__574->SetLineColor(ci);
   data_mc_ratio__574->SetLineWidth(2);
   data_mc_ratio__574->SetMarkerStyle(20);
   data_mc_ratio__574->SetMarkerSize(1.2);
   data_mc_ratio__574->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__574->GetXaxis()->SetRange(1,30);
   data_mc_ratio__574->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__574->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__574->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__574->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__574->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__574->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1418[30] = {
   0,
   0.3175759,
   0.1335351,
   0.135548,
   0.168112,
   0.1744219,
   0.1316145,
   0.2168332,
   0.1461963,
   0.1281444,
   0.2391577,
   0.1450113,
   0.1420601,
   0.2203605,
   0.2400557,
   0.2071138,
   0.1399092,
   0.1589151,
   0.1624795,
   0.1590493,
   0.36023,
   0.1978805,
   0.310728,
   0.09799882,
   0.4360764,
   0.2617946,
   0.281355,
   0.2809019,
   0.2682321,
   0.2714226};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1418,Graph_from_mc_statistical_error_fy1418,Graph_from_mc_statistical_error_fex1418,Graph_from_mc_statistical_error_fey1418);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1418 = new TH1F("Graph_Graph_from_mc_statistical_error1418","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1418->SetMinimum(0.4767083);
   Graph_Graph_from_mc_statistical_error1418->SetMaximum(1.523292);
   Graph_Graph_from_mc_statistical_error1418->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1418->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1418);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
