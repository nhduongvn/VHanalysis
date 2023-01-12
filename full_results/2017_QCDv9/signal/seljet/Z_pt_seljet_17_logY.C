#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_17_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_17/Z_pt_seljet_17
//=========  (Mon Dec 19 11:10:38 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_17 = new TCanvas("Z_pt_seljet_17", "Z_pt_seljet_17",0,0,600,600);
   Z_pt_seljet_17->SetHighLightColor(2);
   Z_pt_seljet_17->Range(37.97653,0.03123371,1705.96,4.742332);
   Z_pt_seljet_17->SetFillColor(0);
   Z_pt_seljet_17->SetFillStyle(4000);
   Z_pt_seljet_17->SetBorderMode(0);
   Z_pt_seljet_17->SetBorderSize(2);
   Z_pt_seljet_17->SetLogy();
   Z_pt_seljet_17->SetLeftMargin(0.15709);
   Z_pt_seljet_17->SetRightMargin(0.1234783);
   Z_pt_seljet_17->SetBottomMargin(0.12);
   Z_pt_seljet_17->SetFrameFillStyle(1000);
   Z_pt_seljet_17->SetFrameBorderMode(0);
   Z_pt_seljet_17->SetFrameFillStyle(1000);
   Z_pt_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(11578.7);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",40,0,2000);
   st_stack_234->SetMinimum(3.949712);
   st_stack_234->SetMaximum(18673.34);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_234->GetXaxis()->SetRange(7,30);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetTitleOffset(1);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/50.0");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetTitleSize(0.037);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetTitleOffset(1);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,99.96619);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,115.787);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,27.36869);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,6.491037);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,2.132089);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,0.8256721);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.3623116);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.1223948);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.07776314);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.03768877);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.01606003);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.01085896);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.004158571);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(14,0.0019135);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(15,0.001833231);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.001760937);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.4265016);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.4583599);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.219957);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.1067208);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.06056046);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.03811027);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.02509984);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.01452543);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01163222);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.008043128);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.00528018);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.00416295);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.002414961);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(14,0.0019135);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(15,0.001833231);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.001760937);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(167881);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,20.39674);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,26.70412);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,11.32803);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,3.738966);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,1.264242);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.4461952);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.1694156);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.06246408);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.02633058);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.009679267);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.003461698);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.002299714);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.0008850441);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(16,0.0001883914);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(17,0.0002151445);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(18,0.000368615);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.07073141);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.08075627);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.05246998);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.03005086);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.01750662);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01042171);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.006403311);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.003918314);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.002515391);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.001513705);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.0008462408);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.0007930631);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.0004568463);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(16,0.0001883914);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(17,0.0002151445);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(18,0.0002606501);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(299433);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_17->Modified();
   Z_pt_seljet_17->cd();
   Z_pt_seljet_17->SetSelected(Z_pt_seljet_17);
}
