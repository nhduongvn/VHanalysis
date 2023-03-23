#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Mar 23 11:25:12 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-0.4582452,1.171633,3.360465);
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
   st->SetMaximum(2.978594);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0);
   st_stack_60->SetMaximum(2.978594);
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
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,0.3134389);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,1.204761);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,1.792311);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,1.747936);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,1.459166);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,0.7661502);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,0.3672618);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,0.1824978);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,0.1526182);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,0.1167005);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,0.07682805);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,0.05351461);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,0.03001795);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,0.03842666);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,0.02685887);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,0.02087491);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,0.009416485);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,0.01312932);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(20,0.004919465);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,0.02728725);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,0.06077474);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,0.06987458);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,0.06634735);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,0.07277277);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,0.04303969);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,0.02983949);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,0.02097172);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,0.01910611);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,0.01676883);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,0.01323486);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,0.01156744);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,0.008572459);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,0.009586088);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,0.007646169);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,0.007139262);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,0.004773407);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,0.005898489);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(20,0.003479033);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(3779);

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
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,0.2064923);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,0.5475106);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,0.679922);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,0.6405942);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,0.4610523);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,0.2947759);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,0.1751272);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,0.1072126);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,0.07425437);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,0.05089109);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,0.03434872);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,0.03186124);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,0.02825106);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,0.02196833);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,0.01704731);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,0.01094174);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,0.007665417);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.004882768);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.002186308);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.002277801);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,0.008124112);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,0.01323002);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,0.01471683);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,0.01433082);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,0.01299989);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,0.00992346);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,0.008353994);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,0.005751996);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,0.004839007);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,0.003951868);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,0.003287316);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,0.003229119);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,0.00301712);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.002628175);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.00228397);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.001949131);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.001556159);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.001293982);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.0007896969);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.0008707386);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(11578);

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
