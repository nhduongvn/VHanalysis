#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Mar 23 11:25:12 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2183529,-0.153275,1.171633,1.124016);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15709);
   Sphericity_tags_17->SetRightMargin(0.1234783);
   Sphericity_tags_17->SetBottomMargin(0.12);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9962873);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0);
   st_stack_58->SetMaximum(0.9962873);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("Sphericity");
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetTitleOffset(1);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Event/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetTitleSize(0.037);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetTitleOffset(1);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.1029208);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.3822224);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.5979291);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.5955068);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.4725683);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.2741225);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.1278101);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.05803725);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.05886368);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.03382412);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.03540983);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.0141652);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.01536434);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.01490555);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.01214758);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.006937002);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.001907029);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.01352629);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.02676297);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.03397945);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.0336523);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.0301125);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02241513);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.01525292);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.0100463);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01037607);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.007810293);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.008037738);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.00506016);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.005477895);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.005250701);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.004691878);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.003540959);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.001907029);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1647);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.06851817);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.1865549);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.2289894);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.2168227);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.1544016);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.09838408);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.05851118);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.03985764);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.02781383);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.0209757);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.01167104);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.007325216);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.008959118);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.008182922);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.005516735);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.002366371);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.002340773);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.001220601);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.0009567626);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.0005651277);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.003992076);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.006631774);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.007384603);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007190295);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.00606545);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.004882692);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.003733227);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.00303802);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.002585729);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.002250105);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.001655054);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.00128568);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.001459032);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.001372666);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.001109363);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.0007518913);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.000757918);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.0005567055);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0004823889);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.0004007052);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(5089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
