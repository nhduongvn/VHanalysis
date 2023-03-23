#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_bckg_16()
{
//=========Macro generated from canvas: H_pt_bckg_16/H_pt_bckg_16
//=========  (Thu Mar 23 11:54:01 2023) by ROOT version 6.26/06
   TCanvas *H_pt_bckg_16 = new TCanvas("H_pt_bckg_16", "H_pt_bckg_16",0,0,600,600);
   H_pt_bckg_16->SetHighLightColor(2);
   H_pt_bckg_16->Range(37.97653,-0.1538462,1705.96,1.128205);
   H_pt_bckg_16->SetFillColor(0);
   H_pt_bckg_16->SetFillStyle(4000);
   H_pt_bckg_16->SetBorderMode(0);
   H_pt_bckg_16->SetBorderSize(2);
   H_pt_bckg_16->SetLeftMargin(0.15709);
   H_pt_bckg_16->SetRightMargin(0.1234783);
   H_pt_bckg_16->SetBottomMargin(0.12);
   H_pt_bckg_16->SetFrameFillStyle(1000);
   H_pt_bckg_16->SetFrameBorderMode(0);
   H_pt_bckg_16->SetFrameFillStyle(1000);
   H_pt_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",1000,0,2000);
   st_stack_56->SetMinimum(0);
   st_stack_56->SetMaximum(0);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_56->GetXaxis()->SetRange(151,750);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetTitleOffset(1);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetTitleSize(0.037);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_MC_H_pt_stack_1 = new TH1D("VbbHcc_MC_H_pt_stack_1","",1000,0,2000);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_H_pt_stack_2 = new TH1D("VbbHcc_MC_H_pt_stack_2","",1000,0,2000);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_1","QCD","F");

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
   H_pt_bckg_16->Modified();
   H_pt_bckg_16->cd();
   H_pt_bckg_16->SetSelected(H_pt_bckg_16);
}
