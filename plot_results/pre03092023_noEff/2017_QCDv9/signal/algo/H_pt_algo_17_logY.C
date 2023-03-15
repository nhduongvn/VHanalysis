#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_17_logY()
{
//=========Macro generated from canvas: H_pt_algo_17/H_pt_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_17 = new TCanvas("H_pt_algo_17", "H_pt_algo_17",0,0,600,600);
   H_pt_algo_17->SetHighLightColor(2);
   H_pt_algo_17->Range(-436.7058,-0.06103464,2343.266,0.4475874);
   H_pt_algo_17->SetFillColor(0);
   H_pt_algo_17->SetFillStyle(4000);
   H_pt_algo_17->SetBorderMode(0);
   H_pt_algo_17->SetBorderSize(2);
   H_pt_algo_17->SetLogy();
   H_pt_algo_17->SetLeftMargin(0.15709);
   H_pt_algo_17->SetRightMargin(0.1234783);
   H_pt_algo_17->SetBottomMargin(0.12);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",40,0,2000);
   st_stack_78->SetMinimum(-2.20647e+09);
   st_stack_78->SetMaximum(-0.1046061);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_78->GetXaxis()->SetRange(7,30);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Event/50.0");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.01727015);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.112542);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.2706555);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.2583846);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.2112648);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.1121582);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.06908814);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.04236694);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.02277373);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.008817231);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.002980696);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.002951431);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.003939913);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.004714096);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.0123411);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.01968235);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.01897721);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.01723897);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01267735);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.009622647);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.007754101);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.005823223);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.003381437);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.002145949);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002086977);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.002275384);
   VbbHcc_algo_H_pt_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.003708887);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.02508959);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.1023686);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.1194489);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.08330241);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.04147551);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.01716001);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.01019658);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.004498848);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.001293272);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0007085235);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.0003706914);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.0008052164);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.002130005);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.004277791);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.004595881);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.003863222);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.002678822);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.001711643);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001327676);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.0008917802);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0005002967);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0003584477);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0002622988);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   H_pt_algo_17->Modified();
   H_pt_algo_17->cd();
   H_pt_algo_17->SetSelected(H_pt_algo_17);
}
