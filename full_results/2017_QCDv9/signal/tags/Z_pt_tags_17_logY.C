void Z_pt_tags_17_logY()
{
//=========Macro generated from canvas: Z_pt_tags_17/Z_pt_tags_17
//=========  (Thu Feb  9 09:44:29 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_tags_17 = new TCanvas("Z_pt_tags_17", "Z_pt_tags_17",0,0,600,600);
   Z_pt_tags_17->SetHighLightColor(2);
   Z_pt_tags_17->Range(37.97653,0.3607563,1705.96,3.300257);
   Z_pt_tags_17->SetFillColor(0);
   Z_pt_tags_17->SetFillStyle(4000);
   Z_pt_tags_17->SetBorderMode(0);
   Z_pt_tags_17->SetBorderSize(2);
   Z_pt_tags_17->SetLogy();
   Z_pt_tags_17->SetLeftMargin(0.15709);
   Z_pt_tags_17->SetRightMargin(0.1234783);
   Z_pt_tags_17->SetBottomMargin(0.12);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(738.618);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(5.17007);
   st_stack_10->SetMaximum(1014.628);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetLabelSize(0.035);
   st_stack_10->GetXaxis()->SetTitleSize(0.035);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetLabelSize(0.035);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleOffset(0);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetLabelSize(0.035);
   st_stack_10->GetZaxis()->SetTitleSize(0.035);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,3.203834);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,6.033633);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,3.960745);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,2.036778);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,1.148245);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.568144);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.3097618);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.2011553);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.08609513);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.04355882);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.02253846);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.01041181);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.007223961);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.006756617);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.001737085);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.003684786);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.07823321);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1073488);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.08632585);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.06198212);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.04641175);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.0329448);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02402738);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01922606);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01257554);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.009220649);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.007218198);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.004284706);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.00368953);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.003392458);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.003670836);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.001737085);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.002608578);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.001938755);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(26,0.002001313);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(27,0.001842579);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(10244);

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
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.4808126);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1.352548);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,1.542477);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,1.008297);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.5528862);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.2739496);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.1321199);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.07411651);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.0280647);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.01234763);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.003760708);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.002640957);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.002409622);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.001185541);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0004050878);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0003143911);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0002398048);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.0107246);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.0181139);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01932235);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01557328);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01154667);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.008073208);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.00557769);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.004244144);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.002559398);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001718705);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0009473982);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0008141768);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0007747434);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0005383069);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0002887157);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003143911);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0002398048);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(23698);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_17->Modified();
   Z_pt_tags_17->cd();
   Z_pt_tags_17->SetSelected(Z_pt_tags_17);
}
