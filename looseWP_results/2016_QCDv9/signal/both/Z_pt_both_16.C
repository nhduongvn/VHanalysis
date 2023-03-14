#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_16()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Fri Mar 10 11:26:57 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(37.97653,-1.632238,1705.96,11.96975);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetFillStyle(4000);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLeftMargin(0.15709);
   Z_pt_both_16->SetRightMargin(0.1234783);
   Z_pt_both_16->SetBottomMargin(0.12);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.60955);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",40,0,2000);
   st_stack_137->SetMinimum(0);
   st_stack_137->SetMaximum(10.60955);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_137->GetXaxis()->SetRange(7,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetTitleOffset(1);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetTitleOffset(1);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,4.858981);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,8.772815);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,8.805926);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,5.182495);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,3.004031);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,1.752647);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.9707279);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.4998906);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.3697895);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.1578811);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.0938365);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.05730297);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.03307967);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.01668813);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.003126247);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.005839366);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.002690428);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.008410285);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(20,0.008151831);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(23,0.002861358);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.1210275);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1619691);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.1618928);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.1246176);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.09470586);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.0728629);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.05373924);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.03829941);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.03319126);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.0222225);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.0174556);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.0128829);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.0100028);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.006501208);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.003126247);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.004129614);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.002690428);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.004856756);
   VbbHcc_both_Z_pt_stack_1->SetBinError(20,0.004822475);
   VbbHcc_both_Z_pt_stack_1->SetBinError(23,0.002861358);
   VbbHcc_both_Z_pt_stack_1->SetEntries(12314);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,1.394923);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,2.790939);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,3.525957);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,2.590827);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,1.602267);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.8607133);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.4573225);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.2327784);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.1069987);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.04717283);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.02454954);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.01476773);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.007332002);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.003863115);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.003005711);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.001303463);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.00230884);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(18,0.0007866347);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0003646613);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0007581129);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(22,0.0002874074);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(24,0.000370343);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.0230789);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.03263792);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.03668115);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.03142106);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.02472512);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.01809066);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.01319348);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.009348181);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.006377765);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.004243976);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.003043402);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.002353322);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.001634634);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.00120487);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.001067935);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0006545902);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0009436177);
   VbbHcc_both_Z_pt_stack_2->SetBinError(18,0.000556642);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0003646613);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0005362026);
   VbbHcc_both_Z_pt_stack_2->SetBinError(22,0.0002874074);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_both_Z_pt_stack_2->SetBinError(24,0.000370343);
   VbbHcc_both_Z_pt_stack_2->SetEntries(36571);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
