void Z_pt_tags_16_logY()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Thu Feb  9 09:44:29 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(37.97653,0.4219069,1705.96,3.049871);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetFillStyle(4000);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLogy();
   Z_pt_tags_16->SetLeftMargin(0.15709);
   Z_pt_tags_16->SetRightMargin(0.1234783);
   Z_pt_tags_16->SetBottomMargin(0.12);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(459.6354);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(5.46088);
   st_stack_9->SetMaximum(612.4561);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetLabelSize(0.035);
   st_stack_9->GetXaxis()->SetTitleSize(0.035);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.035);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleOffset(0);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetLabelSize(0.035);
   st_stack_9->GetZaxis()->SetTitleSize(0.035);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,1.927492);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,3.768969);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,2.516639);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,1.265737);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.6669927);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.357994);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.2321416);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.1187342);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.04500338);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.01762845);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.0331054);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.01107179);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.01138089);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.0008391366);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.07617208);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1063576);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.08700499);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.06141516);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.0439572);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.03295628);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02600836);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01884287);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01131477);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.007208542);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.01000804);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.005497724);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.005697621);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.0008391366);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3858);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.3125658);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.827385);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.9495135);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.6155723);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.3508743);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1961021);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.08537427);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.04647408);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.01170878);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.00805664);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.003501821);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.002166779);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.000546909);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0007648963);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0007582263);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0003105297);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0006520687);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.000387588);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.01093292);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.01780415);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01907633);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01531187);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01157043);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.008637916);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.005710283);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.004162629);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.002092793);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001761886);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.001168417);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0008870468);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0004286971);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0005439174);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0005361485);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003105297);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0004643069);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.000387588);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(9103);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
