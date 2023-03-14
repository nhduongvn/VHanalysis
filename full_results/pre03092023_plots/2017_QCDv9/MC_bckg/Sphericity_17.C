#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_17()
{
//=========Macro generated from canvas: Sphericity_17/Sphericity_17
//=========  (Thu Feb 16 13:12:22 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_17 = new TCanvas("Sphericity_17", "Sphericity_17",0,0,600,600);
   Sphericity_17->SetHighLightColor(2);
   Sphericity_17->Range(-0.2183529,-0.1538462,1.171633,1.128205);
   Sphericity_17->SetFillColor(0);
   Sphericity_17->SetFillStyle(4000);
   Sphericity_17->SetBorderMode(0);
   Sphericity_17->SetBorderSize(2);
   Sphericity_17->SetLeftMargin(0.15709);
   Sphericity_17->SetRightMargin(0.1234783);
   Sphericity_17->SetBottomMargin(0.12);
   Sphericity_17->SetFrameFillStyle(1000);
   Sphericity_17->SetFrameBorderMode(0);
   Sphericity_17->SetFrameFillStyle(1000);
   Sphericity_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",50,0,1);
   st_stack_76->SetMinimum(0);
   st_stack_76->SetMaximum(0);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Sphericity");
   st_stack_76->GetXaxis()->SetRange(1,50);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/0.02");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_MC_Sphericity_stack_1 = new TH1D("VbbHcc_MC_Sphericity_stack_1","",50,0,1);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_MC_Sphericity_stack_2 = new TH1D("VbbHcc_MC_Sphericity_stack_2","",50,0,1);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_1","QCD","F");

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
   Sphericity_17->Modified();
   Sphericity_17->cd();
   Sphericity_17->SetSelected(Sphericity_17);
}
