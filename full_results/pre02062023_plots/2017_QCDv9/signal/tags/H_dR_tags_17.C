#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-0.2380648,7.264125,1.745809);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.547421);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(1.547421);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1720211);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.3251026);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.4059074);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.5477059);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.6302149);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.6625242);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.762349);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.7331771);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.6938356);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.6611497);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.7309252);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.785624);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.8553862);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.8504754);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.2875296);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.1649862);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.07747001);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.056435);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.04071355);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.03362289);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01394623);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.009222891);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.003138135);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.002923655);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01763835);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.02468502);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02697008);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.03179446);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.03365375);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.03498518);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.03758946);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.03634612);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.03584906);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.03522465);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.03676756);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.03740791);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.03970205);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.03962325);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.02310304);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01706855);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01167594);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.009705013);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.008257288);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.007702677);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.005123368);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.003867265);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.002296413);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.001905132);
   VbbHcc_tags_H_dR_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.04445927);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.0958836);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1467924);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.2160623);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.2402637);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.2360913);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.2330977);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.1829824);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1686044);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1578077);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1501996);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1726135);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.1762281);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1793338);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.09297397);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.04768835);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.03088259);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.01893978);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01437707);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.009551981);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.00535171);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.002704316);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.003171316);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0004644751);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003275995);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.004809187);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.006020178);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.007275695);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.007682317);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.007613679);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.007599115);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.006690723);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.006456067);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.006221375);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.006006915);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.006480114);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.006533937);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.006644722);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.004749039);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003411306);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.002736272);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.002162257);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001858866);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001506519);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001140401);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0007788026);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0008920978);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0003327574);
   VbbHcc_tags_H_dR_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
