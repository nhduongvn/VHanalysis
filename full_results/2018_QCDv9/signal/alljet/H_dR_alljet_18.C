#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_18()
{
//=========Macro generated from canvas: H_dR_alljet_18/H_dR_alljet_18
//=========  (Thu Feb 16 10:35:21 2023) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_18 = new TCanvas("H_dR_alljet_18", "H_dR_alljet_18",0,0,600,600);
   H_dR_alljet_18->SetHighLightColor(2);
   H_dR_alljet_18->Range(-1.353788,-58.76231,7.264125,430.9236);
   H_dR_alljet_18->SetFillColor(0);
   H_dR_alljet_18->SetFillStyle(4000);
   H_dR_alljet_18->SetBorderMode(0);
   H_dR_alljet_18->SetBorderSize(2);
   H_dR_alljet_18->SetLeftMargin(0.15709);
   H_dR_alljet_18->SetRightMargin(0.1234783);
   H_dR_alljet_18->SetBottomMargin(0.12);
   H_dR_alljet_18->SetFrameFillStyle(1000);
   H_dR_alljet_18->SetFrameBorderMode(0);
   H_dR_alljet_18->SetFrameFillStyle(1000);
   H_dR_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(381.955);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0);
   st_stack_215->SetMaximum(381.955);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetTitleOffset(1);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetTitleSize(0.037);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetTitleOffset(1);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,0.002305427);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.803966);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,5.832045);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,7.537608);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,9.896391);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,14.04533);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,19.69748);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,27.98927);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,39.75381);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,59.36323);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,86.38226);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,119.8564);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,163.9849);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,209.2459);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,221.1577);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,83.89482);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,36.41574);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,18.79918);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,11.12946);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,6.736988);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,4.610164);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,3.153535);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,2.291996);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,1.859812);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.315441);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,1.092388);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,0.8409484);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,0.6244838);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,0.573936);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,1.534816);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,0.002305427);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,0.08978982);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,0.1322857);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,0.1538953);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,0.1743405);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,0.2066804);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,0.2470991);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,0.3175383);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,0.349387);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,0.4445893);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,0.529941);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,0.6133184);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,0.7276818);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,0.8222858);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,0.8580902);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,0.5262915);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,0.3347255);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,0.2373243);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,0.2333607);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,0.1485737);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,0.1244185);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,0.09361179);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,0.08005087);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,0.07117552);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,0.06025372);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,0.05459476);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,0.05269537);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,0.04195217);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,0.0398304);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,0.07023054);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(479240);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_stack_2 = new TH1D("VbbHcc_alljet_H_dR_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,0.4184337);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,0.9674857);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,1.388422);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,1.678347);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,1.894704);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,2.084585);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,2.507701);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,3.525097);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,5.550088);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,9.042081);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,14.48652);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,21.72097);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,29.95552);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,33.47902);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,15.21956);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,7.965157);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,4.709517);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,3.061186);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,1.995544);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,1.415011);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,0.9768476);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,0.6814393);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,0.467608);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,0.3199069);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,0.2359996);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,0.1721255);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,0.1097576);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,0.08034657);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,0.1715223);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,0.01368263);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,0.01883539);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,0.02268133);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,0.02525328);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,0.02976783);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,0.02798646);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,0.03208761);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,0.03614544);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,0.04654625);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,0.06101051);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,0.0764205);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,0.09404897);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,0.1106721);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,0.1141471);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,0.0778005);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,0.0569861);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,0.04241452);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,0.03372522);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,0.027104);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,0.02766931);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,0.02358161);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,0.01599224);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,0.01310492);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,0.01096073);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,0.01059844);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,0.00779326);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,0.006185302);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,0.005298717);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,0.009315855);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(488139);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_alljet_18->Modified();
   H_dR_alljet_18->cd();
   H_dR_alljet_18->SetSelected(H_dR_alljet_18);
}
