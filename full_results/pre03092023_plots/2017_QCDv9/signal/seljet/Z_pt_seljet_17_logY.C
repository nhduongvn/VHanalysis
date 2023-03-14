#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_17_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_17/Z_pt_seljet_17
//=========  (Thu Feb 16 10:37:21 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_17 = new TCanvas("Z_pt_seljet_17", "Z_pt_seljet_17",0,0,600,600);
   Z_pt_seljet_17->SetHighLightColor(2);
   Z_pt_seljet_17->Range(37.97653,0.146802,1705.96,4.219704);
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
   st->SetMaximum(4255.207);
   
   TH1F *st_stack_266 = new TH1F("st_stack_266","",40,0,2000);
   st_stack_266->SetMinimum(4.320662);
   st_stack_266->SetMaximum(6492.527);
   st_stack_266->SetDirectory(0);
   st_stack_266->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_266->SetLineColor(ci);
   st_stack_266->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_266->GetXaxis()->SetRange(7,30);
   st_stack_266->GetXaxis()->SetLabelFont(42);
   st_stack_266->GetXaxis()->SetTitleOffset(1);
   st_stack_266->GetXaxis()->SetTitleFont(42);
   st_stack_266->GetYaxis()->SetTitle("Events/50.0");
   st_stack_266->GetYaxis()->SetLabelFont(42);
   st_stack_266->GetYaxis()->SetTitleSize(0.037);
   st_stack_266->GetYaxis()->SetTitleFont(42);
   st_stack_266->GetZaxis()->SetLabelFont(42);
   st_stack_266->GetZaxis()->SetTitleOffset(1);
   st_stack_266->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_266);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,35.29492);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,42.55207);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,24.39029);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,6.979952);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,2.342151);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,0.8611193);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.4026347);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.1900295);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.06861557);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.02816922);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.02160933);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.007778238);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.0170539);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(14,0.002003342);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(15,0.003856594);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.002359533);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.2583591);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.283215);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.2123577);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.1130562);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.06543026);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.03970188);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.02707848);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.01818574);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01109986);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.007020439);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.006264413);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.003890826);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.005541983);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(14,0.002003342);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(15,0.002729717);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.002359533);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(17,0.001870372);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(19,0.001639841);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(65683);

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
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,11.59839);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,14.59117);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,10.72581);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,4.052847);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,1.429266);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.499475);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.1760005);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.07573539);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.02728499);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.01282794);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.007259762);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.001248229);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.001748713);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(14,0.0007376271);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.0002639519);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.05292573);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.05933323);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.05075975);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.03112364);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.01845247);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01091501);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.006446451);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.004237724);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.002566834);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.001743714);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.001319782);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.0005159232);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.0006686782);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(14,0.000426456);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.0002639519);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(187491);

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
