#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_all()
{
//=========Macro generated from canvas: Z_pt_tags_all/Z_pt_tags_all
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_all = new TCanvas("Z_pt_tags_all", "Z_pt_tags_all",0,0,600,600);
   Z_pt_tags_all->SetHighLightColor(2);
   Z_pt_tags_all->Range(37.97653,-2.419566,1705.96,17.74348);
   Z_pt_tags_all->SetFillColor(0);
   Z_pt_tags_all->SetFillStyle(4000);
   Z_pt_tags_all->SetBorderMode(0);
   Z_pt_tags_all->SetBorderSize(2);
   Z_pt_tags_all->SetLeftMargin(0.15709);
   Z_pt_tags_all->SetRightMargin(0.1234783);
   Z_pt_tags_all->SetBottomMargin(0.12);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(15.72718);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(15.72718);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_1 = new TH1D("VbbHcc_tags_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(1,6.056175);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(2,10.48478);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(3,6.578753);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(4,2.986224);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(5,1.426443);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(6,0.7578569);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(7,0.4196562);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(8,0.2403505);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(9,0.1295518);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(10,0.05452574);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(11,0.03801577);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(12,0.01008523);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(13,0.01692342);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(14,0.008098496);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(16,0.004534443);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(17,0.001546166);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(18,0.001545187);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(21,0.002353708);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(1,0.1143022);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(2,0.1502073);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(3,0.1187337);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(4,0.08145608);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(5,0.05468372);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(6,0.03985626);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(7,0.02984413);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(8,0.02244565);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(9,0.01683238);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(10,0.01066637);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(11,0.00891756);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(12,0.004127298);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(13,0.006017263);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(14,0.003801075);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(16,0.003378575);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(17,0.001545188);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(18,0.001545187);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(21,0.002353708);
   VbbHcc_tags_Z_pt_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_2 = new TH1D("VbbHcc_tags_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(1,0.9165747);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(2,2.316003);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(3,2.668009);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(4,1.63451);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(5,0.795381);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(6,0.3996467);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(7,0.2096889);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(8,0.1207795);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(9,0.05776418);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(10,0.03382941);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(11,0.02256694);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(12,0.01771741);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(13,0.01036254);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(14,0.00863401);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(15,0.002801551);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(16,0.002252257);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(17,0.002580329);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(18,0.003021877);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(19,0.001716816);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(20,0.0001707797);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(21,0.001153343);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(23,0.0008751304);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(24,2.01541e-05);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(25,0.001051808);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(26,7.170977e-05);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(27,0.0001275402);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(33,0.0005555899);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(35,0.0001892237);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(1,0.01630625);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(2,0.02613352);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(3,0.02819792);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(4,0.02176382);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(5,0.01522666);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(6,0.01073906);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(7,0.007810239);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(8,0.006094415);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(9,0.004175903);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(10,0.003152314);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(11,0.002586191);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(12,0.002374803);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(13,0.001754865);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(14,0.001626293);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(15,0.0007539798);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(16,0.0008090528);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(17,0.0007767118);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(18,0.0009297065);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(19,0.0006547468);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(20,0.0001707797);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(21,0.000708);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(23,0.0003995351);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(24,2.01541e-05);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(25,0.0005128606);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(26,7.170977e-05);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(27,0.0001275402);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(33,0.0004107145);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(35,0.0001892237);
   VbbHcc_tags_Z_pt_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_all->Modified();
   Z_pt_tags_all->cd();
   Z_pt_tags_all->SetSelected(Z_pt_tags_all);
}
