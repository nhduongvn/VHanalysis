#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-2204154,1.171633,1.61638e+07);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.4327e+07);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(1.4327e+07);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Event/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,1.088763e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,5235102);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,2776097);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,1512034);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,903934.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,528683.9);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,413559.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,234389.9);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,191805);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,95714.75);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,77440.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,73648.54);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,34260.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,17813.87);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,15445.68);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,17287.72);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,1770.166);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,3529.039);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,2219.801);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,367.6837);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,63.03263);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,125557.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,107320.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,84202.61);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,58312.07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,36849.89);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,18050.44);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,41650.18);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,13005.29);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,26242.65);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,8453.15);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,15206.51);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,24428.93);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,5083.812);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,3225.845);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,3555.256);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,11574.67);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,630.1731);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,1321.48);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,847.7213);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,293.7818);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,47.22661);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(777279);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(0,0.3263112);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,1003782);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,729430.2);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,490201);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,336152.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,235798.5);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,168515.3);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,121343.9);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,87963.3);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,64017.78);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,46249.92);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,33264.98);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,23605.31);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,16587.83);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,11383.3);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,7665.931);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,4998.414);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,3120.929);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,1838.482);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,1021.191);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,516.4682);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,226.9087);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(22,86.99028);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(23,22.2887);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(24,3.184886);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(25,0.1992544);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(0,0.1489355);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,280.1316);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,238.6375);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,196.2341);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,162.7371);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,136.4987);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,115.445);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,98.48285);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,83.16271);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,71.21282);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,60.33328);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,51.35984);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,42.88598);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,36.47879);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,30.42513);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,25.31684);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,19.98785);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,16.0127);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,11.98139);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,9.377642);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,6.432878);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,4.205232);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(22,2.556983);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(23,1.305138);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(24,0.4893093);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(25,0.1167623);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(5.04042e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
