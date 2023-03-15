#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.1692598,7.029799,1.241238);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.100189);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(1.100189);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.2403178);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.4144473);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.5263999);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.5269434);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.4520971);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.4272633);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.3377482);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.2542977);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.1722643);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.1219);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.07379624);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.05419606);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.05176154);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.02060781);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01197787);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.009656928);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.001932501);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.02170994);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02822299);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.03163629);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.03160118);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.02994297);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.02916269);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.02512085);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.02245983);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.0177046);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01516849);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01184364);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.01017454);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.009743791);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.005828466);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.004568965);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.004084185);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.001932501);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.05053338);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.1268095);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.200934);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.2065157);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1802944);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.09908671);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.058012);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.03726047);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.02108797);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.0145017);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.008957624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.01429879);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.009542566);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.01170487);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.002845741);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.00188976);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0006161023);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0008863965);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0003877132);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0004777619);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003461525);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.005527996);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.006989909);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.007066945);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.006635439);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.004887698);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.003746153);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.003011611);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.002251636);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001871644);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001461699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001866486);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001501108);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001685109);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0008467183);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.000682823);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0004357834);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0004603403);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.000275114);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0003463006);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
