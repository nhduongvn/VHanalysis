#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all_logY()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-2.724624,1.171633,1.12153);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLogy();
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(11.37384);
   st_stack_192->SetMaximum(5.4565);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("Aplanarity");
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Event/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,4.099404);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,2.715642);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,1.777356);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,1.143963);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,0.8178201);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,0.6232889);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,0.4276342);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,0.3232452);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.211441);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.1593868);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.1301014);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,0.07594471);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.092023);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.04459839);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,0.02308985);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,0.009145925);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,0.00702611);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,0.004301987);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,0.002273864);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(22,0.001413491);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.09225995);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.06932149);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.05799258);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.04492619);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.04022018);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.03275173);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.02766981);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.02402342);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.01988437);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.01662148);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.0150709);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,0.01185182);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.01320812);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.008677817);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,0.005993731);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,0.003531464);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,0.003148813);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,0.002489213);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,0.001650939);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(22,0.001413491);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1.634116);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,1.217152);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,0.8069);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,0.5532335);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,0.376591);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.2695939);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.1853825);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.1286512);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.08447441);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.05883313);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.04542738);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.028117);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.02106126);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.01130699);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.006415753);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,0.004447126);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.002390422);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.0004198358);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.002068052);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.0005687313);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.000336031);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.01958053);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.01677833);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.01368709);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.01136704);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.009259471);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.007794433);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.006614454);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.006477211);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.004343926);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.003870073);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.004011857);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.00307149);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.0022452);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.001553998);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.001213629);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.001005825);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.0007429718);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.0003204027);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.0007401925);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.0003605265);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.0002388525);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
