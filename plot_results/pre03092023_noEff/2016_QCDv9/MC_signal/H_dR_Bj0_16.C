#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_16()
{
//=========Macro generated from canvas: H_dR_Bj0_16/H_dR_Bj0_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_16 = new TCanvas("H_dR_Bj0_16", "H_dR_Bj0_16",0,0,600,600);
   H_dR_Bj0_16->SetHighLightColor(2);
   H_dR_Bj0_16->Range(-1.310117,-2.584733,7.029799,18.95471);
   H_dR_Bj0_16->SetFillColor(0);
   H_dR_Bj0_16->SetFillStyle(4000);
   H_dR_Bj0_16->SetBorderMode(0);
   H_dR_Bj0_16->SetBorderSize(2);
   H_dR_Bj0_16->SetLeftMargin(0.15709);
   H_dR_Bj0_16->SetRightMargin(0.1234783);
   H_dR_Bj0_16->SetBottomMargin(0.12);
   H_dR_Bj0_16->SetFrameFillStyle(1000);
   H_dR_Bj0_16->SetFrameBorderMode(0);
   H_dR_Bj0_16->SetFrameFillStyle(1000);
   H_dR_Bj0_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",30,0,6);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(16.80076);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_13->GetXaxis()->SetRange(1,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/0.2");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_MC_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_MC_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(1,4.696008);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(2,10.87165);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(3,13.26479);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(4,13.4535);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(5,13.13351);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(6,12.35129);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(7,11.17524);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(8,10.22893);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(9,8.842279);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(10,7.928787);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(11,7.138369);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(12,6.388977);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(13,5.850181);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(14,5.53292);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(15,5.136344);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(16,4.824553);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(17,2.721332);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(18,1.701175);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(19,1.230753);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(20,0.8396473);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(21,0.5470015);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(22,0.3282009);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(23,0.1859805);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(24,0.1641004);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(25,0.1285454);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(26,0.04923013);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(27,0.05470015);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(28,0.02461507);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(29,0.01914505);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(30,0.01914505);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinContent(31,0.04102511);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(1,0.1133297);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(2,0.1724357);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(3,0.1904712);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(4,0.1918213);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(5,0.1895263);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(6,0.1837958);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(7,0.1748267);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(8,0.1672609);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(9,0.1555111);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(10,0.1472593);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(11,0.1397265);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(12,0.1321889);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(13,0.1264922);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(14,0.1230145);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(15,0.118524);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(16,0.1148703);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(17,0.08627204);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(18,0.06821089);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(19,0.05801827);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(20,0.0479212);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(21,0.03867885);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(22,0.02996051);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(23,0.02255345);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(24,0.02118528);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(25,0.01875027);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(26,0.01160365);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(27,0.01223133);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(28,0.008205022);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(29,0.00723615);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(30,0.00723615);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetBinError(31,0.01059264);
   VbbHcc_MC_H_dR_Bj0_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_MC_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_MC_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(1,1.245786);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(2,2.610542);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(3,2.735942);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(4,2.415832);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(5,1.999974);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(6,1.545889);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(7,1.275439);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(8,1.019279);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(9,0.8267132);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(10,0.6955966);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(11,0.5973485);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(12,0.5305398);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(13,0.4487259);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(14,0.3972796);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(15,0.3844181);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(16,0.3311854);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(17,0.1689867);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(18,0.09253185);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(19,0.05037448);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(20,0.0418001);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(21,0.02215048);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(22,0.01393337);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(23,0.008217114);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(24,0.005358988);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(25,0.004644456);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(27,0.002143595);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(28,0.0007145317);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(1,0.02109684);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(2,0.03053944);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(3,0.03126433);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(4,0.02937846);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(5,0.02673055);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(6,0.02350092);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(7,0.02134645);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(8,0.01908281);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(9,0.01718594);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(10,0.01576429);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(11,0.01460864);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(12,0.01376749);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(13,0.01266153);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(14,0.01191362);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(15,0.01171919);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(16,0.01087756);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(17,0.007770019);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(18,0.00574965);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(19,0.004242297);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(20,0.003864421);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(21,0.002813114);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(22,0.002231125);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(23,0.001713387);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(24,0.001383685);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(25,0.00128814);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(27,0.000875119);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(28,0.0005052502);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_MC_H_dR_Bj0_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_16->Modified();
   H_dR_Bj0_16->cd();
   H_dR_Bj0_16->SetSelected(H_dR_Bj0_16);
}
