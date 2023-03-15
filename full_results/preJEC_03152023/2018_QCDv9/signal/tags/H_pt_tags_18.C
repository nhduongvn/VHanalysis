#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Thu Mar  9 13:09:04 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(37.97653,-0.3531591,1705.96,2.589834);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetFillStyle(4000);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLeftMargin(0.15709);
   H_pt_tags_18->SetRightMargin(0.1234783);
   H_pt_tags_18->SetBottomMargin(0.12);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.295534);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0);
   st_stack_15->SetMaximum(2.295534);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.818989);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,1.671471);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,1.905293);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.328079);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.9345562);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.5768364);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.3100866);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.2170097);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.08412884);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.04444537);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.02486091);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.02263435);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.002397148);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.001255088);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.008900683);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,0.003333383);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.04841349);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.07369608);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.072982);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.0611269);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.06900335);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.04481238);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02895371);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.02438023);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01541941);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.01093213);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.008060027);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.007638601);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.002397148);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.001255088);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.006825481);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,0.003333383);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3172);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.2825331);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.5917178);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.8557568);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.7464327);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.4540072);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.254079);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.1196687);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.07799791);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.03159633);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01408819);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.005171662);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.004506733);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.002107092);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.001964261);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.0115263);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01479549);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01769587);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01748638);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.01329051);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.009672022);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.006979431);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.005319258);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.003360202);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002260887);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.00127226);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.001219251);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0008679298);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0008313219);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetEntries(10130);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
