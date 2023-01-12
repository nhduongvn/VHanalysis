#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_17()
{
//=========Macro generated from canvas: Z_dR_alljet_17/Z_dR_alljet_17
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_17 = new TCanvas("Z_dR_alljet_17", "Z_dR_alljet_17",0,0,600,600);
   Z_dR_alljet_17->SetHighLightColor(2);
   Z_dR_alljet_17->Range(-1.310117,-15.01528,7.029799,110.112);
   Z_dR_alljet_17->SetFillColor(0);
   Z_dR_alljet_17->SetFillStyle(4000);
   Z_dR_alljet_17->SetBorderMode(0);
   Z_dR_alljet_17->SetBorderSize(2);
   Z_dR_alljet_17->SetLeftMargin(0.15709);
   Z_dR_alljet_17->SetRightMargin(0.1234783);
   Z_dR_alljet_17->SetBottomMargin(0.12);
   Z_dR_alljet_17->SetFrameFillStyle(1000);
   Z_dR_alljet_17->SetFrameBorderMode(0);
   Z_dR_alljet_17->SetFrameFillStyle(1000);
   Z_dR_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(97.59929);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",30,0,6);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(97.59929);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_186->GetXaxis()->SetRange(1,30);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Events/0.2");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,0.01664948);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,11.30216);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,22.21722);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,23.18938);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,26.78615);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,30.17847);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,33.6816);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,37.21857);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,39.96687);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,44.13929);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,46.30508);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,49.19988);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,53.0107);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,56.72911);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,55.338);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,33.73844);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,23.18789);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,17.62911);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,14.22839);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,11.6435);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,9.885308);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,8.543815);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,7.371206);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,6.489544);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,5.813818);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,4.866731);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,4.617296);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,4.024159);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,3.436766);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,14.82228);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,0.005369201);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,0.144762);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,0.2031946);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,0.2075309);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,0.2228569);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,0.2366872);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,0.249627);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,0.2622472);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,0.2719111);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,0.2855639);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,0.2928918);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,0.301269);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,0.3133507);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,0.3247997);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,0.3202701);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,0.2502813);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,0.2072712);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,0.1801858);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,0.1619591);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,0.1461602);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,0.1358289);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,0.1256471);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,0.116844);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,0.10931);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,0.1042733);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,0.09526678);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,0.09311821);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,0.08636247);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,0.08030339);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,0.1688759);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(483027);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,0.001825453);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,1.40834);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,2.717045);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,3.101063);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,3.752656);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,4.307226);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,4.793391);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,5.250738);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,5.675647);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,6.212186);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,6.66074);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,7.21141);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,7.689748);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,8.337082);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,8.377254);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,5.187113);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,3.596422);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,2.806472);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,2.198032);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,1.78751);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,1.445549);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,1.204952);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,0.971219);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,0.8160883);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,0.6731833);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,0.5355635);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,0.4405723);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,0.3515997);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,0.2803463);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,0.9562147);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,0.0006526409);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,0.01856003);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,0.02573939);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,0.02747559);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,0.03019114);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,0.03237538);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,0.03415757);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,0.03580766);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,0.03719871);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,0.03889046);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,0.04029064);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,0.04191932);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,0.04330129);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,0.0450823);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,0.04525093);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,0.03551998);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,0.02958094);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,0.02608742);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,0.02309019);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,0.02082417);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,0.01876164);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,0.01707837);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,0.01529344);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,0.01400786);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,0.01275587);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,0.01135916);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,0.01033262);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,0.009173768);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,0.008206082);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,0.01511354);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(462625);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_alljet_17->Modified();
   Z_dR_alljet_17->cd();
   Z_dR_alljet_17->SetSelected(Z_dR_alljet_17);
}
