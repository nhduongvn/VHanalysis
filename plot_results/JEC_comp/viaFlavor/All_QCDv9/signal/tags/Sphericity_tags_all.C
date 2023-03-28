#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-0.4162576,1.171633,3.052555);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetLeftMargin(0.15709);
   Sphericity_tags_all->SetRightMargin(0.1234783);
   Sphericity_tags_all->SetBottomMargin(0.12);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.705674);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0);
   st_stack_60->SetMaximum(2.705674);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("Sphericity");
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Event/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,0.2544069);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,1.088477);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,1.620814);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,1.62919);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,1.388109);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,0.7753101);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,0.4860208);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,0.2848313);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,0.2269453);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,0.2018857);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,0.1517046);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,0.09953465);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,0.08008182);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,0.09372028);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,0.04122835);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,0.04315775);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,0.03775801);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,0.02078378);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,0.01049327);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(21,0.002958322);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,0.02480626);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,0.05785942);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,0.06711574);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,0.06455642);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,0.07095976);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,0.04360219);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,0.03464671);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,0.02628009);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,0.02333909);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,0.02238169);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,0.01881863);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,0.01575484);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,0.01341165);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,0.01539667);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,0.009648364);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,0.01020504);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,0.009515564);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,0.007467206);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,0.004719625);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(21,0.002958322);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(3843);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,0.1780985);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,0.5245312);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,0.6210769);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,0.6165191);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,0.4499949);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,0.2957594);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,0.2058231);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,0.1371469);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,0.1071857);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,0.07537585);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,0.06713363);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,0.05301596);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,0.04614618);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,0.03247885);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,0.03252953);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,0.02319942);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,0.01243478);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.01048045);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.006674255);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.001532884);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.0006896062);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,0.007523349);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,0.01301039);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,0.01407764);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,0.01431967);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,0.01294054);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,0.009740829);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,0.008326355);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,0.007435146);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,0.005834354);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,0.004832307);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,0.004607928);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,0.004161533);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,0.003859663);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.003234192);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.003158477);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.002770594);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.001989665);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.001819724);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.001432565);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.000699532);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.0004116451);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(11833);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
