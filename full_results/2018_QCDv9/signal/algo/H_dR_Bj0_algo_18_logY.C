void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Feb  9 09:44:33 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,0.5410648,7.029799,2.579034);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLogy();
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(189.0124);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(6.104093);
   st_stack_107->SetMaximum(237.2668);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetLabelSize(0.035);
   st_stack_107->GetXaxis()->SetTitleSize(0.035);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetLabelSize(0.035);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleOffset(0);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetLabelSize(0.035);
   st_stack_107->GetZaxis()->SetTitleSize(0.035);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.430119);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1.410972);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1.258496);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.8352046);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.4369463);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.229852);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.1001335);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.05689405);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.047791);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.02275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.01365457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.03128655);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.05666601);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.05351671);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.04359733);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.03153388);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.02287112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.0150957);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.01137881);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.01042885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.007196591);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.005574455);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(2134);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.1162668);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.4791512);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.3667799);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.1764979);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.07041935);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.03356156);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.01797941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.009589018);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.004195195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.004494852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.001797941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.001498284);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.005902554);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.01198253);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.01048371);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.007272467);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.004593652);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.003171269);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.002321132);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001695115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.001121213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.001160566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0007340063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.000670053);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(4285);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
