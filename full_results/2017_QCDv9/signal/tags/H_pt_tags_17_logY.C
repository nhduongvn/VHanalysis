#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,0.462993,1705.96,2.88493);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetFillStyle(4000);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
   H_pt_tags_17->SetLogy();
   H_pt_tags_17->SetLeftMargin(0.15709);
   H_pt_tags_17->SetRightMargin(0.1234783);
   H_pt_tags_17->SetBottomMargin(0.12);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(336.506);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(5.670553);
   st_stack_14->SetMaximum(439.2745);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,2.0824);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,3.36506);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,2.011677);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.067303);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.4305074);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.2193418);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1112817);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.08018029);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.05854944);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.01414513);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.01332778);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.005634108);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.003007753);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.001259297);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.001727301);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.06221335);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.07844496);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.06065737);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.04394103);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.02770581);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.02017453);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.01426542);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01208151);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.0104161);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.00482977);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.00471908);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.002991408);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.00212737);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.001259297);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.001727301);
   VbbHcc_tags_H_pt_stack_1->SetBinError(22,0.001646926);
   VbbHcc_tags_H_pt_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.3086511);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.6957169);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.7442669);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.4782045);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.2404299);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1051053);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.06140137);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.02894074);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.01268057);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.006116382);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.002416408);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.002072303);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.001045346);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.0007290674);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.0002877666);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0002291009);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,4.945919e-06);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.00869416);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01308921);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01350254);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01081599);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.007638114);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.0050738);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.003813735);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.00267465);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.001709971);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001230814);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.0007343733);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0007168187);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0005204162);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0004247857);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.0002263783);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0002291009);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,4.945919e-06);
   VbbHcc_tags_H_pt_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
