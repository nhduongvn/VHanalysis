#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,0.5971182,7.029799,2.365682);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(126.5616);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(6.446825);
   st_stack_18->SetMaximum(154.4635);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.2920371);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.5027906);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.7528955);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.8848896);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.8081011);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.7974826);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.7328751);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.672822);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.6507987);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.5712282);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.5780003);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.6093863);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.5762106);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.5837984);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.2249014);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.1019685);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.04037524);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.03765681);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.01191335);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.01527674);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.01062894);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.005865016);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.00514705);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.02340094);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.03005863);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.03714802);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.04010841);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.03857539);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.0383611);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.03674775);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.03500404);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.03457822);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.0324341);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.03243208);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.03330167);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.03218078);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.03323199);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.0199189);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.0140049);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.008165465);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.008279681);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.004533978);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.004916016);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.00427903);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.003081434);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.002998255);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.0902862);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.207463);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.3415465);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.3807268);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.3143396);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.2153738);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.1548605);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.1233981);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.1178236);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.1078096);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.1151504);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1206069);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1229342);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.128163);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.06153426);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.03650065);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.02231177);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.009739302);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.008681827);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.004311624);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.002671085);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.001319796);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0004869548);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,0.0002588714);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.004701806);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.00714093);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.009148591);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.009655579);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.008812137);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.007257549);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.006125403);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.005516221);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.00536993);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.005178428);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.005282579);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.005440863);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.005439548);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.005574384);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.003897062);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.002966179);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.00234294);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001478023);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001473899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.001008207);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0007779695);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0005458132);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0003257675);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.0002588714);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
