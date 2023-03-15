#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_bckg_18()
{
//=========Macro generated from canvas: Z_pt_bckg_18/Z_pt_bckg_18
//=========  (Fri Mar 10 11:21:20 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_bckg_18 = new TCanvas("Z_pt_bckg_18", "Z_pt_bckg_18",0,0,600,600);
   Z_pt_bckg_18->SetHighLightColor(2);
   Z_pt_bckg_18->Range(37.97653,-0.1538462,1705.96,1.128205);
   Z_pt_bckg_18->SetFillColor(0);
   Z_pt_bckg_18->SetFillStyle(4000);
   Z_pt_bckg_18->SetBorderMode(0);
   Z_pt_bckg_18->SetBorderSize(2);
   Z_pt_bckg_18->SetLeftMargin(0.15709);
   Z_pt_bckg_18->SetRightMargin(0.1234783);
   Z_pt_bckg_18->SetBottomMargin(0.12);
   Z_pt_bckg_18->SetFrameFillStyle(1000);
   Z_pt_bckg_18->SetFrameBorderMode(0);
   Z_pt_bckg_18->SetFrameFillStyle(1000);
   Z_pt_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",40,0,2000);
   st_stack_66->SetMinimum(0);
   st_stack_66->SetMaximum(0);
   st_stack_66->SetDirectory(0);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_66->GetXaxis()->SetRange(7,30);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetTitleSize(0.037);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_MC_Z_pt_stack_1 = new TH1D("VbbHcc_MC_Z_pt_stack_1","",40,0,2000);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_pt_stack_2 = new TH1D("VbbHcc_MC_Z_pt_stack_2","",40,0,2000);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_bckg_18->Modified();
   Z_pt_bckg_18->cd();
   Z_pt_bckg_18->SetSelected(Z_pt_bckg_18);
}
