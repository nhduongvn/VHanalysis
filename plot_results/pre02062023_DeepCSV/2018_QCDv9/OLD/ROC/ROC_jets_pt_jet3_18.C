#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet3_18()
{
//=========Macro generated from canvas: ROC_jets_pt_jet3_18/ROC_jets_pt_jet3_18
//=========  (Tue Jan 24 10:54:39 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet3_18 = new TCanvas("ROC_jets_pt_jet3_18", "ROC_jets_pt_jet3_18",0,0,600,600);
   ROC_jets_pt_jet3_18->SetHighLightColor(2);
   ROC_jets_pt_jet3_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet3_18->SetFillColor(0);
   ROC_jets_pt_jet3_18->SetBorderMode(0);
   ROC_jets_pt_jet3_18->SetBorderSize(2);
   ROC_jets_pt_jet3_18->SetGridx();
   ROC_jets_pt_jet3_18->SetGridy();
   ROC_jets_pt_jet3_18->SetLeftMargin(0.15709);
   ROC_jets_pt_jet3_18->SetRightMargin(0.1234783);
   ROC_jets_pt_jet3_18->SetBottomMargin(0.12);
   ROC_jets_pt_jet3_18->SetFrameBorderMode(0);
   ROC_jets_pt_jet3_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3568[200] = {
   0,
   0,
   0,
   0,
   0.4191977,
   0.6593155,
   0.7926737,
   0.8691242,
   0.9158083,
   0.9443454,
   0.9626195,
   0.9749108,
   0.9830497,
   0.9883325,
   0.9919132,
   0.9943348,
   0.9960426,
   0.9971353,
   0.9978916,
   0.9984138,
   0.9988197,
   0.9991023,
   0.9993392,
   0.9994912,
   0.9996064,
   0.9996611,
   0.9997186,
   0.9997732,
   0.999804,
   0.9998402,
   0.9998661,
   0.9998915,
   0.9999068,
   0.9999223,
   0.9999315,
   0.9999394,
   0.9999456,
   0.9999476,
   0.9999518,
   0.9999545,
   0.9999562,
   0.9999701,
   0.999972,
   0.9999824,
   0.9999835,
   0.9999851,
   0.9999861,
   0.9999879,
   0.9999879,
   0.9999879,
   0.9999893,
   0.9999893,
   0.9999971,
   0.9999979,
   0.9999979,
   0.9999979,
   0.9999979,
   0.9999987,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy3568[200] = {
   0,
   0,
   0,
   0,
   0.7478992,
   0.9129626,
   0.963676,
   0.9827885,
   0.9911011,
   0.9951064,
   0.9971632,
   0.9982881,
   0.9989299,
   0.9993064,
   0.9995398,
   0.999688,
   0.9997846,
   0.9998504,
   0.9998942,
   0.9999237,
   0.9999444,
   0.999959,
   0.9999696,
   0.9999772,
   0.9999827,
   0.9999868,
   0.9999899,
   0.9999922,
   0.9999939,
   0.9999953,
   0.9999963,
   0.9999971,
   0.9999977,
   0.9999981,
   0.9999985,
   0.9999988,
   0.999999,
   0.9999992,
   0.9999994,
   0.9999995,
   0.9999996,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(200,Graph_fx3568,Graph_fy3568);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3568 = new TH1F("Graph_Graph3568","",200,0,1.1);
   Graph_Graph3568->SetMinimum(0);
   Graph_Graph3568->SetMaximum(1.1);
   Graph_Graph3568->SetDirectory(0);
   Graph_Graph3568->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3568->SetLineColor(ci);
   Graph_Graph3568->GetXaxis()->SetLabelFont(42);
   Graph_Graph3568->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3568->GetXaxis()->SetTitleFont(42);
   Graph_Graph3568->GetYaxis()->SetLabelFont(42);
   Graph_Graph3568->GetYaxis()->SetTitleFont(42);
   Graph_Graph3568->GetZaxis()->SetLabelFont(42);
   Graph_Graph3568->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3568->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3568);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3569);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3570);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3571);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3572);
      tex = new TLatex(0.4191977,0.8078992,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3573);
      tex = new TLatex(0.6593155,0.9729626,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3574);
      tex = new TLatex(0.7926737,1.023676,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3575);
      tex = new TLatex(0.8691242,1.042789,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3576);
      tex = new TLatex(0.9158083,1.051101,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3577);
      tex = new TLatex(0.9443454,1.055106,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3578);
      tex = new TLatex(0.9626195,1.057163,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3579);
      tex = new TLatex(0.9749108,1.058288,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3580);
      tex = new TLatex(0.9830497,1.05893,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3581);
      tex = new TLatex(0.9883325,1.059306,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3582);
      tex = new TLatex(0.9919132,1.05954,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3583);
      tex = new TLatex(0.9943348,1.059688,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3584);
      tex = new TLatex(0.9960426,1.059785,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3585);
      tex = new TLatex(0.9971353,1.05985,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3586);
      tex = new TLatex(0.9978916,1.059894,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3587);
      tex = new TLatex(0.9984138,1.059924,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3588);
      tex = new TLatex(0.9988197,1.059944,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3589);
      tex = new TLatex(0.9991023,1.059959,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3590);
      tex = new TLatex(0.9993392,1.05997,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3591);
      tex = new TLatex(0.9994912,1.059977,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3592);
      tex = new TLatex(0.9996064,1.059983,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3593);
      tex = new TLatex(0.9996611,1.059987,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3594);
      tex = new TLatex(0.9997186,1.05999,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3595);
      tex = new TLatex(0.9997732,1.059992,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3596);
      tex = new TLatex(0.999804,1.059994,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3597);
      tex = new TLatex(0.9998402,1.059995,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3598);
      tex = new TLatex(0.9998661,1.059996,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3599);
      tex = new TLatex(0.9998915,1.059997,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3600);
      tex = new TLatex(0.9999068,1.059998,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3601);
      tex = new TLatex(0.9999223,1.059998,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3602);
      tex = new TLatex(0.9999315,1.059998,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3603);
      tex = new TLatex(0.9999394,1.059999,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3604);
      tex = new TLatex(0.9999456,1.059999,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3605);
      tex = new TLatex(0.9999476,1.059999,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3606);
      tex = new TLatex(0.9999518,1.059999,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3607);
      tex = new TLatex(0.9999545,1.059999,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3608);
      tex = new TLatex(0.9999562,1.06,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3609);
      tex = new TLatex(0.9999701,1.06,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3610);
      tex = new TLatex(0.999972,1.06,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3611);
      tex = new TLatex(0.9999824,1.06,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3612);
      tex = new TLatex(0.9999835,1.06,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3613);
      tex = new TLatex(0.9999851,1.06,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3614);
      tex = new TLatex(0.9999861,1.06,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3615);
      tex = new TLatex(0.9999879,1.06,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3616);
      tex = new TLatex(0.9999879,1.06,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3617);
      tex = new TLatex(0.9999879,1.06,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3618);
      tex = new TLatex(0.9999893,1.06,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3619);
      tex = new TLatex(0.9999893,1.06,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3620);
      tex = new TLatex(0.9999971,1.06,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3621);
      tex = new TLatex(0.9999979,1.06,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3622);
      tex = new TLatex(0.9999979,1.06,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3623);
      tex = new TLatex(0.9999979,1.06,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3624);
      tex = new TLatex(0.9999979,1.06,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3625);
      tex = new TLatex(0.9999987,1.06,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3626);
      tex = new TLatex(0.9999995,1.06,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3627);
      tex = new TLatex(0.9999995,1.06,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3628);
      tex = new TLatex(0.9999995,1.06,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3629);
      tex = new TLatex(0.9999995,1.06,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3630);
      tex = new TLatex(0.9999995,1.06,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3631);
      tex = new TLatex(0.9999995,1.06,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3632);
      tex = new TLatex(0.9999995,1.06,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3633);
      tex = new TLatex(0.9999995,1.06,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3634);
      tex = new TLatex(0.9999995,1.06,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3635);
      tex = new TLatex(0.9999995,1.06,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3636);
      tex = new TLatex(0.9999995,1.06,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3637);
      tex = new TLatex(0.9999995,1.06,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3638);
      tex = new TLatex(0.9999995,1.06,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3639);
      tex = new TLatex(1,1.06,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3640);
      tex = new TLatex(1,1.06,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3641);
      tex = new TLatex(1,1.06,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3642);
      tex = new TLatex(1,1.06,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3643);
      tex = new TLatex(1,1.06,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3644);
      tex = new TLatex(1,1.06,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3645);
      tex = new TLatex(1,1.06,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3646);
      tex = new TLatex(1,1.06,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3647);
      tex = new TLatex(1,1.06,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3648);
      tex = new TLatex(1,1.06,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3649);
      tex = new TLatex(1,1.06,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3650);
      tex = new TLatex(1,1.06,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3651);
      tex = new TLatex(1,1.06,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3652);
      tex = new TLatex(1,1.06,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3653);
      tex = new TLatex(1,1.06,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3654);
      tex = new TLatex(1,1.06,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3655);
      tex = new TLatex(1,1.06,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3656);
      tex = new TLatex(1,1.06,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3657);
      tex = new TLatex(1,1.06,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3658);
      tex = new TLatex(1,1.06,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3659);
      tex = new TLatex(1,1.06,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3660);
      tex = new TLatex(1,1.06,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3661);
      tex = new TLatex(1,1.06,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3662);
      tex = new TLatex(1,1.06,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3663);
      tex = new TLatex(1,1.06,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3664);
      tex = new TLatex(1,1.06,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3665);
      tex = new TLatex(1,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3666);
      tex = new TLatex(1,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3667);
      tex = new TLatex(1,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3668);
      tex = new TLatex(1,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3669);
      tex = new TLatex(1,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3670);
      tex = new TLatex(1,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3671);
      tex = new TLatex(1,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3672);
      tex = new TLatex(1,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3673);
      tex = new TLatex(1,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3674);
      tex = new TLatex(1,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3675);
      tex = new TLatex(1,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3676);
      tex = new TLatex(1,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3677);
      tex = new TLatex(1,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3678);
      tex = new TLatex(1,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3679);
      tex = new TLatex(1,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3680);
      tex = new TLatex(1,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3681);
      tex = new TLatex(1,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3682);
      tex = new TLatex(1,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3683);
      tex = new TLatex(1,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3684);
      tex = new TLatex(1,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3685);
      tex = new TLatex(1,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3686);
      tex = new TLatex(1,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3687);
      tex = new TLatex(1,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3688);
      tex = new TLatex(1,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3689);
      tex = new TLatex(1,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3690);
      tex = new TLatex(1,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3691);
      tex = new TLatex(1,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3692);
      tex = new TLatex(1,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3693);
      tex = new TLatex(1,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3694);
      tex = new TLatex(1,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3695);
      tex = new TLatex(1,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3696);
      tex = new TLatex(1,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3697);
      tex = new TLatex(1,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3698);
      tex = new TLatex(1,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3699);
      tex = new TLatex(1,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3700);
      tex = new TLatex(1,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3701);
      tex = new TLatex(1,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3702);
      tex = new TLatex(1,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3703);
      tex = new TLatex(1,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3704);
      tex = new TLatex(1,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3705);
      tex = new TLatex(1,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3706);
      tex = new TLatex(1,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3707);
      tex = new TLatex(1,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3708);
      tex = new TLatex(1,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3709);
      tex = new TLatex(1,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3710);
      tex = new TLatex(1,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3711);
      tex = new TLatex(1,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3712);
      tex = new TLatex(1,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3713);
      tex = new TLatex(1,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3714);
      tex = new TLatex(1,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3715);
      tex = new TLatex(1,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3716);
      tex = new TLatex(1,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3717);
      tex = new TLatex(1,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3718);
      tex = new TLatex(1,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3719);
      tex = new TLatex(1,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3720);
      tex = new TLatex(1,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3721);
      tex = new TLatex(1,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3722);
      tex = new TLatex(1,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3723);
      tex = new TLatex(1,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3724);
      tex = new TLatex(1,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3725);
      tex = new TLatex(1,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3726);
      tex = new TLatex(1,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3727);
      tex = new TLatex(1,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3728);
      tex = new TLatex(1,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3729);
      tex = new TLatex(1,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3730);
      tex = new TLatex(1,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3731);
      tex = new TLatex(1,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3732);
      tex = new TLatex(1,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3733);
      tex = new TLatex(1,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3734);
      tex = new TLatex(1,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3735);
      tex = new TLatex(1,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3736);
      tex = new TLatex(1,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3737);
      tex = new TLatex(1,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3738);
      tex = new TLatex(1,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3739);
      tex = new TLatex(1,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3740);
      tex = new TLatex(1,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3741);
      tex = new TLatex(1,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3742);
      tex = new TLatex(1,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3743);
      tex = new TLatex(1,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3744);
      tex = new TLatex(1,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3745);
      tex = new TLatex(1,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3746);
      tex = new TLatex(1,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3747);
      tex = new TLatex(1,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3748);
      tex = new TLatex(1,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3749);
      tex = new TLatex(1,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3750);
      tex = new TLatex(1,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3751);
      tex = new TLatex(1,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3752);
      tex = new TLatex(1,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3753);
      tex = new TLatex(1,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3754);
      tex = new TLatex(1,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3755);
      tex = new TLatex(1,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3756);
      tex = new TLatex(1,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3757);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3758);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3759);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3760);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3761);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3762);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3763);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3764);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3765);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3766);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3767);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3768);
   graph->Draw("nodraw #3713
");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_pt_jet3_18->Modified();
   ROC_jets_pt_jet3_18->cd();
   ROC_jets_pt_jet3_18->SetSelected(ROC_jets_pt_jet3_18);
}
