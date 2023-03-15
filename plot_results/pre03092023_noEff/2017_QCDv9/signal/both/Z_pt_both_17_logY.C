#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_17_logY()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(37.97653,-4.244555,1705.96,-0.3984016);
   Z_pt_both_17->SetFillColor(0);
   Z_pt_both_17->SetFillStyle(4000);
   Z_pt_both_17->SetBorderMode(0);
   Z_pt_both_17->SetBorderSize(2);
   Z_pt_both_17->SetLogy();
   Z_pt_both_17->SetLeftMargin(0.15709);
   Z_pt_both_17->SetRightMargin(0.1234783);
   Z_pt_both_17->SetBottomMargin(0.12);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",40,0,2000);
   st_stack_138->SetMinimum(51.78183);
   st_stack_138->SetMaximum(0.1648098);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_138->GetXaxis()->SetRange(7,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetTitleOffset(1);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Event/50.0");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetTitleOffset(1);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,0.3696633);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,0.8322684);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,1.070258);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,0.7850575);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.5467223);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.2949794);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.1749802);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.1124389);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.05150392);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.02186364);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.009558616);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.005244096);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.005069674);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.003735237);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.004440628);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.001360486);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(26,0.001404385);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(27,0.001292996);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.0222625);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.03322713);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.03756691);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.03238911);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.02693665);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.01984972);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.01503585);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01207092);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.008165408);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.005515606);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.004148742);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.0026281);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.002589272);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.002157547);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.002575943);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.001360486);
   VbbHcc_both_Z_pt_stack_1->SetBinError(26,0.001404385);
   VbbHcc_both_Z_pt_stack_1->SetBinError(27,0.001292996);
   VbbHcc_both_Z_pt_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.1197666);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.2792296);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.481486);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.4060598);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.2593034);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.1412465);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.06837232);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.04139652);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.01576315);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.00633813);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.001851201);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.001215169);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.000882957);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0006259904);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0001241808);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0002206182);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0001682787);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(26,0.00017797);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.004486444);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.006889359);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.009044407);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.008276733);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.006634178);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.004842348);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.003363053);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.002649115);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.001612146);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001031692);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.0005630737);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.000443287);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0004012045);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0003166719);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0001241808);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0002206182);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0001682787);
   VbbHcc_both_Z_pt_stack_2->SetBinError(26,0.00017797);
   VbbHcc_both_Z_pt_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_both_17->Modified();
   Z_pt_both_17->cd();
   Z_pt_both_17->SetSelected(Z_pt_both_17);
}
