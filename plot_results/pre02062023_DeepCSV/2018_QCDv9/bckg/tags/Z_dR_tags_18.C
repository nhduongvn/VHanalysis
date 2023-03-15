#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Wed Jan 18 11:43:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-1757491,7.029799,1.288827e+07);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.142369e+07);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(1.142369e+07);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,5274.591);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,6117026);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,7221206);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,5332748);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,4748241);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,4136372);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,4172711);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4089654);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,4723822);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,4186160);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,4702915);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,5609314);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,5713888);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,6723711);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,7175628);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,4042610);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,2848247);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,2086435);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,1453019);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,728610);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,612094.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,452849.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,280242.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,200131.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,52182.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,39520.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,4993.802);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1554.151);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,2307.033);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,211930.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,245994.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,203457.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,203416.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,180679.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,193162.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,194311.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,232691.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,210271);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,214393.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,248204.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,246235.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,287757.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,284893.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,202573.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,171763.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,158969.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,131235.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,67240.32);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,73259.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,71168.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,63594.32);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,51862.61);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,8917.307);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,18739.64);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,2887.328);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1553.463);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(502767);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,40.63305);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,60890.22);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,118855);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,142190.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,173590.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,203093);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,231244.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,259239.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,287625.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,318509.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,350817.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,384963);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,419143.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,449249.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,440167.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,232615.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,132743.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,79000.59);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,46798.84);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,27165.72);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,15250.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,8274.885);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,4245.917);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1986.051);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,828.6076);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,297.1909);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,73.97481);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,3.963808);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.895411);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,78.63102);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,109.5538);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,119.6472);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,132.9413);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,143.1546);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,153.0068);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,161.8113);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,170.4133);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,180.1499);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,187.9337);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,197.1142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,206.3761);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,213.9985);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,211.722);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,154.5625);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,116.355);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,89.47085);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,69.42096);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,52.84109);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,39.8329);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,29.54828);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,20.27144);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,13.87467);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,9.831743);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,5.487749);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,3.711688);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.5713231);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(5.371604e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
