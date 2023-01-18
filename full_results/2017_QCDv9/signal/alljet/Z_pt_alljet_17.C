#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_17()
{
//=========Macro generated from canvas: Z_pt_alljet_17/Z_pt_alljet_17
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_17 = new TCanvas("Z_pt_alljet_17", "Z_pt_alljet_17",0,0,600,600);
   Z_pt_alljet_17->SetHighLightColor(2);
   Z_pt_alljet_17->Range(37.97653,-87.86745,1705.96,644.3613);
   Z_pt_alljet_17->SetFillColor(0);
   Z_pt_alljet_17->SetFillStyle(4000);
   Z_pt_alljet_17->SetBorderMode(0);
   Z_pt_alljet_17->SetBorderSize(2);
   Z_pt_alljet_17->SetLeftMargin(0.15709);
   Z_pt_alljet_17->SetRightMargin(0.1234783);
   Z_pt_alljet_17->SetBottomMargin(0.12);
   Z_pt_alljet_17->SetFrameFillStyle(1000);
   Z_pt_alljet_17->SetFrameBorderMode(0);
   Z_pt_alljet_17->SetFrameFillStyle(1000);
   Z_pt_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(571.1384);
   
   TH1F *st_stack_202 = new TH1F("st_stack_202","",40,0,2000);
   st_stack_202->SetMinimum(0);
   st_stack_202->SetMaximum(571.1384);
   st_stack_202->SetDirectory(0);
   st_stack_202->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_202->SetLineColor(ci);
   st_stack_202->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_202->GetXaxis()->SetRange(7,30);
   st_stack_202->GetXaxis()->SetLabelFont(42);
   st_stack_202->GetXaxis()->SetTitleOffset(1);
   st_stack_202->GetXaxis()->SetTitleFont(42);
   st_stack_202->GetYaxis()->SetTitle("Events/50.0");
   st_stack_202->GetYaxis()->SetLabelFont(42);
   st_stack_202->GetYaxis()->SetTitleSize(0.037);
   st_stack_202->GetYaxis()->SetTitleFont(42);
   st_stack_202->GetZaxis()->SetLabelFont(42);
   st_stack_202->GetZaxis()->SetTitleOffset(1);
   st_stack_202->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_202);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,380.759);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,268.6151);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,38.17419);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,7.966482);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,2.465089);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,0.9209555);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.3904041);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.127144);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.07805743);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.04255603);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.01606003);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.0127156);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.004158571);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(14,0.0019135);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(15,0.001833231);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.001760937);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,0.8458835);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,0.7029948);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.2579467);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.1172566);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.06464446);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.03997546);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.02600521);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.01481368);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.01163454);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.008367887);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.00528018);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.004558207);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.002414961);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(14,0.0019135);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(15,0.001833231);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.001760937);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(483027);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,36.84048);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,41.16817);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,14.09406);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,4.40147);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,1.44671);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,0.4982929);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.185302);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.06752211);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.02723109);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.01028387);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.003713719);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.002299714);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.0008850441);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(16,0.0001883914);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(17,0.0002151445);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(18,0.000368615);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.09497528);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.1001896);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.05829584);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.03237626);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.01854681);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.01091648);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.006637475);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.004041014);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.002544578);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.001531894);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.0008829712);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.0007930631);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.0004568463);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(16,0.0001883914);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(17,0.0002151445);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(18,0.0002606501);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(462625);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_17->Modified();
   Z_pt_alljet_17->cd();
   Z_pt_alljet_17->SetSelected(Z_pt_alljet_17);
}
