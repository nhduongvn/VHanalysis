void Z_jetpt_JEC_tags_noJEC_17()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_noJEC_17/Z_jetpt_JEC_tags_noJEC_17
//=========  (Thu Mar 30 10:44:19 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_tags_noJEC_17 = new TCanvas("Z_jetpt_JEC_tags_noJEC_17", "Z_jetpt_JEC_tags_noJEC_17",0,0,600,600);
   Z_jetpt_JEC_tags_noJEC_17->SetHighLightColor(2);
   Z_jetpt_JEC_tags_noJEC_17->Range(-65.50587,-0.6927188,351.4899,5.079938);
   Z_jetpt_JEC_tags_noJEC_17->SetFillColor(0);
   Z_jetpt_JEC_tags_noJEC_17->SetFillStyle(4000);
   Z_jetpt_JEC_tags_noJEC_17->SetBorderMode(0);
   Z_jetpt_JEC_tags_noJEC_17->SetBorderSize(2);
   Z_jetpt_JEC_tags_noJEC_17->SetLeftMargin(0.15709);
   Z_jetpt_JEC_tags_noJEC_17->SetRightMargin(0.1234783);
   Z_jetpt_JEC_tags_noJEC_17->SetBottomMargin(0.12);
   Z_jetpt_JEC_tags_noJEC_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_noJEC_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_noJEC_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_noJEC_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.288259);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",150,0,300);
   st_stack_278->SetMinimum(0);
   st_stack_278->SetMaximum(4.502672);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_278->GetXaxis()->SetRange(1,150);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetLabelSize(0.035);
   st_stack_278->GetXaxis()->SetTitleSize(0.035);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetLabelSize(0.035);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleOffset(0);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetLabelSize(0.035);
   st_stack_278->GetZaxis()->SetTitleSize(0.035);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinContent(0,2.947272);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinContent(1,0.02157855);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinContent(2,2.514246);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinContent(3,0.5187881);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinError(0,0.0748081);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinError(1,0.006305843);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinError(2,0.0689723);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetBinError(3,0.03102927);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinContent(0,1.27038);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinContent(1,0.006167587);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinContent(2,1.045009);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinContent(3,0.2132785);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinError(0,0.0174915);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinError(1,0.001204978);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinError(2,0.01585403);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetBinError(3,0.007183422);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_noJEC_Z_jetpt_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tags_noJEC_17->Modified();
   Z_jetpt_JEC_tags_noJEC_17->cd();
   Z_jetpt_JEC_tags_noJEC_17->SetSelected(Z_jetpt_JEC_tags_noJEC_17);
}
