#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_17_logY()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(37.97653,0.4388575,1705.96,2.981498);
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
   st->SetMaximum(403.8767);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",40,0,2000);
   st_stack_122->SetMinimum(5.545929);
   st_stack_122->SetMaximum(533.6219);
   st_stack_122->SetDirectory(0);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_122->GetXaxis()->SetRange(7,30);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetTitleOffset(1);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Events/50.0");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetTitleSize(0.037);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetTitleOffset(1);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,2.343739);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,4.038767);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,2.419288);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,1.099331);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.5111554);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.2583759);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.1414859);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.0735445);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.0481141);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.01536258);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.01855448);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.002147124);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.002998465);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.002631403);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.001251058);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.06545787);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.085946);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.06630703);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.04469548);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.03005212);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.02123223);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.01673936);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01175373);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.009249158);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.005219914);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.005512703);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.001999674);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.002147215);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.001949608);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.001251058);
   VbbHcc_both_Z_pt_stack_1->SetEntries(7343);

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
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.3464528);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.8534004);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.9239921);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.5787894);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.2521914);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.124505);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.06097232);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.0304708);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.01294189);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.006419655);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.00269117);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.0005857305);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.001064944);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0001740468);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0004880582);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,4.945919e-06);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.0001521107);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.009179639);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.01446138);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01504661);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01189041);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.007805955);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.005500951);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.003861055);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.002716605);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.001796272);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001233834);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.0008332977);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0003196745);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0004502948);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0001657891);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0003484729);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,4.945919e-06);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0001521107);
   VbbHcc_both_Z_pt_stack_2->SetEntries(15101);

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
