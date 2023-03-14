#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18_logY()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,-4.10552,1705.96,-0.2593661);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetFillStyle(4000);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLogy();
   Z_pt_tags_18->SetLeftMargin(0.15709);
   Z_pt_tags_18->SetRightMargin(0.1234783);
   Z_pt_tags_18->SetBottomMargin(0.12);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(39.2375);
   st_stack_11->SetMaximum(0.2269962);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Event/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.4557335);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,1.096346);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,1.461267);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,1.007789);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.6026157);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.4008875);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.2294651);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.1640217);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.06546317);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.03690906);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.006652279);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.007406129);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.0008759808);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.007138305);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.002331458);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.006736105);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.0297978);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.04651385);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.05297255);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.05533502);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.03908819);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.02852555);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02086506);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.02239937);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01122397);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.008344276);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.003340366);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.003746082);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.0008759808);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.003667163);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.002331458);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.004985696);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.1622042);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.3475619);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.6297168);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.5389267);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.3385409);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1921389);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.09391738);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.0567149);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.02336768);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.01263919);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.003549949);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.001830599);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0003050732);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0004661385);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0005329487);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0002261959);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.007425814);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.009327033);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01299335);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01250061);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.009173538);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.007256838);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.004793072);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.003870579);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.002376312);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001752012);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0009007275);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0006474137);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0003050732);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0003319812);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003769289);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0002261959);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
